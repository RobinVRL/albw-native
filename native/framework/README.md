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
| 0049D4A8 (0049D480) | sead::TaskMgr::createTaskSync(arg) (boot path: 0048E718 -> here) | 4 | 2 | converted C threads an uninitialised `in_s0` through 0010F1F8 (float-declared; core's `void` definition would unbalance the i386 x87 stack per unlink): list erase/insert inline; OffsetList vtable word written; exact loop re-reads | high |
| 0049DA04 (0049D9DC) | sead::TaskMgr::changeTaskState_(task, state) (jump table read from the ROM) | 9 | 2 | **state 1 (async create): the prepare-thread message call `t->vt[0xC](t, 1, 1)` lost its 3rd argument** (BlockType = blocking) in the converted C; same `in_s0` list-erase issue | high (call semantics: medium) |
| 004C58F0 (004C58C8) | ActorProfile / unit-heap set-up of the main-game init (004EE6C8) | 1 | 4 | **lost stack object**: the load argument's first word (SafeString vtable of "Archive/ActorProfile.szs", `str r4,[sp,#4]`) was never written: 001E1228 received the path with a garbage vtable | high |
| 00520FC0 (00520F98) | getPlayerPos()-style accessor `(*data_0070FB60)->+0x1C` | 434 | 3 | none | high |

Each file's header has the full ARM-derived description, the round-2 diff and the prototype used.
All 19 pass `tools/sigcheck.py` (definition vs every converted caller declaration: return class,
float/int argument order, pointer-vs-int on x86-64): **all OK**.

## Tests

`test/run_tests.sh` (from anywhere; `TMPDIR` for the binaries):
- `test/framework_test.c`: every function (incl. TaskMgr state changes / createTaskSync with a
  delegate list, ActorProfile load argument byte by byte) with recording stubs and low-memory objects
  (`native/gameplay/test/lowmem.h`), run on a stack below 4 GiB (the functions keep 32-bit words
  pointing at their own frame, as the game threads do on their low stacks). -m32 and -m64: pass.
- `test/enemy_diff.c` (-m32): 004FD464 against the round-2 converted Ghidra C on identical inputs,
  all 8 param-flag combinations x both resource paths: the 0x900-byte object images are
  identical; the only difference is the 004FC798 argument block (native `F7 00 ..`, Ghidra
  uninitialised stack). Pass.

`tools/sigcheck.py`: `native/gameplay/tools/sigcheck.py` pointed at this directory.
`tools/lostframe.py ADDR...` (capstone; run with `../albw-decomp-ai/.venv/bin/python3`): ARM
sp-relative stores vs. the albw_frame slots the converted C writes (finds lost stack objects);
`--scan`: every converted source whose `&stack0x` object is never assigned (see below).

## Link notes

- **Duplicates**: none with native/{game,robust,gameplay,route,sdk,runtime,core,hot}
  (checked by definition scan). 002D55D0 also has a matched object (`src/work7/gpt17`, exported
  weak; the C++ alias names `_ZN9StateBase11changeStateEi` etc. map to `func_002D55D0`): ours
  overrides it. All other addresses currently link their Ghidra object (weak).
- I first wrote 00150E40 (Actor/ActorBase ctor, 174 caller files) and dropped it: native/hot
  has `hot/func_00150E40.c` with the same reading (independent agreement, Ghidra C correct).
- **Caller signature mismatches** (existing native callers, not in this directory):
  - `native/route/alt/func_00348558.c` (the asm-verified alternative to compilefix's version, not
    linked as is) declares `void *func_002D55D0(char *, int32_t)` and uses the result as a
    pointer: on x86-64 it reads all of rax while every definition (the matched C++ `void *` one
    or ours, `int` = the 32-bit `this + 8`) is a 32-bit value. Works in practice (a 32-bit
    result zero-extends) but before swapping that file in, declare `int func_002D55D0(uint32_t,
    uint32_t)` and convert the result with `gp_ptr`.
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
- 0049D4A8 (createTaskSync) / 0049DA04 now have drop-ins here; the converted forms thread a meaningless `in_s0` through the ListNode erase calls (0010F1F8 declared
  `float(int*, float)` by the signature table: an s0 pass-through). native/core defines
  0010F1F8 as `void` and asks for a converter SIG_OVERRIDE (`native/core/sead_list.c`,
  `callers_0010F1F8_float.txt`); linked before that override, every such i386 caller (0049D4A8
  included) pops an empty x87 st(0). Link core's 0010F1F8 only together with that converter fix.

## Tier 2 / tier 4 review (round 2 continued)

Checked against the EU code (instruction by instruction where noted, otherwise with
`tools/lostframe.py`, `native/gameplay/tools/audit.py` and the callees' ARM live-in from
`native/robust/tools/livein2.json`). native/game has no override on any of these.

| USA | role | result |
|---|---|---|
| 0048E718 | prepare task creation (CreateArg {2, 006887A8}, createTaskSync, static guard) | converted C correct (frame offsets checked; the ARM never calls `__cxa_guard_release`, the C mirrors it): no drop-in |
| 0048E670 | game framework vtable method (vt calls 0x38/0x40/0x44/0x3C/0x48) | correct; the junk r2/r3 Ghidra passes to vt[0x38] is junk on ARM too |
| 004ECA48 | root task set-up | markers / frame check clean; not hand-verified insn by insn (210 insns) |
| 0049CEC8 | task heap array (`TaskHeap` ExpHeaps per method tree) | correct (insn by insn) |
| 0049D4A8 / 0049DA04 | createTaskSync / changeTaskState_ | drop-ins here (above) |
| 004960AC + framework vtable data_006F6C88.. (52 methods) | per-frame calc/draw dispatch | procFrame is native (sdk/os.c); the rest are matched or clean by the markers. 00496160 / 004961C4 extraout/in_ registers are dead on ARM (callee live-in) |
| delegate invokes (0068C464, 0068C4BC, ... 15 in native/robust) | sead::Delegate PMF call | covered by native/robust (class B), robust's 0068C464 passes r1/r2 through as the ARM does |
| 0014AA1C | seq manager changeTask (scene change) | correct (insn by insn) |
| 004EF418 | scene manager request | correct (insn by insn); 0043BC3C's lost r2 is not read by it (live-in r0, r1) |
| 004EE6C8 / 004EE8DC / 004EECD4 / 0014B00C | game / stage / course prepares | frame check clean (sp+0 = 5th call arguments) |
| 002761A0 / 0027E0C8 / 001BAD4C | stage BYAML / map KCL / course BYAML loaders | flagged registers are dead on ARM (0016B8DC, 00689794 live-ins); 001BAD4C as ROUTE.md |
| 004C58F0 | ActorProfile | drop-in here (bug) |
| **004ABA98** (EU 004ABA70) | stage map/KCL init (004EE8DC -> here), 326 insns | **real bug, not rewritten**: for course 8 (scenes 2/4/8: Course/dgn_EastCommon.bch, Course/Demo050_Common.bch, Course/Demo090_Common.bch) the 0x50-byte CreateArg passed to 00504D48 (`mov r1, sp`) is never written by the converted C (`&stack0xffffff70`): ARM sp+0x00 = data_006F5988, +0x04 = data_006C57E0, +0x08 = 0, +0x0C = 0, +0x10 = 0x20, +0x14..+0x28 = 0, +0x2C = data_006F5988, +0x30 = data_0069E0F8, u8 +0x34 = 7, +0x35 = 4, +0x36 = +0x37 = +0x38 = 0, +0x3C = data_006F5988, +0x40 = the BCH path, +0x44 = 0, +0x48 = 001E2444's result (resource), u8 +0x4C = 1 (EU 004ABB50-004ABBDC). Needed if the opening demo uses course 8 scene 4/8 |

**Systemic: lost stack objects in the converter** (`tools/lostframe.py --scan`): 379 converted
sources keep a Ghidra `&stack0x..` object as an albw_frame slot that is never assigned; in 74 of
them the C also reads the callee-filled data through a separate `in_stack_..` variable
(e.g. 00102E40 reads `in_stack_ffffffd0` instead of the byte 001058EC wrote). The ARM code stores
into those slots (004FD464, 004C58F0, 004ABA98 confirmed by hand); the frame converter has to
attach the sp-relative stores (and the in_stack_ reads) to the slot. Highest-caller entries:
00168E9C (native), 004F5588, 004FD464 (fixed here), 004F70A8, 001E1EDC (native), 006875AC,
004FC244, 00309850, 002B0D7C (native), 002D56A8.

## Gaps (not done)

- Tier 2: 004ECA48 not verified insn by insn; method-tree internals 0049A188 / 0049546C (clean
  by markers) not hand-checked.
- Tier 4: 004ABA98 (above); the prepares 004EE6C8 / 004EE8DC / 004EECD4 and the loaders were
  checked with the detectors only.
- Tier 1: the StateMgr execute step is inlined into every owner's calc (e.g. 00203138: PMF call
  from the +0x1C table with no null test, counter++, then 00352210(model, 1, (float)counter)),
  so there is no shared function; the changeState copies are robust's.
