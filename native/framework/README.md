# native/framework: hand-written game-framework functions

Exact C rewrites (from the EU ARM code) of the most-used framework functions that the build still
takes from Ghidra C: state machines, the sead task framework on the boot path, and the actor/enemy
base classes. One strong `func_<USA>` per file; shared helpers in `framework.h` (reuses
`native/gameplay/gameplay.h` FLD/GPTR/gp_ptr and `native/include/gptr.h`).

**Status: not linked.** Nothing here is in `tools/link.sh` / `tools/link64.sh` (not edited, as
instructed). Every file compiles clean with
`clang -m32|-m64 -std=gnu11 -O2 -msse2 -mfpmath=sse -ffp-contract=off -fno-strict-aliasing -Wall -Wextra`
(`-fms-extensions` on -m64) and `-Inative/include -Inative/framework`; `tools/ptr32.py --native`
leaves them unchanged (no pointer-typed game fields: every game pointer is a 32-bit word).

## Functions

Caller files = round-2 converted sources (`build/decomp/ghidra_fallback/ghidra_analyzed4`) that
declare the function. "Bug fixed" compares with the version the current build uses.

| USA (EU) | identity | caller files | tier | bug fixed vs current version | confidence |
|---|---|---|---|---|---|
| 0010A794 | StateMgrBase::StateMgrBase() | 384 | 1 | none (Ghidra correct; matched src not used by the build) - typed/64-bit clean | high |
| 0010BEC4 | StateMgrBase::setStateName(idx, const SafeString&) (inline FixedSafeString<24> copy) | 232 (2,072 sites) | 1 | Ghidra returned `undefined8` (callers declare `int`); native int-pointer reads; logic was right | high |
| 002D55D0 (002D55AC) | StateBase::changeState(s32) | 88 | 1 | matched C++ is right but takes `Obj*` where the 88 converted callers pass a 32-bit int (M64PTR) | high |
| 0049F920 (0049F8F8) | sead::TaskBase::CreateArg ctor (method-tree slots, boot path) | 2 | 2 | Ghidra `void` (ARM returns this); 2nd param taken as u32 word as callers declare | high |
| 0049F7B8 (0049F790) | CreateArg ctor + param word (+0x64) | 2 | 2 | `void` -> returns this | high |
| 0049F79C (0049F774) | CreateArg ctor + two words (+0x64 / +0x68) | 1 | 2 | `void` -> returns this | high |
| 0049D3D8 (0049D3B0) | sead::TaskMgr::createTask_(arg, heaps) (heap switch, factory, tree insert) | 4 | 2 | none (Ghidra frame offsets checked); exact native on the boot path | high |
| 0025D9E8 (0025DA10) | game TaskBase::TaskBase(arg, name) | 4 | 2 | none; `this` as u32 (callers pass int) | high |
| 00150A84 | ActorBase::playSE(const SafeString&, s32) | 354 (515 sites) | 3 | none in logic; FixedSafeString<64> stack object written exactly, 64-bit clean | high |
| 001507D8 | ActorBase::playSE2(const SafeString&, s32) | 94 | 3 | none; `this` as u32 | high |
| 004FD464 (004FD43C) | EnemyBase::EnemyBase(arg, param) | 80 | 3 | **lost stack object**: the 12-byte block passed to 004FC798 (flag byte `(param->+0x44 & 0xFF) | 4`, then zeros) was never written: every enemy registered its model with uninitialised flags | high |
| 004EDC9C (004EDC74) | Model::Model() | 116 | 3 | none - typed/64-bit clean | high |
| 002DFF7C (002DFF58) | SpawnParam::reset() (returns this+0x10 in r0) | 102 | 3 | none - typed/64-bit clean | high |
| 004B9A10 (004B99E8) | Base450::Base450(bool) (actor-side base, IDisposer at +0x38, 2 list heads) | 69 | 3 | none - typed/64-bit clean | high |
| 0010A464 | IDisposer-derived framework object ctor (vtbl data_006D68BC; class unnamed) | 69 | 1/3 | none - typed/64-bit clean | high |
| 00520FC0 (00520F98) | getPlayerPos()-style accessor `(*data_0070FB60)->+0x1C` | 434 | 3 | none | high |

Each file's header has the full ARM-derived description, the round-2 diff and the prototype used.
All 16 pass `tools/sigcheck.py` (definition vs every converted caller declaration: return class,
float/int argument order, pointer-vs-int on x86-64): **all OK**.

## Tests

`test/run_tests.sh` (from anywhere; `TMPDIR` for the binaries):
- `test/framework_test.c`: every function with recording stubs and low-memory objects
  (`native/gameplay/test/lowmem.h`), run on a stack below 4 GiB (the functions keep 32-bit words
  pointing at their own frame, as the game threads do on their low stacks). -m32 and -m64: pass.
- `test/enemy_diff.c` (-m32): 004FD464 against the round-2 converted Ghidra C on identical inputs,
  all 8 param-flag combinations x both resource paths: the 0x900-byte object images are
  identical; the only difference is the 004FC798 argument block (native `F7 00 ..`, Ghidra
  uninitialised stack). Pass.

