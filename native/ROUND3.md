# Systemic round 3: converter and signature-table fixes

Converter-level fixes for defects that several hand-rewrite agents found again and again.
Everything is behind **`ALBW_CONVERT_V4=1`** (converter + build) and is **off by default**: the
current build (round 2, `tools/build_decomp_v3.sh`) is unchanged. Round 3 is staged:

| stage | `ALBW_V4_STAGE` | contents |
|---|---|---|
| 1 (boot priority) | `1` | defect 1 (ARM return classes, incl. 0010F1F8), defect 7 (stack objects: Ghidra variables + `in_stack_` aliasing), class (b) (void constructors that return `this`), compilefix `FUN_` callee declarations, returns-this list (defect 6) |
| 2 (default) | `2` | + defect 2 (`vpush {d0}` float arguments), 3 (64-bit returns), 4 (variadic calls), 5 (vldm pair loads), class (a) / FCONV bit stores, the rest of native/compilefix/tooling.patch, switch-case fragments dropped |

## How to run (at a boot pause; the boot agent owns build/ and link.sh)

```
# stage 1: prep tables, fix the Ghidra project, re-dump, build, link   (~25-35 min)
STAGE=1 tools/systemic_rebuild3.sh
# stage 2 on top of it (re-applies the project fixes with params+varargs, re-dumps, rebuilds)
STAGE=2 FROM=project tools/systemic_rebuild3.sh
# without linking (check the build first):  UNTIL=build ...
# 64-bit after step 5:  ALBW_V4_STAGE=1 tools/build_decomp64_v4.sh && tools/link64.sh
# converter only, no Ghidra (round-2 dump build/ghidra_analyzed4): ALBW_V4_STAGE=1 tools/build_decomp_v4.sh && tools/link.sh
```
Rollback: `tools/build_decomp_v3.sh && tools/link.sh` (round-2 build from build/ghidra_analyzed4,
never touched); project backup `logs/ghidra_full.bak_systemic3_<date>` (made once by the script).

Steps of `tools/systemic_rebuild3.sh` (modelled on systemic_rebuild2.sh; logs in build/systemic3/logs):
1. **prep** `tools/livein3.py`, `tools/retclass3.py`, the project's signatures *before* round 3
   (`build/systemic3/sigs_before.json`, exported once and kept), `tools/systemic_prep3.py` ->
   `native/robust/systemic3/{params,returns,retfix,varargs,stackobjs,report}.json` +
   `native/returns_this3.json`. **Stale-table checks**: every table is recomputed when one of
   its inputs (livein2.json / livein*.py / livein_dregs.py / retreads.json / ptr_targets.json /
   sigs_before.json / the prep scripts / the round-2 dump) is newer; the previous tables are kept in
   `systemic3/prev_<time>/`; tables are never recomputed against the already-fixed project (the
   round-2 script did that at 15:14 today: `systemic2/params.json` went from the full table to 3
   entries, see build/systemic2/rebuild.log; nothing broke because the project already had them,
   but the committed table is now empty — restore it from git if round 2 is ever redone).
2. **project** backup, then albw_fix_params.py (stage 2), albw_fix_returns.py (`this`),
   albw_fix_varargs.py (stage 2), albw_fix_stackobjs.py; stamp; signatures after.
3. **dump** -> build/ghidra_analyzed5, 4. **extra** -> build/ghidra_extra5,
5. **build** `build_decomp.py` V2+V3+V4 (sources in build/decomp/ghidra_fallback/ghidra_analyzed5_v4),
6. names, 7. ctors, 8. link (link.sh unchanged).

## Numbers

