# native/hot: exact C for the most-called game functions that were still Ghidra C

Goal: one decompiler mistake in a function called from hundreds of places shows up as hundreds
of different bugs. Each function here was identified, checked against the EU disassembly
instruction by instruction (`rom/eu_code.bin`, `shared/eu_usa_map.json`), and rewritten as
exact C (same operation order, ARM NaN branch semantics via `VCMP_*`, saturating `vcvt`,
signed/unsigned compares and widths as on ARM). One strong `func_<USA>` per file overrides the
weak decomp export. Shared helpers: `hot.h` (reuses `../gameplay/gameplay.h`), `skelanim.h`
(request code shared by 0016898C and 00169A80).

Status: **not linked** (link.sh / link64.sh are not edited here). Every file compiles clean with
`clang -std=gnu11 -O2 -msse2 -mfpmath=sse -ffp-contract=off -fno-strict-aliasing -Wall -Wextra`
for `-m32` and `-m64 -fms-extensions`.

## Method

- Ranking: distinct caller files across `build/ghidra_analyzed4` (HOT_TOP150.txt order, then
  extended); active source = Ghidra when `build/decomp/report.json` links the ghidra_fallback
  object; "native" = a strong definition elsewhere under `native/`.
- Signatures: the prototype the round-2 converted callers declare
  (`build/decomp/ghidra_fallback/ghidra_analyzed4`, after the systemic rebuild finished
  15:31). Game-pointer parameters are taken as `uint32_t` words (callers that pass a pointer
  are fine; a definition taking a pointer would read an undefined upper half on x86-64 from
  callers passing `int`). Return class (float vs int) always kept.
- Callee declarations match the definition that wins at link (native/sdk, runtime, core,
  route, ... or the converted Ghidra one), incl. its float/int return class.
- `tools/sigcheck_hot.py [--all] [--native]`: (1) our definitions vs the converted callers,
  (2) our callee declarations vs the winning definitions, (3) other native code declaring our
  functions. Current result: (1) all OK, (2) all OK, (3) see link notes.
- `test/run_tests.sh`: anim_test (92 checks) and actor_test (93 checks), each built and run
  for -m32 and -m64 with the build's float flags; all pass. Expected values come from the
  ARM semantics, including the NaN / saturation cases where the Ghidra C differs.
- Independent re-check (separate reviewer, from the disassembly only): 004F5588, 0016898C,
  00169A80: no discrepancy.

## Functions (29)

Caller files = distinct files in build/ghidra_analyzed4 that call the function.