- Tier 3: ActorMgr::find 0052FBA0 / 0052FBDC, getRandom 0058A7D4, getActorId 00588BE4 are matched
  sources (not checked in depth); 0010BEB4 (model anim by name, 374 callers) is gfx-middleware.

## Task factories and the TaskClassID contract (stop 52; checked against the sead references)

Layouts confirmed against 3DS sead (redpepper `framework/seadTaskID.h`, `seadTaskBase.h`,
`seadHeapPolicies.h`) and NSMBU sead, and against the ARM uses in 0049D3D8 / 0049D4A8 / 0014A168:

- `TaskClassID` = {u8 type, u32 value} (8 bytes). The reference declares `Type mType` as an enum;
  armcc packs it into one byte (`ldrb`/`strb`). Types: 0 invalid, 1 int, 2 factory, 3 string.
  `TaskClassID::create` = 0057D87C: type 2 calls `value(ca)`; 1 / 3 call the global hooks
  data_00716650[0] / [1] as `hook(value, ca)`.
- `TaskConstructArg` = {HeapArray *heap_array, TaskMgr *mgr, TaskParameter *param} (0xC).
- `HeapArray` = {Heap *mHeaps[4]; bool mAdjusted[4]; s32 mPrimaryIndex} (0x18).
- `HeapPolicy` = {parent, size, create_slack, adjust_slack, u8 adjust @0x10, u8 temporary,
  u8 dont_create} (0x14); `HeapPolicies` = 4 policies + mPrimaryIndex (0x54).
