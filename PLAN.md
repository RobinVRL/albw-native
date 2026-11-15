# Work plan: boot to gameplay, then 64-bit

Rules (non-negotiable, see README): decompilation only, no emulation; the finished game is
64-bit; the decomp repo is a reference and gets only portability fixes on its local branch;
game data comes from the user's ROM and is never committed.

## The boot loop (one iteration = one function)

```
tools/boot_loop.py               # relink, run, report the first stop
```
It prints the function that stopped the game (tripwire stub, crash, or tripwire inside it),
its current source, the source kind (matched / Ghidra / none), whether it is SDK
(native/sdk_map.json) and its EU disassembly. Then:

1. **SDK function** (address in an SDK block): write a native replacement in
   `native/sdk/<area>.c` defining `func_<ADDR>` (strong symbol: it overrides the decomp's weak
   one). Implement the *API meaning* on Linux/SDL3/OpenGL, never the 3DS mechanism (no svc,
   no IPC, no GPU registers). C library functions map to libc.
2. **Game function with a matched source**: fix portability only (types, 64-bit cleanliness)
   in `native/fixups/` or as a decomp-branch whitespace/portability fix.
3. **Game function with Ghidra source**: decompile it properly into
   `native/game/<ADDR>.c` (defines `func_<ADDR>`, overrides the Ghidra version):
   - real signature: argument count and types from the callers and the disassembly
     (r0-r3 + stack), return type from what callers use;
   - every `iRam/uRam<EU>` literal and `xRam + constant` PC-relative computation replaced by
     the real symbol (`data_<ADDR>` / `func_<ADDR>` / string);
   - pointers as pointer types, structs for repeated offsets (shared headers in
     `native/include/`), no pointer stored in a 32-bit integer (64-bit rule);
   - comment with the EU and USA address.
4. Rebuild only what changed (`tools/link.sh` relinks in ~10 s), rerun, next iteration.
5. Commit every ~10 iterations with the list of functions done.

Priorities inside the loop: static constructors (1,230, run first) -> main thread init ->
first frame -> title screen -> file select -> gameplay.

## Parallel tracks (when the loop is blocked or between iterations)

| Track | Goal | Tool |
|---|---|---|
| A. Link health | unresolved `func_` and C++ names -> 0 | `build_decomp.py` report |
| B. Compile health | 420 failing sources -> 0 | report `failed` list |
| C. SDK map | name the 641 SDK entry points by area (fs, hid, gx, snd, os, apt) | `find_sdk.py` + call graph |
| D. Graphics | native replacement of the game's graphics API on `native/platform` | after C names gx |
| E. 64-bit | `build_decomp.py --arch x86_64` error count trending to 0 | weekly baseline |
| F. Ghidra timeouts | redo the 5 functions that timed out with a longer limit | `ghidra_dump.py` |

## Metrics to report each session

- boot depth: last function reached / constructors completed / frames rendered
- functions natively decompiled (native/game) and SDK functions replaced (native/sdk)
- unresolved names after link, failing sources, 64-bit failing sources

## Agent hand-off queue (next step per track; launch the follow-up when an agent finishes)

