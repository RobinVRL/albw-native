# native/core: hand-written core library layer

This directory holds exact, hand-written C for the most-called library functions (ARM run-time
helpers, the Thumb C library, sead containers, strings, heap tree, Random/CRC and math). They
replace Ghidra decompilations, matched sources that are not 64-bit clean, and functions with no
source at all. Each `func_<USA>` is a strong definition that overrides the weak decomp symbol.

How they were written:
- From the EU disassembly (`native/robust/tools/armdis.py`, run with the decomp repo's `.venv`
  Python, which has capstone; add a 3rd argument for Thumb mode).
- Return class and parameters follow the round-2 converted callers. Every definition has been
  checked against `build/decomp/ghidra_fallback/ghidra_analyzed4` after the systemic rebuild
  finished.
- A parameter that callers declare `int` but use as an address is taken as `uint32_t` and
  converted with `gp_ptr`.

**Status: not linked.** 98 functions. They are not yet in `tools/link.sh` or `link64.sh`.

Tests: `bash native/core/test/run_tests.sh`. It compiles every `native/core/*.c` with `-Werror`
for -m32 and -m64, then builds and runs 7 test programs on both targets. All pass:

| test | checks |
|---|---|
| crt | 929,613 |
| list | 82 |
| heap | 26 |
| thumb | 44 |
| string | 97 |
| math | 199 |
| treemap | 16 |

The flags are the build's float model: `-msse2 -mfpmath=sse -ffp-contract=off`.

| file | contents |
|---|---|
| core.h | shared helpers: gameplay.h + gptr.h, ARM register-shift helpers, `albw_uldivmod`/`albw_ldivmod`/`albw_f2lz` |
| crt_aeabi.c | `__aeabi_` idivmod/uidivmod/uldivmod/ldivmod/lasr/f2lz |
| crt_thumb.c | Thumb C library: vec_dtor, vec_cctor, errno, tolower, memcmp, strncat, wcs*, swprintf |
| sead_list.c | sead ListNode/ListImpl, nw::ut LinkList |
| sead_container.c | ListImpl sort, ListNode insertBack, PtrArrayImpl |
| sead_treemap.c | TreeMapImpl insert (LLRB), SafeString::compare |
| sead_heap.c | Heap/HeapMgr findContainHeap, disposer list, dispose_/destruct_ |
| sead_string.c, core_str.h | SafeString / Buffered / Fixed / Heap strings |
| sead_random.c | Random init, getRandom, percent chance |
| sead_hash.c | CRC-32 |
| math_mtx.c, math_vec.c, core_math.h | Matrix33/34/44, quaternion, Vec helpers |
| callers_0010F1F8_float.txt | the 177 converted caller files that declare 0010F1F8 `float` (link note 1) |

## Functions

"callers" = converted caller files (`extern` declarations), or the ARM call graph where none
exist. "bug fixed" compares with the source the build uses today.

### Tier 1: run-time helpers and C library