`tools/sigcheck.py`: `native/gameplay/tools/sigcheck.py` pointed at this directory.

## Link notes

- **Duplicates**: none with native/{game,robust,gameplay,route,sdk,runtime,core,hot}
  (checked by definition scan). 002D55D0 also has a matched object (`src/work7/gpt17`, exported
  weak; the C++ alias names `_ZN9StateBase11changeStateEi` etc. map to `func_002D55D0`): ours
  overrides it. All other addresses currently link their Ghidra object (weak).
- I first wrote 00150E40 (Actor/ActorBase ctor, 174 caller files) and dropped it: native/hot
  has `hot/func_00150E40.c` with the same reading (independent agreement, Ghidra C correct).
- **Caller signature mismatches** (existing native callers, not in this directory):
  - `native/route/func_00348558.c` declares `void *func_002D55D0(char *, int32_t)`: on x86-64 it
    reads rax while every definition (matched C++ or ours) is the 32-bit `this + 8`; fine in
    practice (32-bit results zero-extend) but the declaration should be `int`/`uint32_t`.
  - native callers declare 0010A794 / 004EDC9C `void` (robust) and 00150A84 `void`
    (`robust/func_00192390.c`): harmless (integer class).
- 0010BEC4, 00150A84, 004FD464, 0049D3D8 call memcpy 0010E3C4 (native/sdk/memory.c), operator
  new 0010BAB4 (native/sdk), vec_ctor 00100118 (native/runtime/cxxabi.c), list insert 0010F1DC
  (native/core): declared with pointer parameters and integer returns (see `framework.h`).

## Reviewed, not changed (other owners)

- `native/game/func_0010CF7C.c` (StateMgr::changeState, boot agent): matches EU 0010CF7C
  (exit PMF with r1 = new state, null-PMF test, name lookup with the unsigned range check,
  enter as tail call). One minor difference: the ARM re-reads `mgr->+0x10` after the name
  entry's virtual assure call, the native code uses the value read before it (no effect unless
  that virtual writes the state machine).
- `native/robust/robust_sm.h` (shared changeState template, 303 copies): same semantics as above.
- 0010DA7C / 0010CE7C (sead::IDisposer ctors, 108 / 51 caller files) and the ListNode helpers
  0010F1DC / 0010F1F8: sead heap/container library code, left to native/core.
- `native/HOT_TOP150.txt` marks 00150A84, 0052FBA0, 002D55D0, 00588BE4 "native": there is no native
  definition of 00150A84 / 0052FBA0 / 00588BE4 (the build uses Ghidra / matched objects); the
  status column seems to mean something else. 00150A84 is defined here now.

## Boot path (stop 43: 004ECA48 -> 0048E670 -> 0048E718 -> 0049D4A8 -> 0049D3D8 / 0049F920 -> 001031B4)

- In the 15:24 regeneration of `ghidra_analyzed4` the converted 0048E718 / 004ECA48 / 0049F920
  pass the class id through (`func_0049F920(sp, &cls)` -> `func_001031B4(this, cls)`, frame
  offsets sp+0x100/0x104 correct), so the dropped-argument crash should not reproduce with that
  build; the boot agent's `native/game/func_001031B4.c` (2 params) is consistent with it.
- If it does: 0049F920 / 0049F7B8 / 0049F79C / 0049D3D8 here are exact natives of that path
  (return `this` / the task, as the ARM does).
- Expected next trap on that path: 0049D4A8 (createTaskSync) is still Ghidra; its converted
  form threads a meaningless `in_s0` through the ListNode erase calls (0010F1F8 declared
  `float(int*, float)` by the signature table: an s0 pass-through). native/core defines
  0010F1F8 as `void` and asks for a converter SIG_OVERRIDE (`native/core/sead_list.c`,
  `callers_0010F1F8_float.txt`); linked before that override, every such i386 caller (0049D4A8
  included) pops an empty x87 st(0). Link core's 0010F1F8 only together with that converter fix.

## Gaps (not done)

- Tier 2: 0049D4A8 TaskMgr::createTaskSync (delegate list walk, ~120 insns), 0048E718 /
  0048E670 / 004ECA48 (prepare/root task creation), TaskBase tree insert/remove (0049FBC4,
  0049F5FC are matched), per-frame calc/draw dispatch (sead MethodTree 0049A188 / 0049546C /
  004960AC) and the delegate classes: not rewritten.
- Tier 1: the StateMgr execute step is inlined into every owner's calc (e.g. 00203138: PMF call
  from the +0x1C table with no null test, counter++, then 00352210(model, 1, (float)counter)),
  so there is no shared function; the changeState copies are robust's.
- Tier 3: ActorMgr::find 0052FBA0 / 0052FBDC, getRandom 0058A7D4, getActorId 00588BE4 are matched
  sources (not checked in depth); 0010BEB4 (model anim by name, 374 callers) is gfx-middleware.
- Tier 4 (resource/scene plumbing on the title -> field route): not started.