| Track | Current | Next when it finishes |
|---|---|---|
| Boot | title, file select (170 s), attract demo run; new game: file 1 -> name entry (native swkbd) -> Begin -> opening Demo1 loads, then stop 102 (heap teardown: effect-slot array of 004B91B8 holds garbage, 004A1B00); stops 81-102 in BOOT_LOG | (1) stop 102; (2) 18 stale compilefix copies with unmapped stack objects (BOOT_LOG list), regenerate one by one with ARM checks; (3) 88b text colour via the BCLYT gradient colours; name text not drawn on the name bar; (4) class sweeps: lost `this` (stop 91 list), stack-argument callees, float returns typed void; test runs use ALBW_SAVE_DIR (private copy) |
| Systemic fixes | float casts, no-return, return types, `tools/systemic_rebuild.sh` | run the combined rebuild at a boot-agent pause point; re-run the boot to confirm no regressions; commit |
| Font / layout | RectDrawer + nw::lyt producers, hand-written GLSL; title pass in progress (boot agent): pane geometry fixed (stop 86) | glyph rendering of "Press (A)" (solid blocks), then masks/colours vs the emulator frames |
| Models (3d agent, branch title-3d) | h3d title models draw on the top screen: golden Triforce assembled over black, then a blue sky dome (BOOT_LOG 76-88 [3d]); fixes: CALL return segments (render.c), index buffers from the relocation table, VRAM command sections from staging, deferred LUTs, 003FD364 colour animation, 001B7C24 VRAM allocator | (1) overworld meshes (variants 40/73) rasterise (ALBW_H3D_WHITE=40 + ALBW_H3D_LOGICCOPY=1 shows trees, house, rocks) but leave no pixels in normal rendering; untangle with ALBW_H3D_SNAPFROM / SKIPVAR / NODEPTH (title timing varies run to run, check per-draw snapshots, not single frames); (2) the logo (TitleLogo.bch) and the scene's transition from the Triforce to the overworld; (3) boot agent: the top-screen clear is the BlackFilter/sky h3d draw, so stop 80's missing top clear follows once h3d draws produce pixels (done here) |
| Primitive renderer / effects (queued) | — | sead PrimitiveRenderer (004979CC) and eft particle producers + hand-written GLSL |
| Audio (queued) | — | nn::snd / DSP -> SDL3 audio (BCSTM streams, BCSAR banks) |
| 64-bit (queued) | — | shared type headers (sead, game objects), retype pointer-in-int functions, build --arch x86_64 to zero errors |
| Robustness (queued) | 104 hand-checked rewrites + 600 template-generated (verified against reference disassembly; compile at -m32), 680 ranked functions done; LINKED (link.sh globs native/robust/*.c) | A/B smoke-run with and without the 600 generated files if the boot regresses; next batch from PRIORITY.md |
| Gameplay link (queued) | 97 exact rewrites in native/gameplay, tests pass -m32/-m64, LINKED (link.sh globs native/gameplay, except 0051E5F8) | (1) fold native/gameplay/tools/livein_dregs.py (`vpush {d0}` float args, 17 functions) into livein2.py and run the next systemic rebuild; (2) resolve the link blockers in native/gameplay/AUDIT.md section 6 (002AF168 caller, 004AAD4C/004AAF44/004ED9F4 callers, 10 duplicate addresses with ours winning at 002AD8A0); (3) check the 10 duplicate addresses resolve to ours |
| Core/framework/hot rewrites (queued) | native/core 98, native/framework 19, native/hot 29 (growing); all exact vs ARM, tests -m32/-m64, NOT linked (link.sh does not glob them) | after converter round 3 rebuild: add native/core, native/framework, native/hot to link.sh/link64.sh (-I each dir), resolve 24 core-vs-matched duplicates, A/B smoke-run |
| Converter round 3 (in progress) | gated ALBW_CONVERT_V4; tools/systemic_rebuild3.sh + native/ROUND3.md | run at a boot pause: callee return classes (0010F1F8 etc.), unwritten stack objects (379 fns), vpush float args, 64-bit returns, variadic args, paired float loads, returns_this float list |
| Next rebuild (queued) | from boot stops 52-61 | round 3 stage 2 plus: `-ftrivial-auto-var-init=zero` for decomp sources (perm_local UB, stop 59); divmod pair SIG_OVERRIDES reach ~94 callers (stop 60); float words through untyped `(code *)` calls cast, not promoted to double (stop 56); lost args in virtual calls (half of recent stops); matched void sources that return a callee result (stop 57); re-run native/refs/tools/task_factories.py after; VFP register-pair returns (Vec2 in s0:s1) typed `float`, callers use stale locals / in_s1 for y (stop 86: 00568B68 GetVtxPos, also 00569264); stack-argument callees with short Ghidra prototypes (STACK_ARG_CALLS, stop 82) |
| FCONV audit (2026-11-14) | round 3 stage 1 + fconv_interim (whole game) | float<->int value conversions where Ghidra meant bit copies: 328 sources fixed by fconv_interim; 15 sites in 12 sources left that FCONV does not match (double->undefined4 / float->undefined8 / undefined4->float with conversions in between): 001732B4 00196914 001D7348 0024B360 0028FE68 002C64D8 003183C0 0032DB20 003A4650 004784B8 00590EC8, plus matched src 0024AB60 (int->float). Extend FCONV to these forms in stage 2. Indirect `(code *)` calls with float args: under 10 sites (stop-56 class is rare). 476 double->float narrowings and ~1,080 float->double promotions are Ghidra double temporaries/literals: precision only, low priority. |

## Unresolved symbols after the `_DAT_` fix (boot stop 101; tripwire stubs, build/stubs.c)

Data (18, the gen_data "unplaceable" names; `ALBW_GEN_DATA_DEBUG=1` lists them): DAT_00000005 DAT_00000006 DAT_00000007 DAT_00000009 DAT_0000000a DAT_0000000b DAT_0000000d DAT_0000000e DAT_0000000f DAT_00000011 DAT_00000012 DAT_0000001b DAT_0000002b DAT_0000002d DAT_00000030 DAT_0000003c DAT_00000040 DAT_00000089 - small constants Ghidra printed as `&DAT_000000xx` (an address below the image): each use is an integer literal, not data; stubbed with 4 KiB blocks, a read gets zeroes. Converter: print them as the integer.

Functions (35+3, each a runtime_fatal tripwire):
- `_ZN7Primary2v0Ev` .. `_ZN7Primary3v16Ev` (17), `_ZN13Base_001510A4D2Ev`, `_ZTI13Base_001510A4`, `_ZTVN10__cxxabiv117__class_type_infoE`, `_ZTVN10__cxxabiv120__si_class_type_infoE`: virtual-method / RTTI declarations of matched C++ sources (placeholder classes `Primary`, `Base_001510A4`), referenced from their vtables or typeinfo, not called;
- `coprocessor_function`, `coprocessor_load`, `__sqrtf`: Ghidra intrinsics (cdp / ldc, vsqrt) left in converted text;
- `func_1FF80000`, `func_FE6533C4`, `func_FE6D27C8`, `func_FEADFFF6`, `func_FEAE0002`: calls to addresses outside the code (shared page 0x1FF80000, negative offsets): Ghidra artefacts;
- `func_001A3F04`, `func_001EA96C`, `func_00200080`, `func_00205E20`, `func_002A0078`, `func_002A018C`: game addresses with no function in the decomp table (mid-function / fall-through entries): need a source each when reached;
- `data_711F50`, `func_getInfo51C`, `func_leaf`, `func_tail`: placeholder names in matched sources.
