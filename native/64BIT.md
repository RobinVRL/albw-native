# 64-bit: from low-4GB mode to fully native x86-64

The finished game is 64-bit (README). This file is the plan and the state of the x86-64 build.

## Where we are: low-4GB mode (milestone 1)

An x86-64 binary in which every address the game can see fits in 31 bits. The decompiled code
keeps its 32-bit memory layout (game data, objects, vtables, file formats with 4-byte pointer
slots) and runs as native x86-64 code.

```
tools/build_decomp64_v3.sh      # decomp -> build/decomp64 (round-2 systemic inputs, like build_decomp_v3.sh)
tools/link64.sh                 # -> build/albw64   (ALBW_FRONTEND=qt -> build/albw64-qt)
SDL_VIDEO_DRIVER=offscreen ALBW_SAVE_DIR=$PWD/build/x64/save timeout -s KILL 60 build/albw64
```
The 32-bit build (build_decomp.py / link.sh / build/decomp / build/albw) is separate and unchanged.

### The invariant and how it is kept

| what | where | how |
|---|---|---|
| code, game data (gamedata.s), native .data/.bss | the binary | `-no-pie`, base 0x400000; gamedata pointer words stay `.long` = `R_X86_64_32` (ld refuses a symbol above 4 GiB) |
| heap + device memory (all sead heaps) | native/sdk/memory.c | reservations with `MAP_32BIT` |
| VRAM, GPU buffers | native/sdk/gfx.c | 3DS VRAM address or `MAP_32BIT` (already) |
| game thread stacks + their glibc static TLS | native/sdk/os.c -> runtime/lowmem.c | `pthread_attr_setstack` on a `MAP_32BIT` stack |
| main thread stack | runtime/entry.c -> lowmem.c | the game main runs on a 16 MiB low stack (`swapcontext`, same thread: SDL/Qt main-thread state kept) |
| SDK TLS block (`albw_tls()`) | runtime/intrinsics.c | one low page per thread |
| kernel handles | os.c | small integers (already) |
| anything else | `albw_check_low()` | fatal if an address handed to the game is >= 2 GiB |

Below 2 GiB (not just 4) so that Ghidra's `int` and `uint` casts both give the address back
(sign extension of a positive int is harmless).

### Pointer words in game memory: `ALBW_GP` (native/include/gptr.h)

`T *ALBW_GP` is clang's `__ptr32 __uptr` on x86-64 (needs `-fms-extensions`) and nothing on
i386: a real pointer type of 4 bytes that converts implicitly (zero-extended) to a normal
pointer. Plus `gptr_t` / `GPTR_TO` / `GPTR_OF` / `GFN` for plain words and a C++ `GPtr<T>`.
LLVM 23 limitations found and worked around:
- a call *through* a `__ptr32` function pointer crashes instruction selection -> convert first
  (`(*(code *)*(code * ALBW_GP *)(x))(...)`, `GFN(T, w)`);
- a symbol address stored into a `__ptr32` slot is a constant `addrspacecast` it cannot emit ->
  `ALBW_LAUNDER(&sym)` (opaque copy; build_decomp and link64.sh retry with it automatically);
- vectorised `__ptr32` casts crash -> the 64-bit native objects use `-fno-vectorize -fno-slp-vectorize`.

### Tooling (all 64-bit only, the i386 output is unchanged)

- `tools/ptr32.py`: Ghidra C and native game C get 4-byte inner pointers:
  `T **` -> `T * ALBW_GP *`, pointer-typed game globals (`extern int *DAT_00100ea0;`,
  `extern void *data_00715430[];`) -> `ALBW_GP`, `FLD(p, off, T *)` -> `T * ALBW_GP`,
  `FLD(p, off, fn_typedef)` -> read as a u32 and converted, calls through such words converted.
  Function-local pointers keep 8 bytes (registers / native frame; the V2 converter's
  `albw_frame` already keeps the ARM stack frame layout in 4-byte slots).
