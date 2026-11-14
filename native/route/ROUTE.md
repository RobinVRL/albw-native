# Route to gameplay: map, risk ranking, fixes

Path scout for the boot: from the framework main loop (where the boot is now: the Prepare task
loading TaskRender resources) to Link walking in the first playable area. One strong
`func_<USA>.c` per fix in this folder (header: USA/EU, role on the route, bug, verification,
confidence); shared helpers `route.h` (typed field access, ARM PMF call, inlined
StateMgr::exec, saturating vcvt) and `route_sm.h` (changeState template T6).
**Not linked yet**: add `native/route/*.c` to `tools/link.sh` like native/robust
(`-Inative/include`, force-include `native/albw_native.h`); every file compiles warning-free with
`clang -std=gnu11 -Wall -Wno-unused-parameter` for `-m32` and `-m64 -fms-extensions`.
`func_00341D28.c` includes `../gameplay/gp_collision.h` (needs native/gameplay in the link).
No address in this folder's top level is defined in native/{game,robust,sdk,gameplay,compilefix,
runtime} (checked after the last file was written; re-check before linking, other agents add
files).

**`alt/` (not to be linked as is):** 24 asm-verified rewrites of functions that native/compilefix
defined while this work ran (compilefix fixes the compile error on the Ghidra text; these are
full rewrites from the disassembly). Prefer the `alt/` version where the compilefix one still
carries a known defect: **00227AD4 and 002D4AA8 (compilefix keeps the no-`this` state dispatch
`(*(code *)*piVar)()`)**, 0068156C / 00681D10 (19 Ghidra register markers each), 00352F0C (14),
0026171C (6), 001DC4C8 (3), 00348558 / 004F5BD8 (2). compilefix's 00159FB8 also keeps a no-`this`
dispatch (no alternative here). To swap one in: delete the compilefix file, move the alt file
up and change `../route.h` back to `route.h`.

## 1. The route (USA addresses; EU in parentheses where it differs)

Tasks are sead tasks: created through `0049D4A8`/`0049D4A0` (TaskMgr::createTask) with a
CreateArg built by `001031B4`/`0049F79C`/`0049F7B8` holding the class id `{2, factory}`; the
factories are the 0x0068xxxx thunks (`operator new(size)` + ctor). Every task vtable has
`+0x28 prepare`, `+0x30 enter`, `+0x58/+0x5C` base calc/draw, `+0x60..+0x6C` app methods
(`+0x64` = per-frame calc). Scene/state logic runs in sead-style StateMgr objects (+0 counter,
+4 s8 state, +0x14 owner, +0x18 enter / +0x1C exec / +0x20 exit tables of ARM
pointers-to-member): the exec is inlined in every calc, changeState is a per-class copy.