- `CreateArg`: +0x00 factory, +0x08 heap_policies, +0x5C parent, +0x60 parameter, +0x64 fader,
  +0x68 src_task, +0x6C created_task (out), +0x70 create_callback, +0x74 user_id, u8 +0x78 tag,
  +0x7C instance_cb. Every offset the ARM code uses matches.
- `TaskBase`: INamable SafeString at +0x24 (name pointer +0x28; createTaskSync copies it into each
  heap's name +0x14), HeapArray +0x44, TaskMgr* +0x5C, u8 state +0x60 (1 = cPrepare), u8 tag +0x61,
  TaskClassID +0x64.
- Factory = `TTaskFactory<T>`: `new (ca.heap_array->getPrimaryHeap(), 4) T(ca)` (0010CF28), NULL if
  the allocation fails, else **the constructor's r0** (armcc constructors return `this`, mostly as
  a tail call). createTask_ writes the class id into the result without a NULL test, also on ARM.

`native/refs/tools/task_factories.py` lists all 26 factory instances (USA 00103C10, 006881E4 ..
006887E0) with their constructors, the converted return type and native overrides
(`native/refs/task_factories.txt`). TaskRender's 15 children come from the class-id table at EU
data 0x796774, which the static initialiser 005A7CEC fills. Only 3 converted factories are
`void` (0068828C, 00688538 = stop 52 "CapFader_UraOmote", 00688690), and native/game overrides
all 3. Five constructors are not in returns_this.json (0025E6C0, 0029D43C, 0029DC7C, 0037B310,
003AA5D0). Each returns `this` by subtracting a constant from a sub-object constructor's
result, and the converted C does the same subtraction. That is correct as long as the callees
0010DA24, 0010A794, 00491260, 003BC2F0, 001E3228 and 0010CE7C return `this`; all six are proven.