Measured with `tools/systemic_dryrun3.py` on the full round-2 dump (build/ghidra_analyzed4 +
ghidra_extra4, 26,268 sources; converter only, no Ghidra re-dump) and compiled with clang
(`cc.sh` in the scratch dir, the build's flags, *without* the build's error-driven retries; no
source fails under V4 that compiles under V3, either architecture; a random sample of 583 V3
dry-run outputs is byte-identical to the current build's converted files, i.e. V4 off = unchanged):

| | V3 (today) | V4 stage 1 | V4 stage 2 |
|---|---|---|---|
| sources failing to compile, -m32 | 397 | 314 (0 new) | 189 (0 new) |
| sources failing to compile, -m64 (no ptr32 pass) | 397 | 314 | 189 |
| callers declaring a void-class callee `float` | 1,100 files | 0 | 0 |
| `x = f(..)` assignments from a void-class callee | 249 | 0 | 0 |
| native definitions vs converted declarations: native non-float, callers `float` (i386 NaN hazard) | 8 (+2 via SIG_OVERRIDES) | 0 | 0 |
| sources calling a callee with no declaration (implicit `int f()`, floats as double) | 1,099 | 27 | 27 |
| `in_stack_` locals (callee-filled frame words read as separate uninitialised locals) | 381 (76 files with a frame) | 215 (26) | 215 (26) |
| 64-bit helpers declared `int` (uidivmod/idivmod/f2lz/ldivmod/uldivmod/lasr) | 58/49/200/10/4/1 files | same | 0 (`undefined8`/`longlong`/`ulonglong`) |
| call sites of any 64-bit-returning callee declared 64-bit | 0 | 0 | 4,186 |
| `(float)*(undefined8 *)` value-converted pair loads | 15 | 15 | 0 |

Boot path (direct-call closure of 004ECA48 / 0048E670 / 0048E718 / 0014BDE0 / 0014B610, 952
functions; `tools/round3_subset.py`), stage 1: 41 files changed by return classes (7 retfix
callees in the set), void-callee assignments 19 -> 0, `in_stack_` locals 3 -> 0, files with an
undeclared callee 5 -> 0, returns-this +26 / -12, 9 functions with stack objects (31 words) that
the Ghidra fix targets.

## Defect by defect

### 1. Callee return class (stage 1)
`tools/retclass3.py` walks every return path of every function in the EU code and classifies r0,
r1, s0 at the return (entry value / restored / written by the function / a callee's result /
tail call / unknown), with a greatest fixpoint for "preserves the register" through callees and
a least fixpoint for "s0 is consumed" (a caller reads s0 after the call — retreads.json —, or a
function returns it to a consumer, or the function is reachable through a pointer).
`systemic_prep3.py` -> `systemic3/retfix.json`: of the 348 functions the project types `float`,
**127 are not float on ARM**: 18 never write s0 (pass-through: 0010F1F8, 004A7F00, 00151148,
003E1634, 0010E74C, 001FE4C0, ...), 15 never produce s0 themselves (only indirect callees:
state-machine changeState 006640EC / 0065F560 / 0066E07C class), 94 write s0 only as a temporary
nobody consumes (004D7E0C) — plus 0065D120 by its native void definition; 112 become `void`, 15
`undefined4` (r0 carries a result the callers forward: 00151148 -> 002C34A4). 221 stay float
(146 clean float results, 74 mixed but consumed, 1 unknown).
Converter (import_ghidra.py V4, `ALBW_RETFIX`): the callers' declaration, the definition
(`return E;` -> `return;`, E kept if it calls), and every call site: 1,178 plain calls unchanged,
235 assignments dropped, 14 assignments kept as `f(..); x = <s0 argument>;`, 6 uses inside
expressions as `(f(..), <s0 arg or 0.0f>)`, 85 int-class results inside expressions kept.
Before/after (0010F0A8 calling 0010F1F8):
```
- extern float func_0010F1F8(int *param_1,float fparam_0);
-           in_s0 = func_0010F1F8((int *)(*(int *)(param_1 + 0x84) + iVar1),in_s0);
+ extern void func_0010F1F8(int *param_1,float fparam_0);
+           func_0010F1F8((int *)(*(int *)(param_1 + 0x84) + iVar1),in_s0);
```
The 7 native definitions that return `float` where the ARM class is void/int (x87check pops
them at link on i386, harmless; their owners should switch them to the ARM class):
native/hot 00151148 / 0048F288 / 004F48F0 / 004F5588, native/core/math_vec.c 0049C154,
native/compilefix 0054FC98 / 00590B1C.

### 2. `vpush {d0}` float arguments (stage 2)
`tools/livein3.py`: livein2.json + native/gameplay/tools/livein_dregs.py's strong evidence ->
livein3.json; **17 functions** gain float parameters (004A9F98 / 004A7620 / 004AAD4C / 0063AEA8 /
0064268C / 0069021C s0+s1, 00536CA4 s0-s3, 001920E4 / 002B0D7C / 002B6B0C / 002FE3E8 / 0040EF54 /
004AAF44 / 00570D00 / 00589170 / 0066FA50 / 00670D14 s0), applied by albw_fix_params.py.
Kept in tools/ and not in livein2.py on purpose: a changed .py in native/robust/tools triggers
systemic_rebuild2.sh's prep recompute (the empty-table problem above).
Verified on a project copy (sample re-dump): `func_004A9F98(..., float fparam_0, float fparam_1)`,
caller 0014EEC8 `func_004A9F98(*DAT_0014f0ac,puVar4,*(uint *)(param_1 + 0x3b8),DAT_0014f0a8,DAT_0014f0a4)`
(was 3 arguments), 002ACBAC `func_002B0D7C(param_1,4,0x10,0,DAT_002acb9c)`.

### 3. 64-bit returns (stage 2)
`signatures()` keeps `undefined8` / `longlong` / `ulonglong` / `qword` returns (480 callees);
the remainder of uidivmod now survives:
```
- extern int func_00110710(uint param_1,uint param_2);
+ extern undefined8 func_00110710(uint param_1,uint param_2);
    uVar3 = func_00110710(uVar1,param_2);
    return (int)((ulonglong)uVar3 >> 0x20);
```
native/core/crt_aeabi.c already returns `uint64_t`. 10 functions whose callers read r1 but that
Ghidra types 4-byte (retclass `r1: pair`, e.g. 0049F634, 0049F688, 005FF6E4) are listed in
retclass.json and not changed (their definitions cannot produce r1 either).

### 4. Variadic calls (stage 2)
`systemic_prep3.py` finds the armcc variadic prologue (`push {r0-r3}` + va_list = entry_sp +
4*(fixed-4)): **13 functions** (003E6AA8 bounded snprintf, 0011130C, 003FB500, 0049940C /
004994B0 / 004994FC, 00689578..00689B00). `tools/ghidra/albw_fix_varargs.py` marks them variadic
(keeping every register parameter Ghidra had, otherwise the decompiler drops r2/r3 arguments:
first try lost them at 004994B0's calls). Verified on a project copy:
```
- func_003E6AA8((int)auStack_60,0x48,0x47,DAT_00404428);
- uVar2 = (**(code **)(...+ 0xc))(*(int **)(param_1 + 0x24),DAT_0040442c,auStack_60,0,param_2);
+ func_003E6AA8((int)auStack_60,0x48,0x47,DAT_00404428,param_2);
+ uVar2 = (**(code **)(...+ 0xc))(*(int **)(param_1 + 0x24),DAT_0040442c,auStack_60,0);
```
(the stack word was misattributed to the following virtual call). Thumb C-library variadics
(printf family) are not covered (not ARM code; already native).

### 5. Paired float loads (stage 2)
Measured: the `(float)*(undefined8 *)` value conversion occurs at **15 sites in 9 files**
(00115960, 0068B070/0068B074, ...), not 1,084. The 1,084 of AUDIT.md is the whole "residual
float<->int cast" class of the round-1 conversion; with V2 markers the `ALBW_AS_F32(uVarN)` of a
64-bit pair (1,083 sites) already takes the low word bits (correct on i386 and x86-64). V4 rewrites
the 15 (30 expressions) as two float loads:
```
- fVar25 = (float)*(undefined8 *)(param_3 + 8);
- fVar26 = ALBW_AS_F32(((ulonglong)*(undefined8 *)(param_3 + 8) >> 0x20));
+ fVar25 = *(float *)(param_3 + 8);
+ fVar26 = *(float *)((char *)(param_3 + 8) + 4);
```
The rest of the residual cast class is covered by FCONV (below): 1,647 implicit value
conversions in 471 sources (compilefix count) become bit copies.

### 6. returns_this.json float returners (stage 1)
`native/returns_this3.json` = returns_this.json (3,037) + 155 functions that return their first
argument on every path including loops (class b below) - **53 that also return a float in s0 that
callers read** (002B04E8, 001119F4, 00115DC8 normalize, 00114E74, 00115154, ...; list with reasons
in systemic3/returns_this_dropped.json) = 3,139. build_decomp under V4 reads returns_this3.json,
so it no longer exports `__impl` + int thunk for the 53, and **link.sh needs no change**: it only
thunks the `__impl` symbols build_decomp exports. (Without V4, to use the list directly: replace
`native/returns_this.json` by `native/returns_this3.json` in build_decomp's `_rt`.)

### 7. Unwritten stack objects (stage 1)
Two parts:
- **in_stack_ aliasing (converter)**: Ghidra reads a word a callee filled through `&stack0x...`
  as a separate local `in_stack_ffffffe4`; V4 makes it the frame slot of the same offset
  (`#define in_stack_ffffffe4 (*(undefined4 *)(albw_frame + 0x4))`): 164 locals aliased; files
  with a frame and unaliased `in_stack_` 76 -> 26 (the rest are above entry_sp = missing stack
  parameters, or outside the frame).
- **dropped stores (Ghidra)**: `systemic_prep3.py` finds the sp-relative stores into each
  `&stack0x` object that no C assignment covers: 324 objects in 288 functions, 863 words.
  `tools/ghidra/albw_fix_stackobjs.py` defines a type-locked `uint objStack_<off>[n]` over each
  (an `undefined4[]` is ignored by the decompiler). Verified on a project copy: **004ABA98
  fixed** (the create arg for 00504D48 is now filled, `objStack_90[0..0x14] = ...`);
  **004FD464 and 004C58F0 not fixed**: the variable is used for the address
  (`(undefined1 *)objStack_38`) but the decompiler still drops the stores — both objects sit in
  the outgoing-argument area of other calls with stack arguments. Those need hand rewrites
  (or a different Ghidra approach); the full re-dump's lostframe count (printed by step 5) shows
  how many remain.

### Hot-agent classes
- (a) `p[i] = ALBW_AS_F32(p[i]) + f` value stores: FCONV (stage 2, on under V4) wraps the
  RHS in `ALBW_AS_U32` (verified 00583B90 against EU 00583B8C-00583B98: vldr/vadd/vstr).
- (b) void constructors returning `this` (00407788: tools/returns_this.py gives up on its loop):
  retclass3 `r0_entry_only` -> 155 more returns-this functions; 134 that the project types void
  go to `systemic3/returns.json` (albw_fix_returns.py `this`), and the definition returns
  `param_1` through build_decomp's returns-this path:
  ```
  - void func_00407788(undefined4 *param_1)   ...   return;
  + undefined4 func_00407788(undefined4 *param_1) ... return (undefined4)param_1;
  ```

### native/compilefix/tooling.patch (integrated)
Applied, then gated: `FUN_<EU>` renamed before conversion (stage 1; a body Ghidra prints under
its thunk target's name is not re-declared — without that 262 sources failed), `compile_fixes()`,
error-driven retries, FCONV, `arr[i]._O_S_` pieces, ghidra_types.h helpers (under `-DALBW_V4`,
which the V4 build passes; NAN(x) kept as before), switch-case fragments 003E5518, 003E5520,
0056B010/050/088/0C0/0F8 not built (stage 2).

## Files

- converter: ../albw-decomp-ai/tools/import_ghidra.py (V4 section, `v4_stage()`),
  ../albw-decomp-ai/shared/include/ghidra_types.h (`#if defined(ALBW_V4)` block)
- build: tools/build_decomp.py (`v4_enabled()/v4_stage()`), tools/build_decomp_v4.sh,
  tools/build_decomp64_v4.sh
- analysis: tools/retclass3.py, tools/livein3.py, tools/systemic_prep3.py, tools/round3_subset.py,
  tools/systemic_dryrun3.py
- Ghidra: tools/ghidra/albw_fix_varargs.py, tools/ghidra/albw_fix_stackobjs.py
- data: native/robust/systemic3/*.json, native/robust/tools/livein3.json, native/returns_this3.json
- pipeline: tools/systemic_rebuild3.sh