| USA | EU | identity | callers | bug fixed vs Ghidra / round-2 conversion | conf. |
|---|---|---|---|---|---|
| 0019B51C | 0019B51C | Factory::Factory(createFn, id, name, list, -, group, -): actor-factory registration (static ctors) | 388 | none (exact; return/zeroed range from the member ctor's r0 as on ARM) | high |
| 002317C0 | 002317C0 | AnimSlotCtl::play(rate) -> f32 (mode 0-4: fwd / stop start / reverse / stop end / by sign) | 377 | mode 4 with NaN rate: ARM `blt` takes the reverse branch, Ghidra the forward one | high |
| 0016898C | 0016898C | SkelAnim::request(AnimReq*) (skeletal anim player: same-set update / blend transition) | 375 | weight test built from an undefined `in_fpscr` (positive NaN weight took the reset+copy path) | high |
| 004CF478 | 004CF450 | ModelInst::setDrawState(s8) (lazy render node, lock 0010C0B8/0010EEE0) | 345 | early exit returns the state byte (Ghidra 0) | high flow / low name |
| 00169A80 | 00169A80 | SkelAnim::calc() (pending request + frame advance of current and blend layers) | 257 | NaN frame: loop layers keep it, one-shot layers clamp to 0 (`vmovle`); Ghidra wraps+counts / stores NaN; + 0016898C's weight bug | high |
| 0019A848 | 0019A848 | ObjGroup::reset() (OffsetList flush / remove dead objects) | 196 | none (in_s0 plumbing into ListNode::erase_ removed) | high flow / low name |
| 00352A28 | 00352A04 | EffectSlot::~EffectSlot() ("onFinish" signal, release, unlink, IDisposer dtor) | 191 | none | high / medium |
| 00150E40 | 00150E40 | Actor::Actor(CreateArg*) (class above ActorBase 004ED00C; EffectSlot member at +0x324) | 174 | none (typed 32-bit words instead of native pointers in `undefined4` slots) | high / medium |
| 002313DC | 002313DC | AnimSlotCtl::stopAtStart() | 133 | none | high |
| 0016A2FC | 0016A2FC | SkelAnim::SkelAnim(nBones, -, nLayers) | 120 | none | high / medium |
| 004BC7BC | 004BC794 | Actor::hideModel() (once) | 117 | none (callee 00151148 now declared float like its definition) | high / low |
| 0016773C | 00167740 | AnimSet::allocSlots(n) | 115 | none | high / medium |
| 004BC8D8 | 004BC8B0 | Actor::updateModel() (matrix, skel anim calc+apply, world matrix) | 102 | stale extraout/in_r3 args (ignored by callee); 00168E9C now called with its native/robust prototype | high / medium |
| 004C03B8 | 004C0390 | Actor::applyModelParam(p): scale, degree->angle-index fields | 101 | `(int)` casts of deg*2^32/360: x86 gives 0x80000000 beyond +-180 deg and for NaN; ARM saturates / 0 | high / medium |
| 001512B4 | 001512B4 | ColliderRef::setPosWithOffset(pos) | 101 | none | high / low |
| 004EE484 | 004EE45C | Obj6ED898 ctor (0x64-byte member, two empty lists) | 96 | none | high / low |
| 0012C790 | 0012C790 | StateFlag::onEvent() | 87 | none | high / low |
| 002C2D00 | 002C2CDC | ModelFactory::create(ModelCreateArg*) (kind 0/1/2 model holders) | 87 | none (in_s0 into erase removed) | high / medium |
| 004F5588 | 004F5560 | EnemyBase::calcMove(): ground / wall resolution, probe queries | 84 | **airborne probe box {0, h(+ext), 0} never written (stale pos-anchor passed); per-box probe vector + 2.0 clamp lost; final snap-to-ground test read an unwritten `in_stack` local** | high / medium |
| 004F48F0 | 004F48C8 | EnemyBase::applyVelocity() | 82 | none | high / medium |
| 00581D60 | 00581D38 | SaveSlotRef::getValue() | 81 | none | high / low |
| 005826A4 | 0058267C | MessageMgr::getText(out, file, label) (msbt lookup, missing-text fallback) | 81 | none | high / medium |
| 004F70A8 | 004F7080 | EnemyBase::calcDamage() -> bool (damage queries, HP update, death trigger) | 80 | **damage multiplier (float return of vt[0x54]) lost: HP loss computed from garbage; 00521100's out word not passed to 00581B58 (unwritten `in_stack`); type 9 skips the model null check (C precedence)** | high / medium |
| 00503368 | 00503340 | Obj6EE3BC::~Obj6EE3BC() (member + base dtor chain) | 80 | none | high / low |
| 0014EB8C | 0014EB8C | Collider::init(owner, shape, res, kind, param, group) | 79 | none | high / medium |
| 004CEA18 | 004CE9F0 | ModelInst::setShapeVisible(on, idx) (visibility bitset, material dirty) | 77 | none | high / medium |
| 00231524 | 00231524 | AnimSlotCtl::stopAtEnd() | 77 | none | high |
| 0025B874 | 0025B874 | Obj6D68BC::~Obj6D68BC() (outside the function table) | 69 | none (typed void, r0 = this restored) | high / low |
| 004D838C | 004D8364 | chasePos(cur, target, rate, min, max) -> reached | 66 | first distance via double SQRT * rate (1-ulp differences); NaN step sent to minStep (ARM keeps NaN) | high |

Summary: 3 functions with gameplay-visible bugs in the round-2 conversion (004F5588 enemy
ground probes, 004F70A8 enemy damage, 004C03B8 angle conversion), 5 with NaN / rounding
differences (002317C0, 0016898C, 00169A80, 004D838C, 004CF478 return), the rest verified
correct and rewritten typed (32-bit game words, -m64 clean).

## Link notes

- Duplicates: none. No address here is defined by another native directory; the only other
  definition is the weak Ghidra export (build/decomp ghidra_fallback objects).
- Add `native/hot/*.c` to link.sh / link64.sh like native/gameplay (`-Inative/include`). No
  `ALBW_GP` pointer fields are used: every game word is a `uint32_t` read through W()/P(), so
  ptr32.py has nothing to rewrite.
- Other native code with different prototypes for these functions (all benign, integer-class
  argument count differences only): native/route (14 files) and native/compilefix/route/alt
  `func_002D4AA8.c` declare 00169A80 as `void (int)` (the 3 extra parameters here are
  unused); native/robust/func_0016FD34.c and native/route/func_0013F6E0.c declare 004CF478 with
  3 arguments (the third is ignored).
- 004F5588 / 004F70A8 / 00150E40 / 004BC8D8 / 005826A4 pass stack addresses (probe vectors,
  out-words, SafeString temporaries) as 32-bit words or to game code: needs game threads on
  low stacks on -m64 (already the case: native/64BIT.md). Tests run them on a MAP_32BIT stack.
- 0014FA44 is declared with a pointer first parameter (native/route/alt defines it that way;
  the converted Ghidra one takes int): safe for both.
- Callee-definition dependencies to keep consistent:
  - 0010F1F8 (ListNode::erase_): native/core/sead_list.c defines it `void (void *)`, but 177
    converted callers declare it `float (int *, float)`: on i386 every such call pops an empty
    x87 st(0) (native/core's issue; it lists those callers in native/core/callers_0010F1F8_float.txt).
    Here it is declared `void (void *)` like the definition.
  - 00151148 (converted, matched-ABI fallback) returns float: declared float here.
  - 00168E9C (native/robust) takes `(char *, char *, int)`: called with pointers.

## Reported, not changed

- native/sdk/os.c `func_0010C0B8(void *)`: 105 converted callers pass `int` (M64PTR: upper
  register half undefined on x86-64 for those callers).
- native/robust/func_00168E9C.c `(char *self, char *model, int)`: converted callers pass
  `(int *, int, int *)`: the model pointer arrives as an `int` (M64PTR).
- Function-table splits: 0025B88C / 0025B894 are bogus starts inside 0025B874; 00110DB8 falls
  through into 00110DDC (both have matched sources, so no stub).
- Functions with a matched source that is rejected by the matched-ABI check, so the Ghidra C
  runs today although HOT_TOP150 says "matched": 00352210 (390 caller files), 00151148 (195),
  005902C0 (185), 004C07D8 (164), 005841A8 (136), 003931EC (101), 0035D6D0 (80), 004FB468 (77),
  0054DDF4 (74), 00521078 (63). They are Ghidra C in the link and belong in this queue.

## Next in line (by caller files)

| USA | callers | note |
|---|---|---|
| 00166C20 | 116 (533 sites) | Layout `%s_%s.bflan` animation binder (207 lines, vcalls, list allocation): next big one |
| 004F8998 | 80 | EnemyBase damage-reaction decision (type propagation did not settle in Ghidra; deep branch tree) |
| 004C43E0 | 68 | ActorMgr::requestCreate (0x2C4-byte ring copy) - framework scope |
| 004994B0 | 66 | sead FixedSafeString::format (vsnprintf) - core scope |
| 004A7F00 | 64 | broad-phase collider register (see gameplay AUDIT) |
| 004A8030 | 62 | broad-phase |
| 004FC6FC, 004A2F38, 004FAD90, 004C1418, 004C01E4, 004FBA18, 001E6B34, 004EA104, 004C1300, 004C0350, 004BFE7C, 004BFF60, 0034C8F0, 003842C0 | 61-51 | not yet triaged |
| matched-ABI fallbacks above | 390-63 | Ghidra C in the link despite a matched source |