- `build_decomp.py --arch x86_64`: Ghidra sources through ptr32; matched sources compiled to
  LLVM IR and checked for pointer-sized memory words (`load ptr` / `store ptr` / structs with
  pointer members = C++ objects, vtables, typed pointer fields): such a function falls back to
  the address's Ghidra version.
- `tools/link64.sh`: link.sh for x86-64; native/game, native/robust, native/gameplay sources go
  through `ptr32.py --native`; x86-64 returns-this thunks (System V: rdi kept in rbx, 16 stack
  words copied through r11); `ALBW_FRONTEND=qt` links build/frontend-qt/libalbw_frontend_qt.a.
- `tools/layout64_scan.py`: inventory of layout-critical native code (after ptr32 with --p32).

### Numbers (2026-11-14, round-2 systemic inputs: build_decomp_v3.sh vs build_decomp64_v3.sh)

Compile (26,268 functions with source):

| | 32-bit build/decomp | 64-bit build/decomp64 |
|---|---|---|
| sources compiled / failed | 26,001 / 270 | 26,008 / 270 (same set; no 64-only compile failure) |
| functions exported | 25,962 | 25,962 |
| matched sources used | 7,568 | 3,692 |
| Ghidra sources used | 18,700 | 22,576 |
| matched ABI check (i386-modelled, ARM evidence) -> Ghidra | 551 | 551 (same verdicts) |
| matched sources layout-critical -> Ghidra | - | 5,225 (4,452 pointer loads/stores incl. C++ virtual calls, 3,487 offsets differing from i686, 487 structs with pointer members; overlapping) |
| tripwire stubs at link | 930 functions, 45 data | 928 functions, 18 data |

Link: build/albw64, 24 MB, non-PIE at 0x400000, no relocation overflow (every game symbol < 4 GiB).

Native code (layout64_scan.py --p32, after the ptr32 rewrites and the manual ALBW_GP edits):

| dir | files | layout-critical before | after |
|---|---|---|---|
| native/game | 1,260 | 417 (Ghidra-style `*(code **)`, `*(int **)`, pointer externs) | 0 (1 false positive: `stderr`) |
| native/robust | 704 | 685 (FLD pointer fields, albw_pmf, SafeString temps) | 2 (native static name tables, not game memory) |
| native/gameplay | 73 | 0 | 0 |
| native/sdk | 12 | 7 files | hand-converted where game memory is touched (os.c PTR/VCALL/externs, memory.c heap vtable + globals, fs.c server object, gfx.c nngxGetAllocator); the rest are native-only structs (lyt.c/h3d.c/services.c still to review) |

Layout-critical type inventory (pointer fields that overlay game memory):
- native/include/sead.h: SafeString {vtbl, mStringTop}, PtrArrayImpl.mPtrs, RuntimeTypeInfo
  Interface vtbl (+ isDerived slot as gptr_t) -> ALBW_GP.
- native/robust/robust.h albw_pmf.ptr, vtable slot reads; robust_sm.h / robust_pmf.h FLD
  pointer fields (state machine, delegates) -> ALBW_GP.
- native/sdk/memory.c sead_Heap.vtbl (slots), ThreadMgr/HeapMgr instance pointers, current-heap
  slot; fs.c fs_server_object.vtable; os.c PTR/VCALL, display context, ThreadMgr, scene
  objects, 0025E25C SafeString temp; gfx.c nngxGetAllocator out-params; game/0010DC6C RomFsFile;
  robust/0016FD34 FixedSafeString temp.
- matched decomp sources: 4,778 (list: `build/decomp64/obj/src/**/*.layout64`, non-empty) — these
  run their Ghidra version in the 64-bit build for now.

### Boot (offscreen, `SDL_VIDEO_DRIVER=offscreen`)