| step | what | functions / classes |
|---|---|---|
| 0 | bootstrap, root task | 00100F68 -> TaskRoot (ctor 00103C10, size 0x110, vtable 006ED7DC) |
| 1 | **Prepare (boot is here)** | TaskRoot prepare 004ECA48 (EU 004ECA20): creates TaskRender (factory 0068821C, ctor 0014CEE4, size 0x228, vtable 006C7CA8), loads RegionBoot.szs / LanguageBoot.szs (001E06D0), creates AudioTask (factory 006887E0 -> ctor 004A08BC), primitive renderer shader, seq-manager init 0014A6A4 |
| 1a | TaskRender prepare | 0014BDE0: singletons (00504C5C, 005..., 002330F8, 0012F77C, 002E38E0, 00272570, 0016B550, 0050450C, 002C2574, 001B8DCC, 002C3034, 004AE0E0, 0013B418, 004AB4D0, 001664CC, 00503BE4, 0012DF9C, 004C8E10), render targets 0016E5A0 x2, effect system 002E2F78, ActorCommon.szs (001E06D0 slot 2), 00503A8C (font/rect drawer; stop 41), 0012D18C, event/pause flags 004C870C ("Default", "Join_Dark", ... "StopWallIn"), "CaptureFader" (0010B954), 0014A168 |
| 1b | TaskRender per frame | calc 0014B610 -> 001312BC (scene/camera views), 0014B788 / 0014C108 / 0014C804 (draw), model update 004F5BD8 (120 sites), effects (nw::eft 003E8730 / 003F4E98) |
| 2 | save check | TaskRoot enter 004ECA20 -> 0014ADB4 -> TaskFileFormatCheck (factory 00688458, ctor 0037B310, size 0xE4, vtable 006E5B40, calc 0037AE48); save data via native/sdk/fs.c (fresh save on first boot) |
| 3 | title screen + file select | **TaskFileSelect** (factory 00688340, ctor 0029D43C, size 0x158, vtable 006DAA14): prepare 001E316C-style base, `+0x6C` 0029D1F4 loads Environment/TitleLogo.bch + TitleCamera.bch; calc 0029B698 (Start/A test on the pad mask 0x81B, "SE_S_START_FILE_SELECT", title object 0025F9FC); state table 006A4960.. (0029D164, 0029D0DC, 0029B99C, 0029D104, 0029CC38, 0029CBF8, 0029D438, 0029D1C0, 0029D0E0, 0029D1B4, 0029CC88, 0029BCE4, 0029BFC8, 0029C5C8, 0029C0B8); layout parts 00487828 (shared by 10 menu parts), Mn_TitleB/T, Mn_TitleLogoT; scene changes go through the seq manager `*data_00712468` method 0014AA1C (changeTask(classId, fade)) |
| 3a | file chosen | 0029CC88 state 1: save slot = save+0x9CC+slot*0x1604 (`*data_00711DE8`, 004C38B0 load); copies {u8 course, s32 scene, s16 spawn, u8} from the slot into seq-mgr +0x1138/+0x113C/+0x1140; state 4: 0014AA1C(TaskMainGame factory 00688254) |
| 4 | main game | **TaskMainGame** (ctor 001E31E8, size 0xBC, vtable 006D1DB4): prepare 001E316C -> 002DF3E4, 001E1750, 0014B188, 002E32DC, 004C8C3C, 004EEFA0, then 004EE6C8 = game systems init: 00271494 (SceneEnv.byaml), 004A90B8 (collision), 004CD6EC/004CD7C8, 004AC7EC (Course/*_Common.bch), 00260D10, 004C4808 (actor heaps), **004C58F0 (Archive/ActorProfile.szs, "PlayerUnitHeap")**, **005183CC (player model loader -> 00346538 Link_model, 003459C8 LinkAnm2/, 00345F20 PlayerItem/)**, 00328114 (CameraParamStage.byaml), 003947D0, 004ED408, 0051AA64, 005191F4, 004CD000, 00171E8C, then creates TaskCourse (factory 006881E4) |
| 4a | main-game frame | TaskMainGame calc 001E30D0 -> 004EFB10 (EU 004EFAE8): 001E0AF4, 004CDBEC (event/pause), 002CB110, 004B77C4 (manager *data_0070A210, PMF by mode), 004ED740 (-> camera 00149D90/00149D98), 004AD81C, 004CD45C, **004C5100 ActorMgr::calc** (creation ring, 004C4884 heap pick: PlayerHeap/ActorHeap), 00260E30, 004C6DD0, 0051C3C8, 001725D0, 004EF7EC |
| 5 | course / scene load | **TaskCourse** (factory 006881E4, ctor 0014B148, size 0xC0, vtable 006C7C44): prepare 0014B0D0 -> 004EECD4 (course name table 00120024, "%s.szs", Course common BCH 004AC000, 002722F8, 004C4708, 005183A4, 004ADFE4, 0051A350) then creates **TaskStage** (factory 00688770, ctor 00518CCC, vtable 006EF524): prepare 00518C54 -> 004EE86C + 001E18A8 + **004EE8DC** (heap "TaskStage01", stage archive "%s.szs": 0027170C, 004C65B8, 004C457C, 00394794, 003280C4, 004ABA98 (KCL "kcl" init 004AB348 family), 001DB8D8, 004ED2F4, 004C6838, 004B083C/004B1A6C/004B0A0C, 004CCFF0, 00519594, 004C40E8, 004C8DE8, 004E9C00); stage BYAML "Byaml/%s_stage.byaml" 002761A0 (Objs / Rails / System), course BYAML 001BAD4C ("Byaml/%s_course.byaml", ICN parser 001BB924), map KCL "MapActor/%s.kcl" 0027E0C8 / 004D1114 / 004D1E9C, "%s/%s.kcl" 001BA1EC / 004D2F20 |
| 5a | scene change | scene manager `*data_00709DF8`: request 004EF418(mgr, {course, scene, spawn}, fade, 0) (current scene at +0x18, pending at +0x48) -> 0014B00C (new TaskCourse) or 0014AFE8 (same course); used by area-change actors (00230ADC) and demos |
| 6 | actors / player | ActorMgr `*data_00706E20` (lookup 0052FBA0, calc 004C5100, ring of 0x2C4-byte requests at +0x28..+0x34, live list +0x3DB8C); profile create stubs 00593240.. -> Factory ctor 0019B51C (vtable 006CE0B4); **Link**: actor with vtable slots 006D1A78..006D1AC8 (calc 001DE420, "PlayerObject" collision init 001DBEE4, ground probe 001DC4C8, body collision 00341D28, interaction 00348558, action table data_007111A8 / State_* names 005C88D4, action machine 002D55D0); per-frame model update 004F5BD8, world matrix 004CEAF0 |
| 7 | camera / HUD | camera look-at 00149D98 (from 004ED740), camera helper 0026F910, CameraParamStage; HUD layouts Lyt_Common / Lyt_Field / Lyt_Game (005A123C), Gm_MainGameSceneT 00440404, map switch 00445FC4, rupees 005B8FF0, fade parts 0031C110 / 0047F04C / 0046D76C |

### First-boot start scene (from code + data)

- course ids (table 00120024): 0 FieldLight, 1 FieldDark, **2 IndoorLight**, 3 IndoorDark,
  4 CaveLight, 5 CaveDark, 6 Dummy7, 7 CrossBattle, **8 Demo**, 9 DungeonEast, ...
- a fresh save slot is "new" when its position is course 8 / scene 0 (0054D224: `*p == 8 &&
  p[1] == 0`); 0029CC88 then copies that position into the seq manager and starts TaskMainGame
  with fade 5. So the game first loads **Demo, scene 0 = Demo1** (Archive/Demo1.szs,
  World/Byaml/Demo1_stage.byaml, cutscene World/Demo/Demo1.csv + Demo1.bch: Link's nightmare,
  actors TriForce / GhostGanon / LinkDemo, BGM_Demo1).
- Demo1.csv ends with `1421,Finish,2,0,0`: course 2 (IndoorLight), scene 0, spawn 0 =
  **IndoorLight1 = Link's house** (Archive/IndoorLight1.szs, IndoorLight1_stage.byaml with the
  "FieldLight_2C_BlackSmithKid_OP" event: Gulley wakes Link). That is the first playable area;
  the exit leads to FieldLight (Hyrule field around Link's house / the blacksmith).
- So the route crosses the demo player (Demo course, Demo_course.byaml, demo actors) before the
  first gameplay room; a debug shortcut is to make the new-save position IndoorLight/0/0.

## 2. Risk ranking (method and summary)

Route set: breadth-first over the ARM call graph (all `bl/blx/b<cond>` to function starts) plus
function pointers in the data tables a function references (vtables, PMF state tables), from
the roots of each step above, depth <= 4: 5,241 functions (1,798 Ghidra-sourced in step 1
alone; matched sources excluded from the markers). Markers checked on the active converted
source (`build/decomp/ghidra_fallback/ghidra_analyzed4`, systemic round 2 run 3):
compile failure (= tripwire stub), no-argument PMF dispatch `(*(code *)*p)()`, no-argument
`(*UNRECOVERED_JUMPTABLE)()`, `in_rN/in_sN/unaff_` not explained (an `in_` passed only to a callee
that does not read that register, or an `unaff_` used only to fill padding bytes of a merged
byte store, is benign), `&stack0x`, residual float bit-casts, float->int casts, calls passing
fewer arguments than the callee's ARM live-in registers (livein2.json), float/int return-class
disagreements between native definitions and converted declarations.

| class | on the route (depth <= 4) | status |
|---|---|---|
| compile failures (tripwire stubs) | 33 at the start of this work (run 2) | 26 rewritten here (23 now in `alt/` because compilefix covered them meanwhile), the rest covered by compilefix; **left on the route: 001EA96C** (no Ghidra source at all, 601 insns, player-side, called from 00342C24) |
| PMF state dispatch without `this` | 89 functions game-wide (13 on the mapped route) | 13 route ones + 52 actor/object/HUD calcs fixed here (+ 00227AD4 / 002D4AA8 in `alt/`); open: 001A0A68, 001608B0 (large), 004DA39C (colour word built from a dead register: needs a decision), 0033F334 002233FC 0025AF44 004E2F64 00159FB8 0027FBE4 00263E4C 001403BC 002FA354 0018F348 00189944 00220F20 00473148 001B305C 002A13A0 (not reached by the mapped route); 0011F1D8 is matched and correct |
| class-B UJT without arguments | 0025F9FC, 004B77C4 (main-game frame), T6 x7 | fixed; T5 (11), T7 (5), T9-T13 (10) and 16 singles remain, none reached by the mapped route |
| Vec3 returned in s0-s2 | 004997A0 -> caller 00149D98 (camera) | fixed (inlined) |
| short calls (fewer args than live-in) | only 001031B4 / 0049F920 (stop 43), fixed by run 3 | none left |
| float return class (native void/int vs converted float) | 0010F1F8 (list unlink, converted `float` s0 pass-through, 177 converted callers; native/sdk/os.c and native/game/func_0049C334.c call it as `void`: one leaked x87 slot per call on i386), 004A7F00 (4 native callers declare void), 00151148, 004D7E0C; robust void definitions 0065D120 / 0065F560 / 006640EC / 0066E07C, sdk 003E1634 with float-declaring converted callers | **open, other folders** |
| returns-this thunks on float leaves | 40 functions in native/returns_this.json whose callers read s0 (e.g. 002B04E8 returns 0.2f in s0 and leaves r0 = this); the generated i386 thunk returns an int | **open (tools/link.sh thunks)**; 004F5BD8 here uses the constant directly |

Hand-verified open items (by descending risk; none fixed here):

| USA | step | finding | verdict |
|---|---|---|---|
| 004C5100 ActorMgr::calc | 4a | ring compaction path (scene state 3) copies request word 0xA7 (+0x29C) through `in_s0 = ALBW_AS_F32(w); dst[0xA7] = in_s0;` -> float->int VALUE conversion of a bit copy (vldm/vstm on ARM) | **real**, only when requests are deferred (bVar1 path); rewrite needed (~490 insns) |
| 001DD1D8 | 6 | player camera/ground target: 004D891C live-in lists s5-s10 that the ARM caller never sets (garbage on ARM too) | probably benign; check 004D891C's use of s5-s10 |
| 001BAD4C course BYAML loader | 5 | in_d8 / in_s18 carry parsed Vec3 parts across key branches, in_r3 an extra sprintf vararg | benign (same as ARM) |
| 0014BDE0 TaskRender prepare | 1a | in_s0..s3 to 0016E5A0 (s3 "live-in" is a vldr), in_r3 to 0013B020 (reads r0-r2), unaff_r6 = profiler handle | benign |
| 004C870C | 1a | stack params 300 / 800 of 004A3B28 passed as its 4th/5th C params | benign (caller and callee agree) |
| 0029CC88 / 0029C5C8 | 3a | `unaff_rN & 0xffffff00 \| byte` struct packing into seq-mgr +0x1138 | benign (garbage padding on ARM too) |
| 004F5588, 004F70A8, 00122C78, 00320F90, 002E39E8, 00273210, 001B7380 | 1-4 | in_/unaff_ assigned on every path before use (Ghidra register modelling) | benign |
| 00445C68 | 1 | 004562C8(r0, s3): s3 comes from in_s3 | check (004562C8 reads s3) |
| 0048B8B8 <- 00503A8C (stop 41) | 1a | memcpy into *(obj+0x24) of the "arc" archive entry; the object at TaskRender+0x120 must be constructed with a buffer | not reproducible statically; trace at the boot |
| 003F23C4, 003EAE54, 003E9470, 003EB748 (nw::eft emitters) | 1b | in_d8..d13 / in_s24..26 = callee-saved float registers used as locals | likely benign; eft path also has 003E728C open |

## 3. Fixes in this folder

See the table generated from the file headers at the end (one row per file). Classes:

- **PMF / class B** (garbage `this` in state handlers): TaskFileFormatCheck::calc 0037AE48,
  TaskFileSelect::calc 0029B698 (title), title object 0025F9FC, title-side task 0029D9FC,
  task 0025DA04, main-game manager 004B77C4, area-change actor 00230ADC/00230AD8 (scene change
  requests), StateMgr::changeState T6 x7 (0066BE5C 0066BF2C 0066C0CC 0066D544 0066E7A0
  0066BFFC 0066E58C), camera helper 0026F910, layout/HUD parts 00487828 00445FC4 0046D76C
  0047F04C 0031C110 and the actor/object calcs listed in the table.
- **Compile failures on the route** (tripwire stubs): linked set 004EDEFC (collider sweep),
  00521040, GPU thunks 0060191C / 00601914; the other 23 (TaskRender frame 001312BC, actor model
  update 004F5BD8, player model/anim/equipment loaders 003459C8 / 00345F20, player collision
  00341D28, interaction 00348558, ground probe 001DC4C8, KCL prism tests 0068156C / 00681D10,
  particle effects 003E8730 / 003F4E98, course ICN parser 001BB924, 004FD348, ...) are in `alt/`
  because compilefix now defines them.
- **Lost Vec3 return**: camera look-at 00149D98 (+ entry 00149D90).

## 4. What the boot agent should expect next

In execution order from the current position (TaskRender prepare):
1. Stop 43 / 41 area: with run 3 the class id reaches the task CreateArgs (001031B4 /
   0049F920 now take 2 params); next is the 00503A8C -> 0048B8B8 memcpy (stop 41) and the
   remaining TaskRender prepare singletons (all Ghidra-clean by the markers; the danger there is
   the classes the markers cannot see: lost r0 pass-through in matched sources, wrong
   returns-this, code-section strings).
2. First TaskRender frame: 001312BC (was a stub, fixed here), 004F5BD8 (fixed), nw::eft
   003E8730 / 003F4E98 (fixed) and **003E728C (still a stub)** as soon as a particle emitter
   with that mode runs.
3. TaskFileFormatCheck -> TaskFileSelect: the state dispatches (fixed here) were certain
   crashes; then the title layouts (Lyt_Boot / Lyt_Menu, native/sdk/lyt.c), TitleLogo.bch.
4. New file -> TaskMainGame prepare: ActorProfile.szs, player model loaders (fixed), then
   TaskCourse/TaskStage for **Demo1** (demo player, Demo1.csv commands) before IndoorLight1.
5. In IndoorLight1: Link (001DE420 calc; 001EA96C has no source at all and is still a stub:
   expect a tripwire the first time Link's per-frame update reaches it through 00342C24),
   ActorMgr ring compaction (004C5100, only with deferred requests),
   KCL (box walkers 0042EFB0 / 0043081C still Ghidra per gameplay/AUDIT.md), camera (fixed).
6. i386 only: x87 stack leaks from void-declared float pass-through callees (0010F1F8 in
   native/sdk/os.c and native/game/func_0049C334.c) turn every later float return into NaN
   after 8 calls: fix the declarations (or make the converter type 0010F1F8 `void`) before
   chasing float garbage.

## 5. Fix table (generated from the file headers)
| USA | EU | role / route | bug | confidence |
|---|---|---|---|---|
| 0013AA90 | 0013AA90 | calc of the actor class with vtable slot 006C69F0: decrements the s16 timer +0x440 (floored at 0), actor common update 0014E2A0(this, *(this+0x410)... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0013C6D4 | 0013C6D4 | calc of the actor class with vtable slot 006C74B8: StateMgr::exec (StateMgr at +0x418), then the model: sets bit 30 of *(model+0x164), 004D8AEC(mod... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0013F6E0 | 0013F6E0 | calc of the actor class with vtable slot 006C7668: decrements the counter +0x50C; first call (+0x51E) with +0x51D set: 004CF478(*(+0x410), 0, 0), 0... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 00148AF0 | 00148AF0 | calc of the object class with vtable slot 006C7A5C (a watcher of up to 16 actor ids +0x6AC with counters +0x6EC, count s16 +0x72C): for each slot,... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 00149D90 | 00149D90 | entry `ldr r0, [r0, #0x34]` that falls through into 00149D98 (camera look-at update, see func_00149D98.c); called by 004ED740 (main-game frame). —... | its Ghidra body is the merged copy of 00149D98 with the lost s1/s2 of 004997A0. | high |
| 00149D98 | 00149D98 | camera look-at update from a camera-target object (r1): eye = target+0x1B0, at = target+0x1BC; direction (+0x80) = normalize(at - eye) (skipped whe... | 004997A0 returns its Vec3 in s0-s2 (vldmia r2, {s0, s1, s2}); Ghidra kept only s0, so the converted code used uninitialised in_... | high (flow), medium (field names) |
| 00157BF0 | 00157BF4 | calc of the enemy actor class with vtable slot 006C8280 (enemy base 004F70A8): eases the float +0xA48 (mirrored to +0x574) toward 0 or 0.28 by 5 %... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); float returns of the 004F base helpers declared float. | high |
| 001740FC | 001740FC | calc of the object class with vtable slot 006C8CC8 (a falling / pushed block): keeps only a zero (or NaN) vertical velocity +0x3E0, position += vel... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); the float register argument s0 = 0.5f of 0014EEC8 (... | high |
| 00191208 | 00191208 | calc of the actor class with vtable slot 006CD8C0: when the byte +0x588 is set it only calls 00547514(this+4) for u16 +0x2C == 1 and sets +0x2D7; o... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 00194D78 | 00194D78 | calc of the actor class with vtable slot 006CDC88 (also called by 00246E3C): request byte +0x4CD (1: state 1, 2/3: 003521F0(+0x324, 1) and state 2... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 001BD314 | 001BD314 | calc of the actor class with vtable slot 006CF348: actor common update 0014E2A0(this, *(+0x45C), 0, 0x1008, this+0x460, 0); StateMgr::exec (StateMg... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 001C0C34 | 001C0C34 | calc of the actor class with vtable slot 006CF868: actor common update 0014E2A0(this, *(+0x434), 0, 0x1200, 0, 0), StateMgr::exec (StateMgr at +0x4... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 001C6500 | 001C6500 | calc of the actor class with vtable slot 006CFE34: decrements the s16 timer +0x4C4 (floored at 0) and, when it is 0, runs the actor common update 0... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 001D14B8 | 001D14B8 | calc shared by the actor classes with vtable slots 006C7720, 006D148C, 006ED440: when +0x5DF != 2 and +0x5E0 == 1: StateMgr::exec (StateMgr at +0x4... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 001D91D8 | 001D91D8 | calc of the actor class with vtable slot 006D184C: timer +0x480 count-down, 0034CA24(*(+0x43C)), actor common update 0014E2A0(this, *(+0x460), this... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 001E7AA0 | 001E7AA0 | calc of the object class with vtable slot 006D2388: StateMgr::exec of the StateMgr at this+0x788. — actor/object state machine (first-area actors r... | the inlined StateMgr::exec called the state handler with no `this` (Ghidra `(*(code *)*piVar)()`; on ARM r0 = owner + (adj >> 1)). | high |
| 00217E58 | 00217E58 | calc of the enemy actor class with vtable slot 006D2DD8 (enemy base 004F70A8) that hurts the player on contact: while the cooldown +0x8F4 is 0 and... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); the player-hit calls get their position and s0 stre... | high |
| 0021DED4 | 0021DED4 | calc shared by enemy actor classes (vtable slots 006D3518, 006DAFBC, 006EDFA4) on the enemy base 004F70A8: outside state 6, flags +0xA00 when the t... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); float returns of 004F944C / 004F898C / 004F48F0 / 0... | high |
| 00230AD8 | 00230AD8 | second entry of 00230ADC (a single `mov r0, r0` that falls through into it), used by the vtables 006D3C64 / 006EE3D8. — area-change actor calc (see... | the Ghidra body is a copy of 00230ADC with the same lost `this` in the state dispatch. | high |
| 00230ADC | 00230ADC | calc of an area-change ("exit/door") actor base class (vtable slots 006D3AEC, 006DB9B4, 006DE75C, 006DE7B4, 006EE380; also called by 0032FE78). Bus... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar5)()`), and the tail call `b 00165F84` with r0 = this was... | high |
| 0023F73C | 0023F73C | calc of the actor class with vtable slot 006D4814: one-time setup when +0x518 is clear (00332970(this, *data_00693328), 00332AB8, 00332BFC, set +0x... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 00246918 | 00246918 | calc of the actor class with vtable slot 006D5C68: StateMgr::exec (StateMgr at +0x414), then the model *(+0x410) matrix: bit 30 of +0x164, scale =... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0024E934 | 0024E934 | calc of the actor class with vtable slot 006D6300: when the model *(+0x40C) exists and its +0x30 byte is set, updates the two animation objects +0x... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0025DA04 | 0025DA2C | calc of a task (vtable slot at 006D6BF4; same StateMgr-at-+0xC8 layout as the other TaskBase-derived scene tasks): 001E30D0(this), 0014AC28(seq, 1)... | the inlined StateMgr::exec called the state handler with no `this` (Ghidra `(*(code *)*piVar3)()`); 00122C78 got Ghidra's phant... | high |
| 0025F9FC | 0025FA24 | title-screen object reset / "go to state 2" (called by TaskFileSelect::calc 0029B698 with (obj = *(task+0xEC), 1) when Start/A is pressed on the ti... | class-B single (b_templates single_0025F9FC): the enter handler tail call was emitted as `(*UNRECOVERED_JUMPTABLE)()` without `... | high |
| 0026E08C | 0026E0B4 | calc of an object whose vtable slot is 006D77A4: 0012C85C(this, a) (base calc, r1 passed through), then StateMgr::exec on the StateMgr at *(this+0x... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar2)()`). | high |
| 0026F910 | 0026F938 | per-frame update of a camera-target helper owned by 0016AAAC: StateMgr::exec (StateMgr at this+0xC), then in modes 7/8 (s8 +8) with state >= 1 aver... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar4)()`). | high |
| 0027D464 | 0027D48C | calc of the actor class with vtable slot 006D7EBC (rotating fire bar, "SE_GuruGuruBar_BURNING"): StateMgr::exec (StateMgr at +0x40C), 0027D288(this... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). (r1 of 0027CDD4 is not read there: passed as 0.) | high |
| 00281C4C | 00281C74 | calc of the actor class with vtable slot 006D88A4: while +0x993 is set and the manager *data_00709F30 exists, polls 004C684C(mgr, this+0x99C, s16 +... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 002863A4 | 002863CC | calc of the actor class with vtable slot 006D9C44: clears +0x460; when the collider *(+0x434) exists and *(+0x430)+0x61 is set, moves the collider... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0028B054 | 0028B07C | calc of the actor class with vtable slot 006DA17C: when +0x5D4 is set only raises +0x2D7; else StateMgr::exec (StateMgr at +0x4F4), 00169A80(*(+0x5... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0029B698 | 0029B674 | TaskFileSelect::calc (vtable 006DAA14 +0x64). TaskFileSelect is the title screen + file select task (loads Environment/TitleLogo.bch / TitleCamera.... | both inlined StateMgr::exec dispatches (the task's StateMgr at +0xBC, and the sub-object at *(+0x138)+4) were printed by Ghidra... | high |
| 0029D9FC | 0029D9D8 | calc of the task whose vtable slot is 006DAAF0 (title-side task next to TaskFileSelect's vtable 006DAA14): 002DF5C4(*data_00712588) then StateMgr::... | the inlined StateMgr::exec called the state handler with no `this` (Ghidra `(*(code *)*piVar3)()`). | high |
| 002B2018 | 002B1FF4 | StateMgr "exec once" helper called by 004F70A8 (TaskRender-side object update): if bit 0 of +0x3A is set it runs StateMgr::exec on the StateMgr at... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar3)()`). | high |
| 002E6448 | 002E6424 | calc of the enemy actor class with vtable slot 006DDF94 (enemy base 004F70A8): 003521F0(this+0x324, 00556E94(player)); when active: outside states... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); float returns of the 004F base helpers / 00491624 d... | high |
| 00315B14 | 00315AF0 | calc shared by moving-object classes (vtable slots 006D1084, 006E0238, 006E2BB8, ...): timer +0x480 -= +0x484; velocity +0x3DC = speed +0x478 * (si... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 00316920 | 003168FC | calc shared by several actor classes (vtable slots 006D6240, 006D6788, 006DA320, ...): StateMgr::exec (StateMgr at +0x40C), actor common update 001... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 003196BC | 00319698 | calc of the actor class with vtable slot 006E0530: StateMgr::exec (StateMgr at +0x49C), then the model *(+0x410): sets bit 30 of +0x164, 004D8AEC(m... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0031A878 | 0031A854 | calc of the actor class with vtable slot 006E05E8: when u16 +0x38 is set, 00588BF0(this, 1) holds and the state (s8 +0x424) is 0, changes state to... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0031C110 | 0031C0EC | calc of a HUD layout part that fades with a value read from the global game object (*data_0070FB60, float getter 00546258): keeps the previous valu... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar8)()`). | high |
| 003381DC | 003381B8 | calc of the actor class with vtable slot 006E251C: decrements the s16 timer +0x440 (floored at 0), actor common update 0014E2A0(this, *(this+0x43C)... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0033912C | 00339108 | calc of the actor class with vtable slot 006E268C: actor common update 0014E2A0(this, *(+0x438), this+0x440, 0x1008, 0, 0) unless +0x410; StateMgr:... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0035AC8C | 0035AC68 | calc of the actor class with vtable slot 006E3A7C: one-time setup when +0x518 is clear (00332970(this, *data_00693334), 00332AB8, 00332BFC, set +0x... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0035CD60 | 0035CD3C | calc of the actor class with vtable slot 006E3ED4: clears +0x4CC, s16 timer +0x51C count-down, actor common update 0014E2A0(this, *(+0x498), this+0... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); s0 of 0014EEC8 (the float at +0x4AC) passed explici... | high |
| 0035D760 | 0035D73C | calc shared by actor classes (vtable slots 006D8F54, 006E41E0, 006E42FC): when 00588BE4(this) equals the word data_006937EC, the byte +0x85D is cle... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0036A0F0 | 0036A0CC | calc of a layout part (vtable slot 006E4B38): StateMgr::exec (StateMgr at +0x3C); when the truncated float +0x74 changed during it, stores the new... | both state handlers were called with no `this` (Ghidra `(*(code *)*piVar)()`); the float -> int conversions are ARM vcvt.s32.f3... | high |
| 00376568 | 00376544 | calc of a layout part (vtable slot 006E5890): counts the frames (u16 +0x6A) the pane *(this+0x14) is visible (005438EC) with flag 0x80 of its u16 +... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0037AE48 | 0037AE24 | TaskFileFormatCheck::calc (vtable 006E5B40 +0x64). — first task the root runs after the Prepare task (save-data format check, 0014ADB4 -> 00688458... | the inlined StateMgr::exec (StateMgr at this+0xC0) calls the state handler through an ARM pointer-to-member; Ghidra printed it... | high |
| 003914D4 | 003914B0 | calc of the object class with vtable slot 006E700C: sets the "started" byte +0x41C on the first call, then StateMgr::exec of the StateMgr at +0x420... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 00398D7C | 00398D58 | per-frame update of an actor-attached helper (vtable slot 006E74DC): once (+0x3D), when the owner actor's (+4) +0x3E8 equals +0xA20, creates an obj... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar3)()`). | high |
| 0039CC38 | 0039CC14 | calc of the actor class with vtable slot 006E7DF0: 00151148(*(this+0x43C), 0) (float result unused), StateMgr::exec of the StateMgr at +0x40C, posi... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 003A3BFC | 003A3BD8 | per-frame update of an actor-attached helper (vtable slot 006E8384, sibling of 00398D7C): once (+0x3D), when the owner actor's (+4) +0x3E8 equals +... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 003AA330 | 003AA30C | per-frame update (this, msg) of the object class with vtable slot 006E8A00: on mode 3 (+0x1E9) or msg[0] == 2: 0057EAC0(+0x234) and 00539418(this,... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 003AD198 | 003AD174 | calc of the actor class with vtable slot 006E8E28 (a ball with an effect handle): resolves/creates the effect handle {+0x4AC, +0x4B0} ("Ball", 004A... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 003B0510 | 003B04EC | update of a sub-object with an enable byte at +0x48 and a StateMgr at +0x1C (called by 003A343C and through the vtable slot 006E9170). — actor/play... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar3)()`). | high |
| 003BCD80 | 003BCD5C | timed sub-object update (vtable slot 006E9FCC, also called by 003A343C): while active (+0x3A) decrements the s16 timer +0x38 (clears +0x3A at <= 0)... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 00445FC4 | 00445F9C | calc of the main-game layout scene part with vtable slot 006F1A74 (map-switch layout): when flag 0x20A of *data_0070B728 (event/pause flags, 00584B... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar5)()`). | high |
| 00456C90 | 00456C68 | calc of a layout part (vtable slot 006F2084) with two state machines: StateMgr::exec of the StateMgrs at +0x17C and +0x1A0. — HUD/layout state mach... | both state handlers were called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0045D9A8 | 0045D980 | calc of a HUD layout part (vtable slot 006F20E8) with three state machines (+0x74, +0x98, +0xBC): runs StateMgr::exec on each, then shows/hides its... | all three state handlers were called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0046D76C | 0046D744 | calc of a layout/HUD part (vtable slot 006F287C): 00421C30(*(this+0xA8)) (layout animation update), then StateMgr::exec on the StateMgr at +0x74. —... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar3)()`). | high |
| 0046FA00 | 0046F9D8 | calc of a layout part (vtable slot 006F2CDC) turned with the pad: when 00520E60(*(*data_007142C8 + 0x12C)) holds, 00368CEC(*(+0xE0)) and StateMgr::... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 004777AC | 00477784 | calc of a layout part (vtable data 006A5420): executes a pending request byte +0x114 (1: 0051BF44(*data_007142C8, s8 +0x115, s8 +0x116), 2: 0051BDF... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0047BF90 | 0047BF68 | calc of a layout part (vtable data 006A5438): unless the state machine at +0xF0 is already in state 0xB, and when 005228A4(*data_0070B850, *(+0x10)... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 0047F04C | 0047F024 | calc of a HUD layout part (vtable slot 006F3760) with two linked panes (+0x110, +0x114): bit 0 of each pane's u16 flags (+0x16 of *(pane+0x14)) is... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar4)()`). | high |
| 00487828 | 00487800 | calc shared by 10 layout/menu part classes (vtable slots 006F23F0, 006F2944, 006F2A00, ...): base calc 00440C48(this), StateMgr::exec (StateMgr at... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar4)()`). | high |
| 004B77C4 | 004B779C | per-frame update of the manager singleton *data_0070A210, called by the main-game frame 004EFB10 (TaskMainGame calc) when the singleton exists: dis... | class-B single (b_templates single_004B77C4): Ghidra emitted the PMF tail call as `(*UNRECOVERED_JUMPTABLE)()` without `this` (... | high |
| 004EDEFC | 004EDED4 | collider component segment/sweep test (role from callers 004ED9F4 family, AUDIT.md section 4): fills the query record `q` (+0x04 direction, +0x10 s... | the converted source did not compile (a callback result typed float and called). | high |
| 00508F5C | 00508F34 | calc of the actor class with vtable slot 006EE7DC (a falling object): counter +0x4A0 up to +0x4A4, actor common update 0014E2A0(this, *(+0x41C), th... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); the float register argument s0 = 0.5f of 0014EEC8 i... | high |
| 0050C29C | 0050C274 | calc of the actor class with vtable slot 006EEA04: actor common update 0014E2A0(this, *(+0x420), this+0x480, 0x1000, this+0x490, 0), StateMgr::exec... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 00516258 | 00516230 | calc of the actor class with vtable slot 006EF3B4: actor common update 0014E2A0(this, *(this+0x44C), this+0x43C, 0x1000, 0, 0), then StateMgr::exec... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 00521040 | 00521000 | small getter: the object at this+0x2D0 plus 0xC, or the static default data_00725974 when +0x2D0 is null (returned in r0). — reached from the TaskR... | the converted source did not compile (Ghidra printed the pool word as the overlapping symbol `_func_00521054`): stub in the link. | high |
| 00601914 | 006018EC | one-instruction thunk `b 003E35E0` (gsp FlushDataCache(addr, size) wrapper, native in sdk/gfx.c), reached from the render/GPU path (route phase 1). | compile failure in the round-2 conversion (Ghidra inlined the target's body into the thunk source -> "conflicting types for fun... | high |
| 0060191C | 006018F4 | one-instruction thunk `b 003E3C88` (GPU register read wrapper, native in sdk/gfx.c), reached from the render/GPU path (route phase 1). | compile failure in the round-2 conversion (Ghidra inlined the target's body into the thunk source -> "conflicting types for fun... | high |
| 00654DDC | 00654DB4 | calc of an enemy actor class (vtable slots 006D3260, 006E14BC), built on the enemy base 004F70A8 / 004F5588 / 004F5BD8: u16 timer +0x8E4 count-down... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); the float-returning helpers 004F48F0 / 004F5588 are... | high |
| 00655D90 | 00655D68 | calc of an enemy actor class (vtable slots 006E15A4 (also called by 0026D3D8)), built on the enemy base 004F70A8 / 004F5588 / 004F5BD8: u16 timer +... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); the float-returning helpers 004F48F0 / 004F5588 are... | high |
| 0066BE5C | 0066BE34 | StateMgr::changeState(sm, s8 newState), class-B template T6 (body and verification in route_sm.h; the 7 copies normalise to one EU instruction sequ... | Ghidra printed both handler calls as `(*UNRECOVERED_JUMPTABLE)()` with no arguments: the exit handler lost `this` and newState,... | high |
| 0066BF2C | 0066BF04 | StateMgr::changeState(sm, s8 newState), class-B template T6 (body and verification in route_sm.h; the 7 copies normalise to one EU instruction sequ... | Ghidra printed both handler calls as `(*UNRECOVERED_JUMPTABLE)()` with no arguments: the exit handler lost `this` and newState,... | high |
| 0066BFFC | 0066BFD4 | StateMgr::changeState(sm, s8 newState), class-B template T6 (body and verification in route_sm.h; the 7 copies normalise to one EU instruction sequ... | Ghidra printed both handler calls as `(*UNRECOVERED_JUMPTABLE)()` with no arguments: the exit handler lost `this` and newState,... | high |
| 0066C0CC | 0066C0A4 | StateMgr::changeState(sm, s8 newState), class-B template T6 (body and verification in route_sm.h; the 7 copies normalise to one EU instruction sequ... | Ghidra printed both handler calls as `(*UNRECOVERED_JUMPTABLE)()` with no arguments: the exit handler lost `this` and newState,... | high |
| 0066D544 | 0066D51C | StateMgr::changeState(sm, s8 newState), class-B template T6 (body and verification in route_sm.h; the 7 copies normalise to one EU instruction sequ... | Ghidra printed both handler calls as `(*UNRECOVERED_JUMPTABLE)()` with no arguments: the exit handler lost `this` and newState,... | high |
| 0066E58C | 0066E564 | StateMgr::changeState(sm, s8 newState), class-B template T6 (body and verification in route_sm.h; the 7 copies normalise to one EU instruction sequ... | Ghidra printed both handler calls as `(*UNRECOVERED_JUMPTABLE)()` with no arguments: the exit handler lost `this` and newState,... | high |
| 0066E7A0 | 0066E778 | StateMgr::changeState(sm, s8 newState), class-B template T6 (body and verification in route_sm.h; the 7 copies normalise to one EU instruction sequ... | Ghidra printed both handler calls as `(*UNRECOVERED_JUMPTABLE)()` with no arguments: the exit handler lost `this` and newState,... | high |

82 files

### alt/ (asm rewrites of functions compilefix also defines; not linked)

| USA | EU | role / route | bug | confidence |
|---|---|---|---|---|
| 001312BC | 001312BC | TaskRender per-frame scene/camera update (called by the TaskRender calc 0014B610 every frame): updates the 2x3 render-view objects at this+0x28D0 (... | the converted Ghidra source did not compile (float/pointer confusions in the stack temporaries), so the link has a tripwire stu... | high (flow), medium (role names) |
| 0014E2A0 | 0014E2A0 | actor helper that builds a 0x24-byte collision/attention request on the stack and submits it to the manager *data_00709D28 through 004A8F40 (95 cal... | the converted source did not compile (`_local_50`, Ghidra's CONCAT22 halfword merge). Signature kept as the 95 converted caller... | high |
| 0014FA44 | 0014FA44 | variant of 0014E2A0 (attention/collision request submitted to *data_00709D28 via 004A8F40) with the request word +0 given by the caller. Request (0... | the converted source did not compile (`_local_58`, CONCAT22 halfword merge). Signature as the converted callers declare it (7 w... | high |
| 001B7D64 | 001B7D64 | per-slot update of a slot array (element 0x70 bytes at *(this+0x88), count at +0x80): 001B8048(this, a1, idx), then for an active slot (+0x6C set,... | the converted source did not compile (Ghidra typed `this`/index as floats; the bit-casts became pointer casts). | high |
| 001BB924 | 001BB924 | parse the "ICN" array of a map/course BYAML node into an array of 0x38-byte icon/marker records (allocated with the array ctor 001BAA38 into out[1]... | the converted Ghidra source did not compile (switch on a `uint *` local): tripwire stub. | high |
| 001DC4C8 | 001DC4C8 | player ground/area probe after a move (player component, owner fields +0x598 / +0x604 / +0x614 / +0x720): takes the current position (*(+0x604)+0x6... | the converted source did not compile (`NAN`); it also wrote the query block at the wrong frame offsets (Ghidra's stack-variable... | high (flow), medium (names) |
| 00227AD4 | 00227AD4 | calc of the enemy actor class with vtable slot 006D37E0: 00227CA4(this), StateMgr::exec (StateMgr at +0x468), sets the hit-check enable byte *(+0x6... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`); s0 = 2.5f of 0014EEC8 passed explicitly; 002283D4 r... | high |
| 0026171C | 00261744 | model-attachment update (helper object: +0x10 owner actor, +0x18 model, +0x1C/+0x20 slot sets, +0x24/+0x25 flags, +0x30 joint index): sets the mode... | the converted source did not compile (float-typed parameters used as pointers). | high |
| 00298160 | 00298208 | "is there another live actor with my (group +0x34, id byte +0x36) pair": walks the ActorMgr list (*data_00706E20: iterator 005841A8 from mgr+0x3DBC... | the converted source did not compile (the immediate 0x3DBC0 loaded from the pool was printed as the overlapping symbol `_func_0... | high |
| 002D4AA8 | 002D4A84 | per-frame update of a texture-scroll / material animator (called by 003A7A14 with a float speed in s0): StateMgr::exec of its own StateMgr (at +0)... | the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). | high |
| 002D5D40 | 002D5D1C | message handler (virtual) of a player-carried object (wall-hit / damage reactions: strings SE_PL_HIT_WALL, SE_PV_DAMAGE): switch on the s16 message... | the converted source did not compile (code-section string printed as `s_`+1). | high |
| 002DA848 | 002DA824 | player action-state handler (virtual, vtable slot 006DD764) for the sub-states 0x78 / 0x79 / 0x7A of an action that pairs Link with another actor (... | the converted source did not compile (`NAN` for the -1 word of the message block). | high (flow), medium (names) |
| 00341D28 | 00341D04 | player body collision against the world (the per-frame push-out of Link): up to four swept-capsule queries through the broad phase (004A7620 world... | the converted Ghidra source did not compile (floats stored through `undefined4 ****` locals that alias the query records): trip... | high (flow and values), medium (role... |
| 003459C8 | 003459A4 | player model/animation loader: for every animation id 0x97..0xAF that 00345C54(this, id, *data_00709DF8 + 0x18) accepts, builds the path "LinkAnm2/... | the converted Ghidra source did not compile (`local_1a8[0]._0_1_` partial-field syntax), so the link had a tripwire stub here. | high |
| 00345F20 | 00345EFC | player equipment model (re)loader. Reads the 11 equipment levels from the save data (0055696C(*data_0070FB60, id) for ids 4,3,4,6,0xB,8,7,9,0xA,0xC... | the converted Ghidra source did not compile (`local_1b0[0]._0_1_` partial-field syntax): tripwire stub in the link.  Note: the... | high |
| 00348558 | 00348534 | player "interaction" check (called once per frame from the player action update 00349214): scans the actors in contact (list at *(this+0x54)+0x394,... | the converted Ghidra source did not compile (`-NAN` and a float* passed for the query template): tripwire stub in the link.  Al... | high (flow), medium (role names) |
| 00352F0C | 00352EE8 | per-frame update of a player-attached prop with a bone-chain model (+0xBA0 model, +0xA88 carrier, +0xBA4/+0xBA8 s16 joint-index array): eases a cam... | the converted source did not compile (float bit-casts of the stack Vec3 became pointer casts); Ghidra also passed phantom in_r2... | high (flow), medium (names) |
| 00366694 | 00366670 | message/event handler of the player's Tornado Rod effect object (virtual; strings SE_PL_TornadeRod_BLOWUP[_Lv2]): clears *(+0x2C)+0xC7, latches *(+... | the converted source did not compile (Ghidra's switch over an `int *`). | high |
| 003E8730 | 003E8710 | nw::eft particle emission, one particle (emitter r0, particle r1): random life/scale/velocity from the emitter's LCG (+0x88, x*0x41C64E6D+0x3039),... | the converted source did not compile (`NAN` undeclared: Ghidra printed the integer stores 0xFFFFFFFF / 0x7FFFFFFF as -NAN / NAN... | high |
| 003F4E98 | 003F4E78 | nw::eft (particle effect) stripe/ribbon emitter history update: when the emitter res type is 5 (res+0x328) and the particle has a history buffer (p... | the converted Ghidra source did not compile (float assigned to `undefined4 *local_38`): tripwire stub in the link. | high |
| 004F5BD8 | 004F5BB0 | actor model/animation update (120 call sites: called by the actors' draw-prep / post-calc with (actor, optional angle source, force, -)): syncs the... | the converted source did not compile ("operand of type 'float' cannot be cast to a pointer type"): the link had a tripwire stub... | high (flow/arithmetic), medium (field... |
| 004FD348 | 004FD320 | set a colour on every model of a model-group object: the RGBA bytes at a are stored byte-reversed in a stack word, and for each of the u8 +0xA8 ent... | compile failure in the round-2 conversion (`_local_20`, Ghidra's CONCAT of the four byte stores) = tripwire stub at link time. | high |
| 0068156C | 00681544 | KCL prism test of a swept sphere (one of the per-prism callbacks of the KCL query, pointer table 00694740: [0]=001E98DC [2]=001E9E40 [4]=00681D10 [... | the converted source did not compile ("operand of type 'float' cannot be cast to a pointer type"): the link had a tripwire stub... | high (control flow and arithmetic), m... |
| 00681D10 | 00681CE8 | KCL prism test, the sibling of 0068156C in the per-prism callback table 00694740 ([4]=00681D10, [6]=0068156C) with the same context data_007307DC (... | the converted source did not compile ("operand of type 'float' cannot be cast to a pointer type"): the link had a tripwire stub... | high (control flow and arithmetic), m... |

24 files