| USA | identity | callers | bug fixed | conf |
|---|---|---|---|---|
| 00114608 | `__aeabi_f2lz` (float bits in r0 -> s64) | 198 | Ghidra cannot follow the out-of-range path: it goes through the FP exception dispatcher 00114D80, which returns via a descriptor word after the `bl`. ARM saturates (INT64_MAX/MIN) and gives NaN -> 0. Returns the r0:r1 pair as u64 (see link note 2). | high |
| 00110710 | `__aeabi_uidivmod` | 49 | r0:r1 = {q, r} pair (callers read the remainder as `>> 0x20`); x/0 -> {0, x} through idiv0, no trap | high |
| 001104E4 | `__aeabi_idivmod` | 44 | same; INT_MIN/-1 = INT_MIN rem 0 (x86 traps); x/0 -> {0, x} | high |
| 0011624C | `__aeabi_ldivmod` | 10 | quotient pair (remainder via `albw_ldivmod`); INT64_MIN/-1, /0 | high |
| 00115F34 | `__aeabi_uldivmod` | 4 | quotient pair (remainder via `albw_uldivmod`); /0 -> 0, rem n | high |
| 00116224 | `__aeabi_lasr` | 1 | ARM register-shift semantics (low byte, >= 32) | high |
| 00100950 | `__aeabi_vec_dtor` (returns arr-8) | 17 | **no source: link stub** (tripwire) | high |
| 00100A86 | `__aeabi_vec_cctor_nocookie_nodtor` | 4 | **no source: link stub** | high |
| 00100986 / 00100974 | `__set_errno` (errno word data_007A9140) / its ARM veneer | 9 / 1 | **no source: link stubs** | high |
| 001006E0 | `tolower` (C locale; the game's ctype pointer is set by C start-up code the native entry skips) | 4 | **no source: link stub** | high |
| 00100858 | `memcmp` | 5 | **no source: link stub** | high |
| 00100834 | `strncat` | 1 | **no source: link stub** | high |
| 00100910 / 001008E8 / 001008CC | `wcslen` / `wcsncmp` / `wcsncpy` (UTF-16) | 6 / 3 / 1 | **no source: link stubs** | high |
| 00100744 | `swprintf(buf, n, fmt, ...)`; variadic arguments collected into ARM words by format and passed to native 001006FC | 1 | **no source: link stub** | high |

Already native and checked against the ARM code (correct): 00100118 vec_ctor and 00100174
guard (native/runtime/cxxabi.c); memcpy/memmove/memset/memclr/strlen/strcmp/strncmp
(native/sdk/memory.c); vsnprintf 0010013C (native/sdk/boot_extra.c).

### Tier 2: sead containers and heap tree

| USA | identity | callers | bug fixed | conf |
|---|---|---|---|---|
| 0010F1F8 | `ListNode::erase_` | 177 | ARM return class (void); Ghidra's float pass-through return removed (link note 1) | high |
| 0010F1DC | `ListNode::insertFront_` (returns this) | 122 | 64-bit clean (Ghidra int-pointer links) | high |
| 0049F6DC | `ListNode::insertBack_` | 1 | `this` taken as a 32-bit word | high |
| 0049F5FC | `ListImpl::clear` | 211 | matched; 64-bit clean, r0 = list | high |
| 0049F688 / 0049F634 | `ListImpl::popFront` / `popBack` | 10 / 5 | matched; int-declared list param (x86-64 upper half) | high |
| 0049F434 | `ListImpl::sort(offset, cmp)` (stable insertion sort) | 6 | exact compare/relink order; callback through the game word | high |
| 00112364 | nw::ut `LinkListImpl::Insert(it, p)` -> p | 32 | int-declared iterator | high |
| 00111EF0 / 00111EE4 | `LinkListImpl::Erase(p)` -> next / thunk (+0x1DC, +4) | 19 / 4 | lost r0 (next) restored | high |
| 003E696C / 003E69B8 | `LinkListImpl::Erase(it)` / `Erase(first, last)` -> end | 12 / 6 | lost r0 restored | high |
| 0010B3EC / 0010B380 / 0010B3C0 | `PtrArrayImpl::setBuffer` / `allocBuffer` / insert check | 80 / 25 / 7 | matched/Ghidra; exact r0 at return | high |
| 00687F18 | `TreeMapImpl::insert` (LLRB, equal key replaces the node and calls its vtable slot +8) | 6 | 64-bit clean, exact rotations/colour flips | high |
| 0069190C | `SafeString::compare(o, n)` (signed chars, 0x40000 cap) | 1 | exact | high |
| 0010E2A4 | `HeapMgr::findContainHeap` | 11 + memory.c | 64-bit clean | high |
| 0010EF18 | `Heap::findContainHeap_` (recursive) | 1 | 64-bit clean | high |
| 0049AFE4 | `Heap::removeDisposer_` | 18 | 64-bit clean | high |
| 0049B044 | `Heap::dispose_(begin, end)` | 4 | 64-bit clean; restart-after-destroy loop | high |
| 0049B0E4 | `Heap::destruct_` | 3 | 64-bit clean | high |

### Tier 3-4: strings, Random, CRC

| USA | identity | callers | bug fixed | conf |
|---|---|---|---|---|
| 0010BB00 | SafeString copy (8 bytes), returns dst | 12 | matched; 64-bit clean | high |
| 003D231C / 003D22CC / 003D22F4 | clear SafeString pair / copy-or-clear (two identical copies) | 7 / 5 / 2 | matched | high |
| 003D2288 | copy obj+0x20 into dst, then copy-or-clear into out | 4 | int-declared object | high |
| 00689A2C | `BufferedSafeString(buf, size)` | 54 | matched; buffer as a 32-bit word | high |
| 0010BDF0 / 00688F10 / 00689024 | `FixedSafeString<24/32/64>()` | vec_ctor / 2 / 13 | 64-bit clean; final vtable word from the literal pool | high |
| 00688F58 | `FixedSafeString<64>(const SafeString&)` | 8 | exact vtable-store order, inlined copy | high |
| 006890C8 | `HeapSafeString(heap, src)` | 3 | allocates through 0010CEE0; failed-allocation path as on the 3DS | high |
| 00691BD0 | Buffered `assureTerminationImpl_` (vtable +8) | vtable | matched | high |
| 00689894 | `BufferedSafeString::copy(src, len)` | 32 | matched C++ falls back to Ghidra on 64-bit (virtual call); 0x40000 cap | high |
| 00689A64 | wide Buffered copy | 3 | matched | high |
| 00689928 | `BufferedSafeString::append(src, len)` | 18 | Ghidra `undefined8` return -> int | high |
| 00111A20 | `BufferedSafeString::formatV` (native vsnprintf 0010013C) | 21 | matched; 32-bit words | high |
| 003E6AA8 | bounded `snprintf(buf, size, maxLen, fmt, ...)` | 3 | now variadic (link note 4) | high |
| 00691884 | `SafeString::isEqual` | 25 | matched; 64-bit clean virtual calls | high |
| 006919D8 / 00691568 / 006916F0 | SafeString findIndex / rfindIndex / include | 8 / 4 / 6 | exact inlined compare | high |
| 00688CA0 | string tokenizer next(out) | 48 | int-declared self | high |
| 0049BB30 | `Random::init(seed)` (0x6C078965) | 4 | Ghidra `void`; ARM returns this+8 | high |
| 0010FD28 | `Random::init()` seeded from the tick | 8 | matched | high |
| 0058A7D4 | getRandom(): `*data_007124F0 + 0x660` | 185 | matched | high |
| 0058A474 | percent chance `(getU32 * 100) >> 32 < pct` | 22 | Ghidra `undefined8` return -> bool | high |
| 003E300C | CRC-32 with caller state, returns ~state | 4 | table built once, not 1 KB on the stack per call | high |
| 004A13D4 / 004A143C | build the global CRC table / standard CRC-32 | 1 / 12 | 13D4 returns table[255] (Ghidra `void`) | high |

00111A64 `Random::getU32` stays matched: its source is exact and has no pointer fields.

### Tier 5: math (not in native/gameplay)

| USA | identity | callers | bug fixed | conf |
|---|---|---|---|---|
| 001151F8 | Matrix34 from Matrix33 + translation | 28 | loads before stores (aliasing); r0 = dst | high |
| 0049216C | Matrix34 from Euler idx + translation | 25 | exact order; s0 = m[5] (callers float) | high |
| 00491B3C / 00491404 | Matrix34 / Matrix33 from quaternion | 18 / 15 | exact unfused order | high |
| 00491938 / 00491338 | Matrix34 / Matrix33 from Euler idx | 15 / 11 | exact; r0 is a dead stack address on ARM (returns 0) | high |
| 00491A18 / 00491D78 | Matrix34 from Euler (idx / radians + scale) + translation | 7 / 10 | exact; r0 = translation z word | high |
| 001150CC / 00115108 | Matrix34 / Matrix44 to GPU uniform packet | 14 / 3 | loads before stores; layout | high |
| 001150B8 / 001150B0 | Matrix44 copy (self-check) / thunk obj+4 | 2 / 6 | 64-bit clean | high |
| 001151EC / 001151CC / 00115224 | Matrix34 / 33 / 44 copy | 99 / 40 / 11 | matched; 00115224 r0 = dst+64 | high |
| 001151D8 | Matrix33 = rotation of Matrix34 | 11 | lost r0 (dst+36) restored | high |
| 00115194 | tan(angle idx) from the sin/cos table | 3 | exact | high |
| 0049EF80 | closest point on segment, s0 = distance² | 11 | ARM NaN branches | high |
| 0049C154 | Vec4 lerp, t clamped, s0 = t | 9 | NaN t kept | high |
| 0011558C / 00114F58 | Matrix34 inverse (identity if singular) / inverse returning ok | 9 / 7 | singular test on bit pattern (+0/-0) | high |
| 0011529C / 001153A0 | Matrix33 inverse / inverse-transpose | 9 / 6 | same | high |
| 003E2134 | static identity Matrix34 (guard 00100174) | 8 | exact guard path | high |
| 004918CC | Matrix34 scale columns | 6 | exact | high |
| 00491C08 / 004914B4 | quaternion from Matrix34 / Matrix33 | 6 / 3 | 4 branches, zero-root skip, NaN | high |
| 00492078 | Matrix34 = Matrix34 x Matrix33 (translation kept) | 5 | exact | high |
| 003E2298 | Vec3 cross | 4 | loads first | high |
| 004906A8 | ln(x) from a table | 7 | saturating vcvt.u32 | high |

## Link notes

1. **0010F1F8 return class (link blocker, i386).** The ARM `ListNode::erase_` is void. The
   matched C++ callers (the `ListNode*::erase_` aliases in native/symbol_aliases.txt),
   native/sdk/os.c, native/game/func_0049C334.c, native/gameplay/func_004A879C.c and
   native/hot/* call it void.

   The round-2 conversion instead declares it `float f(int *, float)` in 177 caller files
   (`callers_0010F1F8_float.txt`), plus native/compilefix 00649E18, 0064B4A0, 0064E9F4 and
   00650A24. 80 of those files assign the result as their s0 (`in_s0 = func_0010F1F8(p,
   in_s0)`), because Ghidra models s0 passing through untouched. Each such call pops an empty
   x87 register on i386 and gets NaN.

   Fix in the converter: add `SIG_OVERRIDES["func_0010F1F8"] = "void func_0010F1F8(int
   *param_1)"` and rewrite `x = func_0010F1F8(p, x);` to `func_0010F1F8(p);`. That is exact:
   the ARM leaves s0 unchanged.
2. **64-bit (register-pair) returns are truncated by the converter.**
   `import_ghidra.signatures()` turns every non-float return type into `int`, so `undefined8`
   helpers lose r1 at the call. This breaks:
   - the remainder of uidivmod (49 caller files) and idivmod (44), which callers read as
     `(ulonglong)x >> 0x20`;
   - the high word of f2lz (198), ldivmod (10), uldivmod (4) and lasr (1);
   - any other `undefined8` function.

   The definitions here already return `uint64_t` with r0 in the low half. That is correct for
   today's `int` declarations and for a fixed `undefined8` one. The converter should keep
   `undefined8` / `longlong` / `ulonglong` returns. The remainders of uldivmod/ldivmod (r2:r3)
   cannot be returned in C; no converted caller uses them.
3. **Duplicates with matched objects** (the strong definition here wins; resolve explicitly at
   link by dropping either the matched object or the core definition):
   - Tier 2: 0010B380, 0010B3EC, 00111EE4, 0049F5FC, 0049F634, 0049F688.
   - Strings, Random, hash: 0010BB00, 00111A20, 003D22CC, 003D22F4, 003D231C, 00689894,
     00689A2C, 00689A64, 00691884, 00691BD0, 0010FD28, 0058A474, 0058A7D4, 004A13D4.
   - Math: 001150B0, 001151CC, 001151EC, 00115224.

   0010B3EC also has a C++ alias in native/symbol_aliases.txt, which keeps working.

   No address here is defined in any other native directory. The gameplay tests player_test.c
   and residual_test.c stub 001151EC/001151CC/00491404; that is test-only.
4. **Lost variadic arguments.**
   - 003E6AA8: all 4 call sites (003FF0D8 x2, 003FDC34, 00404360) push 1-3 variadic words, but
     the converted callers declare `int f(int, uint, int, undefined4)` and pass none. The output
     is garbage until those callers are fixed.
   - 00100744 (one caller, 003DA934) declares one variadic word, which is right for its
     `"ngword_%d.txt"`.
   - Both definitions are variadic. On x86-64, `boot_extra.c`'s word-array va_list convention
     only works through the format-driven collection (crt_thumb.c `core_va_words`).
5. **Signatures.** Checked with sigcheck's rules against the round-2 conversion after the
   rebuild finished: every definition is OK except 0010F1F8 (note 1) and 003E6AA8 (`...`,
   note 4). 0049AFE4, 0049B044, 0049B0E4 and 0049F434 report VOIDRET; retreads.json shows no
   caller reads their r0.

   Native prototypes elsewhere (native/game, sdk, gameplay, robust, framework, hot, route,
   compilefix) agree with these classes, apart from the four compilefix files in note 1.
6. **External symbols needed at link:**
   - native code: 0010CEE0 (memory.c), 0010C0B8 (os.c), 0010EEE0/0010E294 (matched),
     001006FC/0010013C (boot_extra.c), 00115154 (native/gameplay), 0059163C/005909A0
     (native/robust), 00100174 (cxxabi.c);
   - data: data_007A9140, data_00715430, data_0079E048/64/80, data_007124F0, data_00714E80,
     data_0079D790, data_006C3AB8, data_006C4BD0, data_007270F4, data_007AF2A4 and the
     literal-pool vtable words used by sead_string.c (all in build/data/gamedata.s).
7. **Float mode.** The singular-determinant and denormal behaviour matches the 3DS only with
   FTZ/DAZ set (native/gameplay/fpmath.patch).

## Remaining gaps

- **Other functions with no source** in the Thumb C library are printf-engine internals
  (00100186..00100AC4), dead behind the native vsnprintf. The C++ exception-allocation helpers
  00100070/00100078/001000C0 are reached only from 001041E4.
  - 003010C4 (`__aeabi_errno_addr`) and 00300E4A (the wide formatter) have no source either.
    Every known use is covered here or in boot_extra.c.
  - The FP exception dispatcher 00114D80 and the soft-double helpers 001146F8/00114B1C
    (1 caller each, 00300720/00300750) and 001145C0 are still Ghidra.
- **RTTI checks** (00201234, 001E6B34 with 56 callers, ~900 similar `checkDerivedRuntimeTypeInfo`
  instances): the converted Ghidra C is correct, so nothing was rewritten.
  - **Delegate invoke stubs**: not covered (native/robust has the pmf helpers).
- **Heaps**: the ExpHeap/FrameHeap allocator internals and create (0010B954, 35 callers) are
  still decompiled, as memory.c intends. Their lock/unlock wrappers (0010961C/00109698/
  0010E0E0/0010E15C) are matched.
  - 0010B954 is the next candidate if the heap tree misbehaves.
- **Other math**: 00492604 (Matrix44 multiply), 003E1A70, 003E1F40, 003E1DC8.
  - **Outside this layer, flagged by the coordinator**: 004A7F00 (collision, 58 caller files
    declare `float`), 00151148 (actor thunk -> 002C34A4, 136 files `float`) and 004D7E0C
    (rotation from an angle index, 15 files `float`) are game functions. Not rewritten here;
    their float classes need the same ARM check as 0010F1F8.
- **Not identified** as separate out-of-line functions in this game: sead RingBuffer, ObjArray,
  FixedPtrArray (inlined into callers).