build/albw64 runs: platform + GL 3.3 context, runtime init, all 1,230 static constructors, game
main, nngxInitialize, the framework bootstrap 00100F68 (HeapMgr / RootHeap / ExpHeaps in low
memory at 0x45400000, heap block chains identical to the 32-bit run), sead threads started on
low stacks (Prepare thread), task creation on the Prepare thread (004ECA48 -> 0048E670 ->
0048E718 -> 0049D4A8 -> 0049D3D8): stops there because the task factory word read from the
copied CreateArg is wrong (kind byte 0x5C instead of 2). The 32-bit build at the same commit
(round-2 V3 converter) also stops in 0048E718 (in 0049F920, the CreateArg constructor), so this
is the round-2 frame conversion of 0048E718, not a 64-bit issue: the 64-bit boot is at the
32-bit boot's depth. Fixes found on the way (all in the tooling or ALBW_GP edits): pointer
globals read as 8 bytes (00100E78), struct offsets shifted by pointer members in matched code
(00109730 OffsetList), thread TypeInfo / start block (os.c 00104248).

## Path to fully native 64-bit

Milestone 1 (now): low-4GB mode boots as far as the 32-bit build.

Milestone 2: matched sources back. The 4,778 layout-critical matched sources are better code
than their Ghidra versions. Mechanical first: their headers' class/struct pointer members ->
`ALBW_GP` (or `GPtr<T>` in C++), and C++ virtual calls -> an explicit vtable call through
4-byte slots (a header-level `ALBW_VCALL(obj, slot, sig)`), since the compiler's own vtables
are 8-byte. Target: layout-critical matched sources -> 0, matched sources used back to >= 8,136.

Milestone 3: typed game objects. Replace the Ghidra int-pointer style with typed structs
(native/include/: sead, framework, actor, resource classes), still with ALBW_GP members, one
class at a time, as the boot/robustness work rewrites functions. Measure: Ghidra functions
used (22,137) and `ALBW_GP` occurrences in native code trending down to "only at the data
boundary".

Milestone 4: native data. The game's own data (gamedata.s: 0x6B5F8 rodata + 0x289F0 data +
0x87A44 bss, ~6,800 relocated pointer words, vtables, pointer tables, static SafeString
tables) generated as native C structs/arrays with 8-byte pointers (`.dc.a` instead of `.long`)
per typed region; vtables become arrays of native function pointers.

Milestone 5: native resources. Loaders that today relocate 32-bit offsets inside loaded files
(BCH/h3d ResFile setup, BFLYT/BFLAN layouts, BCSAR/BFSAR, MSBT, byaml, sarc) instead convert
each file into native structs on load (native/assets already parses bch/sarc/yaz0/textures
into native structures; the game-side loaders switch to them).

Milestone 6: no low-4GB requirement. When no game word holds an address (ALBW_GP count 0 in
the built sources, no Ghidra int-pointer code reachable), drop MAP_32BIT / low stacks /
`-no-pie`, build PIE with ASLR; `albw_check_low` becomes unnecessary. A canary build that maps
all heaps above 4 GiB finds the remaining 32-bit assumptions (every truncated pointer faults).

## Open problems / blockers

- Ghidra prototype mismatches are tolerated by the x86-64 ABI only because the addresses are low
  (a 32-bit `int` argument read as a pointer is zero/sign-extended correctly below 2 GiB).
- Host threads that run game callbacks (the SDL audio thread calling the game's aux callbacks)
  have high stacks; a game callback that stores a stack address in a game word would truncate.
- matched C++ sources with virtual calls cannot be used before milestone 2.
- `operator new(unsigned)` in matched headers: rewritten to the host size_t by build_decomp.
- matched_abi.py models the i386 ABI; its verdicts are reused for x86-64 (the ARM side decides).
  An x86-64 mode would matter only for prototype mismatches that x86-64 passes differently
  (none known: integer/pointer args all go in 64-bit registers).
- Low-4GB runtime bugs show as wrong layouts, not as crashes at the boundary: run the 64-bit
  build next to the 32-bit one and diff (gdb scripts in build/x64/*.gdb did the heap chain and
  task-factory comparisons).
