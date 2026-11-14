# native/compilefix: functions whose decompiled source did not compile

Each `func_<USA>.c` here is a **strong** definition of one game function whose source failed to
compile in the systemic round-2 rebuild #3 (`build/decomp/report.json`, 283 failures, log
`build/systemic2_run3.log`). In the link each of them was a tripwire stub. The header comment of
every file gives the USA/EU address, the compile error, what was changed, and the confidence.

**Not linked yet:** `tools/link.sh` does not compile this folder. To use it, add
`native/compilefix/*.c` to the source loop with the same flags as `native/game` (decompiled code:
`-include native/albw_native.h -I../albw-decomp-ai/shared/include`). The files include
`compilefix.h` from this folder; the 24 route rewrites include `../route/route.h`. Every file
compiles with no errors under
`clang -std=gnu11 -Wall -Wno-unused-parameter -Inative/include -I../albw-decomp-ai/shared/include -include native/albw_native.h`
for both `-m32` and `-m64 -fms-extensions`. Before linking, check that no file defines an address
that native/{game,robust,sdk,gameplay,route,hot,...} also defines (checked when this was written:
none; the two overlaps with native/route, 00601914 and 0060191C, were removed from here).

## Result

| | functions |
|---|---|
| failing sources in the run-3 build | 283 (282 Ghidra-derived, 1 matched C++) |
| already defined in native/game, robust, sdk, gameplay, route (skipped) | 16 (incl. 00521040 004EDEFC 00601914 0060191C in native/route) |
| **fixed here** | **257** |
| - converted Ghidra text + exact fixes of the failing constructs | 216 |
| - asm-verified rewrites copied from native/route/alt (route scout; preferred over this folder's Ghidra-based version, see below) | 24 |
| - written from the disassembly (veneers, one-instruction thunks, 00108FF0) | 17 |
| not fixed | 9 (below) |

Most functions are not reachable by direct calls from the boot roots (00100C90, 00100F68,
0048E7E4, 0014BDE0, the 1,230 static constructors and the framework entry points, with literal
pool words and vtable runs counted as edges): 88 failing functions were reachable (depth 1..7);
all 88 are fixed (or were already defined natively). The rest are reached through vtables / state
tables: actors, player actions, effects.

## Error classes (first error of the 283; counts are failures)

| class | n | fix (exact on the ARM) |
|---|---|---|
| `(T *)<float expr>`: "operand of type 'float' cannot be cast to a pointer type" | 97 (+12 hidden behind other errors) | Ghidra keeps floats in pointer-typed variables; the ARM copies the 32 bits (vmov/vstr). `(T *)CF_FBITS(x)` (compilefix.h): the bits as an address word for a float operand, the operand unchanged otherwise. Reverse form `(float)<pointer>` -> `ALBW_AS_F32` |
| string labels with punctuation (`s_T<SE_Pamet_..._0012b4ca + 2`, `s_>333_..._ADDR._1_4_`) | 44 | renamed `s_cf_<ADDR+n>` (same code-section address; gen_data's LABEL_NAME rule emits the bytes); `._1_4_` reads of a literal-pool float that Ghidra merged into a string -> `DAT_<ADDR+1>`. Checked: `add rX, pc, #imm` targets the same address |
| `BADSPACEBASE` / `register0x00000054` | 22 | `((int)(BADSPACEBASE *)0 + A) + n` is a pc-relative string address -> `s_cf_<A+n>` (19); 3 real cases by hand: 00298224 (function table starts on the previous function's pool word), 003F31AC (r4 taken for sp), 003E2B04 (sp only reaches a dead r0) |
| `arr[i]._O_S_` partial field of an array element | 22 | typed byte access at `(char *)&arr[i] + O` |
| `NAN(x)` / `INFINITY` / `-NAN` constants | 19 | `__builtin_isnan` / +inf; `-NAN` / `NAN` constants are the words 0xFFFFFFFF / 0x7FFFFFFF (mvn rX,#0 / mvn rX,#0x80000000, checked in every function using them) |
| `_local_XX` (Ghidra's 4-byte view of the frame slot local_XX) | 18 | `*(undefined4 *)&local_XX` (same V3 frame offset; e.g. 004FD348: four strb into one word) |
| conflicting types: the body printed under another label | 16 | 11 are one-instruction `b` thunks (forwarders with the target's real signature), 2 renamed bodies (002558DC, 0025B74C), 00112D6C (jump to a veneer), 00521040 (in native/route) |
| switch on a pointer / float variable | 8 | integer switch on the same bits (00568BD8: a byte copied into a float var, denormal case labels 1.4e-45.. = 1..4) |
| `void` callee result used (StateMgr::changeState 0065E398 with a phantom s0) | 7 | plain 2-argument calls (native/robust/func_0065E398.c signature) |
| switch-case fragments listed as functions (`switchD_xxx::func_...`) | 7 | **not fixed**: mid-function blocks (live registers, the parent's frame); not callable as C functions |
| ARM->Thumb veneers `ldr pc,[pc,#-4]` called with no arguments | 6 | direct calls of the Thumb targets with r0-r2 (00100AC4 printf dispatcher; 003C90C8..F0 the veneers themselves) |
| 3-byte store `X._0_3_ = v` / frame decl regex | 6 | `CF_SET3` (strh+strb); 004DA834: V3 frame pass replaced the expression line `fVar12 * local_44;` with a #define |
| `_func_<USA>` read as a value | 4 | eu_usa_map.json pairs these USA functions with EU literal-pool words; replaced by the pool word (`DAT_<EU>`) or its constant |
| `LAB_<ADDR>` address taken | 2 | strings in the code section ("Loop", "%u") -> `s_cf_<ADDR>` |
| `_uStack00000000` (incoming stack-parameter view) | 2 | **not fixed** (002A0078, 005158F4: need the >4-argument signatures) |
| `_IRQ` / `fRam00000020` | 1 | 00140ED8: the ARM really reads [0x18]/[0x20] (r0 == 0 on every path into that block) |
| float-typed vtable call | 1 | 004EDEFC (native/route) |
| armcc `__current_pc()` in a matched C++ source | 1 | 00108FF0 written in C (the pc argument is the constant 0x00109008); its eu_usa_map pairing (EU 00108FDC) is wrong |

Errors that only appear once the first one is fixed (all fixed in the 216 files):

- strict C: int<->pointer and pointer<->pointer mismatches (the decomp build demotes them with
  `-Wno-error=...`) -> explicit casts, identity on the ARM; `(uintptr_t)` for int<->pointer;
- **callees spelled `FUN_<EU>` in the dump** (6 failures; 1054 Ghidra sources overall): the build
  maps them to `func_<USA>` *after* the declarations are generated, so they are called through an
  implicit `int f()`: float arguments are promoted to double (ABI break). Prototypes added here;
- **implicit float<->int conversions** (not compile errors, but value conversions where the ARM
  copies bits: `fVar = _DAT_xxx;` with the pool word declared `undefined4`, `puVar[3] = fVar;`):
  260 sites in 64 of these files made bit copies (`ALBW_AS_F32` / `ALBW_AS_U32`). Whole build:
  1647 sites in 471 Ghidra sources (clang `-Wfloat-conversion -Wimplicit-int-float-conversion`);
- `SUB43` missing from ghidra_types.h (001D74E8).

Not compile-related and **inherited from the Ghidra text** (same as every other Ghidra-derived
source; see native/robust/PRIORITY.md classes A/B):

- class B (PMF state dispatch without `this`): checked in all files here; the 3 cases were fixed
  (00159FB8, 00220F20 here; 00227AD4 / 002D4AA8 via the route rewrites);
- class A (uninitialised register inputs `in_rN`/`in_sN`/`unaff_rN`/`extraout_rN`) remain in 52
  files: 00139CF0 00140ED8 00145CE8 00145CEC 00174818 0018B064 0019F698 0019FDC0 0019FDD8
  001A6E30 001D74E8 00220F20 0023DB44 00247830 002E7F48 002E9F1C 002ECAFC 002ED8E0 002EF340
  002EF93C 002F08B0 002F25E0 00302348 0030372C 00304C64 00306564 00306CE0 0031DA18 003299A4
  0032A0A8 00342C24 00363A0C 003754D8 0037EB40 0038C3F8 003A5EA4 00427EC4 00490EB0 004C2650
  004E19C8 004FC1CC 0050C740 005528F0 00560A68 0063AEA8 0064268C 00649E18 0064B4A0 0064CB28
  0064E9F4 00650A24 00670D14. Many are benign (an `extraout_r1` passed to a callee that only reads
  r0, the upper half of a stored word); they were never ranked by native/robust because these
  sources did not compile. Next step: run native/robust/tools/benign.py + livein2.json on them.
- bare `return;` exits of functions the converter retyped non-void return 0 (converter rule).

## Route rewrites (native/route/alt)

The route scout rewrote 24 of these functions from the disassembly while this work ran
(001312BC 0014E2A0 0014FA44 001B7D64 001BB924 001DC4C8 00227AD4 0026171C 00298160 002D4AA8
002D5D40 002DA848 00341D28 003459C8 00345F20 00348558 00352F0C 00366694 003E8730 003F4E98
004F5BD8 004FD348 0068156C 00681D10). Those are full asm-verified rewrites (they also fix class-A
registers, e.g. 19 in 0068156C / 00681D10, and the no-`this` dispatch in 00227AD4 / 002D4AA8),
so their content is used here (include path adjusted to `../route/route.h`); native/route/alt
is unchanged and stays unlinked.

## Not fixed (9)

- 003E5518 003E5520 0056B010 0056B050 0056B088 0056B0C0 0056B0F8: switch-case blocks of a parent
  function that the function table lists as functions (they use the parent's live registers and
  frame; nothing calls them as functions as far as the direct call graph shows). They should be
  dropped from the table rather than written as C.
- 002A0078, 005158F4: incoming stack parameters (`_uStack00000000`, `in_stack_000000xx`) and
  unaff registers; need the real >4-argument signatures from the callers.
(00521040, 004EDEFC, 00601914, 0060191C are defined in native/route and not duplicated here.)

## Tooling (tooling.patch, proposed, not applied)

`patch -p1 < albw-port/native/compilefix/tooling.patch` from `..`
(touches albw-decomp-ai/tools/import_ghidra.py, albw-decomp-ai/shared/include/ghidra_types.h,
albw-port/tools/build_decomp.py). Coverage of the 283 run-3 failures:

| change | failures covered | beyond the failures |
|---|---|---|
| build_decomp: `eu_fun_to_usa` before `import_ghidra.convert` (callees get declarations) | 6 | 1054 sources calling FUN_ names through implicit `int f()` |
| build_decomp error-driven retry: `(T *)float` -> `ALBW_PTR_BITS`, `(float)ptr` -> `ALBW_AS_F32`, switch on a pointer | 97 + 8 (+12 hidden) | - |
| import_ghidra `compile_fixes` (ALBW_CONVERT_CF=1): punctuation string labels, BADSPACEBASE string addresses, `X._O_3_` stores, `_local_XX`, NaN constants, `case (T *)N` | 44 + 19 + 5 + 18 + 19 | - |
| import_ghidra PIECE regex accepts `arr[i]._O_S_` | 22 | - |
| ghidra_types.h: `ALBW_PTR_BITS`, `albw_set3`, `SUB43`, `NAN(x)`, `INFINITY`, `ALBW_NAN_POS/NEG` | (support) | - |
| build_decomp `ALBW_FCONV=1`: implicit float<->int conversions -> bit copies from clang's warnings | 0 | 1647 sites in 471 sources (silent wrong values today) |

Together about 240 of the 283 failures; the rest are the hand-written classes above (thunks and
veneers, the void changeState results, mis-paired map entries, switch fragments). Caveat for the
ghidra_types.h hunk: `NAN`/`INFINITY` are redefined function-like/object-like; a Ghidra source that
also includes `<math.h>` would need the hunk guarded.
