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
| Boot | title, file select (170 s), attract demo run; new game: file 1 -> name entry (native swkbd) -> Begin -> Demo1 -> IndoorLight1_stage runs 001EA96C (stop 103), 0030DFA0 (stop 105), stops 105-108 fixed; the game proper runs (bottom screen: overworld map HUD, dimmed); stops 81-108 in BOOT_LOG | (1) BOOT_LOG 111: opening dialogue text stops at the name tag ("Hey, L"), later pages blank; then drive on (walk: ALBW_PRESS CUP/CDOWN/CLEFT/CRIGHT); (2) the lostframe stores in 002D8484 / 001EA96C (section below); (3) EU/USA map unsure entries (section below); (4) [88b and the name text: fixed, BOOT_LOG 88b resolved] in-game bottom screen dimming fixed by dc58185; [rupee counter: 0000 since stop 109] [static-initializer sweep done: tools/ctor_sweep.py, one overlap (88b)] (5) class sweeps: lost `this` (stop 91 list), stack-argument callees, float returns typed void; test runs use ALBW_SAVE_DIR (private copy) |
| Systemic fixes | float casts, no-return, return types, `tools/systemic_rebuild.sh` | run the combined rebuild at a boot-agent pause point; re-run the boot to confirm no regressions; commit |
| Font / layout | RectDrawer + nw::lyt producers, hand-written GLSL; title pass in progress (boot agent): pane geometry fixed (stop 86) | glyph rendering of "Press (A)" (solid blocks), then masks/colours vs the emulator frames |
| Models (3d agent, branch title-3d) | h3d title models draw on the top screen: golden Triforce assembled over black, then a blue sky dome (BOOT_LOG 76-88 [3d]); fixes: CALL return segments (render.c), index buffers from the relocation table, VRAM command sections from staging, deferred LUTs, 003FD364 colour animation, 001B7C24 VRAM allocator | (1) overworld meshes (variants 40/73) rasterise (ALBW_H3D_WHITE=40 + ALBW_H3D_LOGICCOPY=1 shows trees, house, rocks) but leave no pixels in normal rendering; untangle with ALBW_H3D_SNAPFROM / SKIPVAR / NODEPTH (title timing varies run to run, check per-draw snapshots, not single frames); (2) the logo (TitleLogo.bch) and the scene's transition from the Triforce to the overworld; (3) boot agent: the top-screen clear is the BlackFilter/sky h3d draw, so stop 80's missing top clear follows once h3d draws produce pixels (done here) |
| Primitive renderer / effects (queued) | — | sead PrimitiveRenderer (004979CC) and eft particle producers + hand-written GLSL |
| Audio (queued) | — | nn::snd / DSP -> SDL3 audio (BCSTM streams, BCSAR banks) |
| 64-bit (x64-parity, 2026-11-15) | low-4GB x86-64 build at 32-bit parity: title-screen logic (TaskFileSelect 0029B698 every frame, both scheduler modes); after merging master (stops 75-81) both builds stop identically at stop 81 (~frame 180), first-boot save fatal fixed for both (native/BOOT_LOG64.md stops 1-11) | (1) merge master (f5eb987+: stops 81-101, STACK_ARG_CALLS / FLOAT_RET_CALLS rewrites) and re-check that the converter rewrites match ptr32's 64-bit spellings (`* ALBW_GP *`), as pmf_this_rewrite did not; (2) graphics parity: ALBW_SHOT of the bottom wooden panel on both builds once stop 81 is past (local sound-0x28 skip needed, stop 78b); frame 180 already matches; (3) fold the in-place 64-bit rules into the next full rebuild (`ALBW_V4_STAGE=1 tools/build_decomp64_v4.sh` after clearing build/decomp64/ghidra_fallback/*_v4, or run tools/ptr32_interim64.py after it); (4) converter round: type the 4,083 void Ghidra functions whose ARM r0 is written (retclass3, stop 7 class; list via BOOT_LOG64); (5) 64-bit-only classes to keep in ptr32: unsigned negation as pointer offset, game-data arrays aligned(1), 64-bit literal offsets, pointer casts of 64-bit integers - scan new native code for them; (6) shared type headers / retype pointer-in-int functions (milestone 2, native/64BIT.md) |
| Robustness (queued) | 104 hand-checked rewrites + 600 template-generated (verified against reference disassembly; compile at -m32), 680 ranked functions done; LINKED (link.sh globs native/robust/*.c) | A/B smoke-run with and without the 600 generated files if the boot regresses; next batch from PRIORITY.md |
| Gameplay link (queued) | 97 exact rewrites in native/gameplay, tests pass -m32/-m64, LINKED (link.sh globs native/gameplay, except 0051E5F8) | (1) fold native/gameplay/tools/livein_dregs.py (`vpush {d0}` float args, 17 functions) into livein2.py and run the next systemic rebuild; (2) resolve the link blockers in native/gameplay/AUDIT.md section 6 (002AF168 caller, 004AAD4C/004AAF44/004ED9F4 callers, 10 duplicate addresses with ours winning at 002AD8A0); (3) check the 10 duplicate addresses resolve to ours |
| Core/framework/hot rewrites (queued) | native/core 98, native/framework 19, native/hot 29 (growing); all exact vs ARM, tests -m32/-m64, NOT linked (link.sh does not glob them) | after converter round 3 rebuild: add native/core, native/framework, native/hot to link.sh/link64.sh (-I each dir), resolve 24 core-vs-matched duplicates, A/B smoke-run |
| Converter round 3 (in progress) | gated ALBW_CONVERT_V4; tools/systemic_rebuild3.sh + native/ROUND3.md | run at a boot pause: callee return classes (0010F1F8 etc.), unwritten stack objects (379 fns), vpush float args, 64-bit returns, variadic args, paired float loads, returns_this float list |
| Next rebuild (queued) | from boot stops 52-61 | round 3 stage 2 plus: `-ftrivial-auto-var-init=zero` for decomp sources (perm_local UB, stop 59); divmod pair SIG_OVERRIDES reach ~94 callers (stop 60); float words through untyped `(code *)` calls cast, not promoted to double (stop 56); lost args in virtual calls (half of recent stops); matched void sources that return a callee result (stop 57); re-run native/refs/tools/task_factories.py after; VFP register-pair returns (Vec2 in s0:s1) typed `float`, callers use stale locals / in_s1 for y (stop 86: 00568B68 GetVtxPos, also 00569264); stack-argument callees with short Ghidra prototypes (STACK_ARG_CALLS, stop 82) |
| FCONV audit (2026-11-14) | round 3 stage 1 + fconv_interim (whole game) | float<->int value conversions where Ghidra meant bit copies: 328 sources fixed by fconv_interim; 15 sites in 12 sources left that FCONV does not match (double->undefined4 / float->undefined8 / undefined4->float with conversions in between): 001732B4 00196914 001D7348 0024B360 0028FE68 002C64D8 003183C0 0032DB20 003A4650 004784B8 00590EC8, plus matched src 0024AB60 (int->float). Extend FCONV to these forms in stage 2. Indirect `(code *)` calls with float args: under 10 sites (stop-56 class is rare). 476 double->float narrowings and ~1,080 float->double promotions are Ghidra double temporaries/literals: precision only, low priority. |

## EU/USA map: unsure entries (boot stop 105)

../albw-decomp-ai/shared/eu_usa_map.json (`{USA: {eu, sure}}`; the port reads it as ../albw-decomp-ai/shared/eu_usa_map.json) has 362 `sure: false` entries. Stop 105 in detail: through USA 00361604..0036167C the code is EU = USA - 0x24 (checked by body: USA 003615D8/361604/361610/36161C/361634/361640/36164C (templater) and 0036167C (matched) against the EU disassembly 003615B4..00361658), but the map pairs USA 00361634->EU 003615E0, 00361640->003615EC, 0036164C->003615F8, 00361658->003615EC, 0036166C->00361610, 0036167C->0036161C (correct: 00361610, 0036161C, 00361628, 00361634, 00361648, 00361658). Ghidra-derived callers named EU 0036161C (getter `m10->m610`) func_0036167C, whose matched body returns 1, so 0030DFA0 used 1 as a list node and crashed; EU 00361610 (setter m6C5) became func_0036166C. Port-side fix: tools/build_decomp.py GHIDRA_NAME_FIXES (Ghidra text only), 10 callers rebuilt. A map fix in the decomp repo must re-name the Ghidra project's functions too and then drop GHIDRA_NAME_FIXES. 98 agree with the delta of the sure entries on both sides, 88 disagree, 176 sit between sure entries of different deltas. The Ghidra project names every function func_<USA> by this map, so a wrong entry silently retargets every Ghidra-derived call of that EU function (stop 105: 0036167C/0036166C, fixed by tools/build_decomp.py GHIDRA_NAME_FIXES). To do: check the 264 doubtful entries against the code (USA matched/templater bodies vs the EU disassembly, as for 00361604..0036167C) and fix the map in the decomp repo, then the project names; until then extend GHIDRA_NAME_FIXES per stop.

## EU/USA map fix: integration (at a boot pause point)

Done: the map audit (albw-decomp-ai 7b09bf84, tools/eu_map_audit.py) moved 240 entries (219 unsure + 21 "sure") and verified all 362 unsure ones; every audited entry has `method`/`score`/`margin`/`was`. The decomp map file is already corrected, so the next build_decomp/gen_data/link run reads the new map. Prepared, not integrated:
- `tools/ghidra_name_fixes.json` (80 wrong Ghidra-project name -> right name; includes the two GHIDRA_NAME_FIXES entries) and `tools/ghidra_name_fixes_sources.json` (per fix the EU address; the 270 Ghidra-derived callers; the 124 wrong-body sources; matched/native users; the 128 extra-function aliases).
- `build/ghidra_mapfix/func_<USA>.c` (124 files, ghidra_analyzed5 layout): fresh dumps of the corrected EU addresses (ghidra_dump.py V2/V3 on a private copy of logs/ghidra_full, `-readOnly`, preScript tools/ghidra/albw_mapfix_prepare.py removes the old map's 144 non-start functions/labels in memory), name fixes already applied (second line `// MAPFIX`). Converted with the stage-2 chain + build_one in a scratch dir: 120/124 compile (build/ghidra_mapfix.compile.json); the 4 failures (001B3970, 00255E6C, 00256034, 0029822C) are the known `LAB_<eu>` class (code labels inside the function, as 00254EFC/00490EB0 today); the old dumps hid them behind wrong func_ names that linked to other functions. Reproduce: `tools/ghidra_mapfix.py --inputs DIR`, analyzeHeadless on a project copy with `-readOnly -preScript albw_mapfix_prepare.py DIR/bogus_eu.json -postScript ghidra_dump.py RAW DIR/shard.json DIR/idx_none.json shared/eu_usa_map.json`, then `tools/ghidra_mapfix.py RAW [--compile SCRATCH]`.

To integrate (tools/build_decomp.py, reconvert_one.py):
1. Swap in: for the 124 addresses, use build/ghidra_mapfix/func_<USA>.c instead of build/ghidra_analyzed5/func_<USA>.c (copy over a copy of the dump dir, or check ghidra_mapfix first in ghidra_source()). Also signatures(): those 124 prototypes come from ghidra_mapfix.
2. Ordering: apply ghidra_name_fixes.json to the RAW Ghidra text in one simultaneous regex pass, BEFORE eu_fun_to_usa() (and before convert()); skip files with the `// MAPFIX` line. Not after: with the new map, eu_fun_to_usa turns FUN_<EU> into 32 of the key names, which are then correct (0 such FUN_ in analyzed5 today, but the order must hold). Replace GHIDRA_NAME_FIXES in rewrite() with this; keeping it in rewrite() renames correct func_0036167C/func_0036166C again.
3. mirror(): do not apply the name fixes to matched sources (src/work*). They use real USA names; 34 of them use key names correctly (list in ghidra_name_fixes_sources.json). Today rewrite() (with GHIDRA_NAME_FIXES) runs in mirror() over every src file; it has not hit matched_1020/0036167C.c and gpt18/func_0036166C.cpp yet only because of the mtime cache. Restrict to src/nonmatching.
4. Cache: converted sources in build/decomp/ghidra_fallback/<sub>/ are regenerated only when the raw dump is newer, and objects only when the source is newer: delete (or touch the raw of) the 270 callers listed under ghidra_sources_with_wrong_callees plus the 124 wrong-body sources, then rebuild; data pointers (gen_data fn_of) and link.sh --map change with the map by themselves.
5. eu_fun_to_usa: build_decomp's eu2usa.update(extra) lets extra_functions.json override map entries; 128 extras sit at corrected map starts under guessed names (consistent today, see extra_function_aliases). Either keep them (no change in behaviour) or make the map win and drop those extras.
6. Native sources with copied wrong names (20 references, mostly native/compilefix + native/route `func_00556E94`): listed under native_sources (WRONG = calls the EU function the Ghidra name pointed at); fix by hand.

## Critical missing pieces (2026-11-16 audit; in recommended order)

1. **Wrong function bodies from the pre-audit EU<->USA map** (tools/stale_map_scan.py): 119 linked
   Ghidra texts are another function's body (e.g. 00521100 runs EU 00521084, not 005210D8), and
   ~270 Ghidra callers use the old names. Corrected dumps are ready (build/ghidra_mapfix, 124 files,
   120 compile); integrate per "EU/USA map fix: integration" above. Any of these can misbehave
   anywhere in the game, so do this before chasing individual gameplay bugs.
2. **Particle effects (nw::eft) do not exist at runtime**: the resources load (002E32DC JackAll at
   boot, 002E3494 Demo at frame 183) and the per-frame manager runs (002E3DF4 -> 003F6FBC), but no
   emitter is ever created or calculated (gdb: 0 calls to the emitter vtables 0x6EFDEC / 0x6EFE14 /
   0x6EFE3C, their draws 003F43DC / 003F4D34 / 003F5498 / 003F5734 or the draw setup 003F0080 /
   003F2E98 / 003F31AC through frame 2900). And even created emitters could not draw: the renderer
   runs only recorded ops and skips raw PICA commands, and the eft producers (shader upload hash ->
   RPROG_EFT, uniforms, draws) were never written (render/effects.c holds the GLSL only; the
   stripe family, programs 14 / 17 / 19, is not written). Missing everywhere: the title fairy
   trail, the dream nebula, sparkles, splashes, hits, item effects.
3. **Unimplemented functions that stop the game when reached** (build/stubs.c tripwires):
   func_001A3F04, 00200080, 00205E20, 002A0078, 002A018C, 0050B78C, plus the Ghidra intrinsics
   __sqrtf / coprocessor_function / coprocessor_load in converted text and bogus targets
   (1FF80000, FE6533C4, FE6D27C8, FEADFFF6, FEAE0002) that mark mis-converted calls.
4. **Known converter defect classes not fully swept**: lost float arguments
   (tools/lost_float_scan.py; 89 matched functions unverified), lost Vec3 / stack0x stores
   (tools/stack0x_scan.py: 179 candidates unreviewed), bool-in-%al (boolret covers 689).
5. **Other raw-command features dropped by the renderer**: fog (0x0E0 / 0x0E1), raw uniform
   writers (00387E58, 00171510), shadow-marking draws on the flyover.
6. **Gameplay beyond the first yard untested**: saving at the vane, Hyrule field, combat, items,
   the item / map menus on the bottom screen, wall-merging (FlatLink models), dungeons, Lorule.
7. Smaller visual items: fence flicker, SoliderPaint variant, grass 1-2 % dark, water look.

## Coordination with the 3D agent (top screen)

Top-screen 2D now draws (BOOT_LOG 109): Mn_TitleLogoT is a LAYOUT (ZELDA logo, its 2D Triforce P_TriForce_00 and the light panes, animations InTriForce / InTitle), Mn_TitleT holds "(c) 2013 Nintendo"; TitleLogo.bch / TitleCamera.bch / title_triforce.bch are the 3D part (the big Triforce, camera, field). Left for the 3D agent: the large 3D Triforce still in front of the field at the title, the blue background instead of the overworld, and the black top behind the opening dialogue. Note for h3d: 001321B8 is the other caller of 005FF104, so its sub-buffer now runs too (it was dropped before).


### Title overworld: handover notes (3D agent, 2026-11-15, BOOT_LOG 90-91 [3d])

State after master afe8cc8 merged into title-3d: top-screen frames 300/600 show the 3D Triforce assembling on black; from state 2 (title counter 0x19F) the 2D logo + "(c) 2013 Nintendo" draw over a BLUE background (clear colour / sky) with the big 3D Triforce's lower pieces still visible; the reference (scratchpad azahar/ref/emu_t8s.png) shows the overworld (castle town area) and no 3D Triforce.

Findings:
1. Curve handlers: all 17 entries of data_00714BB0 are native float handlers now (BOOT_LOG 89g / 90 [3d], native/game/curve_handler.h). General: animation curves game-wide.
2. Stage rooms (FieldLight18 room models) are submitted by 001312BC submit_models -> 004CEF4C (per-model "shown" mask +0x168) -> drawn via the sorted list +0x2888 -> 00130160 -> 00330B40 -> 00170558. 004CEF4C hides a model unless its alpha +0x154 > 0. For room-owned models (flags 0x20000000) the alpha is set each frame by 004ECF14 -> 00582014 (room fade: model +0x158 x room +0x3F8) -> vtable +0x18 = 002C3EB4(model, flag, s0 = alpha). The Ghidra 00582014 dropped the float argument, so +0x154 got stack garbage: 8e-17 (drawn) in some runs / frames, 0 (hidden) in others. That is the run-to-run variance (24 vs 9 VBOs) and the 15 -> 4 model drop. Native fix written: native/game/func_00582014.c (BOOT_LOG 91 [3d]); verify it (ALBW_H3D_MODELS=1: rooms should stay drawn in state 2 in every run).
3. Field actors (e.g. scene model 4) are hidden at state 2 by 004BFD14 -> 004CF478(model, 0) because 0014F794 (squared XY distance from *(data_00708998+0x18)+0x118 to the actor > its range +0x3AC, or room inactive 00581C9C) says not visible; this looks like genuine game behaviour (the reference point moves with the title camera), check after (2).
4. Title flow: 0029B698 at title +0x194 (frame 0x19F) clears camera +0x94 and render env +0x2C1B (camera cut). The title camera in state 2 pans (ALBW_H3D_CAMTRACE: eye roughly (2, 26, 34) moving); compare its path with the reference once rooms draw.

Status 2026-11-15 (later): (a) done, BOOT_LOG 91b [3d]: the overworld draws in state 2 in every run; (b) done, BOOT_LOG 92 [3d]: the 3D Triforce flashes out (native 005670D8: lost float argument to the segment-cache handlers); the title top screen now matches the expected sequence (logo slides in, Triforce flash, final logo over the panning overworld); (c) resolved by (a). Left: (d) below, and compare timing / camera path with an emulator capture.
Status 2026-11-15 (texture samplers, BOOT_LOG 99 [3d]): the h3d decoder now takes each material's sampler (wrap / filter) from its texture mapper instead of the blob's default 0x2220 words - trees match Azahar (root bulbs mirrored, not wrapped onto leaves), grass / terrain smooth instead of point-sampled. Ruled-out causes for this and other flyover issues: native/DIDNT_WORK.md. Open: canopy slightly darker than Azahar, shadow-marking draws missing, water look, fairy streak, decal flicker, fog (raw 0x0E0/0x0E1 dropped), Link's house interior dark. Viewer: ALBW_VIEWER_TEXFILE=World/Course/fld_o_Common.bch ./run.sh --viewer 'Archive/FieldLight10.szs#c640797a' shows the tree.
Old next steps: (a) relink with func_00582014.c and confirm the overworld draws in state 2 (shots: ALBW_SHOT=600,1200,2000 ALBW_SHOT_DIR=...); (b) the 3D Triforce after the logo appears (TitleLogo.bch model 0 still drawn: find its hide / fade, probably the same alpha path 002C3EB4 or a visibility animation); (c) blue background = the sky / clear when no rooms draw, re-check after (a); (d) sweep other vtable calls that pass a float in s0 through Ghidra tail calls ("Could not recover jumptable" + indirect call with a float live in s0): same class as 00582014.
Debug aids (native/sdk/h3d.c): ALBW_H3D_MODELS=1 (+ _BT=1 call chain of each model's first draw), ALBW_H3D_SCENE=1 (scene model list: flags +0x164, vis index, shown mask +0x168, element count), ALBW_H3D_SCENE_TRAP=1 (SIGTRAP once the scene has models, for gdb watchpoints; scripts build/shots3d/room*.gdb), ALBW_H3D_CAMTRACE=1. Private save: build/shots3d/race.sh. Note: tools/link.sh's DAT grep over build/decomp/ghidra_fallback is very slow under I/O load (40+ min seen).

## Overnight plan (2026-11-16): scripted scenes, then effects (autonomous, no user input)

Rules: ALBW_JOBS=2; one game / emulator / gdb at a time; no git commits; every fix -> native/BOOT_LOG.md
entry, every disproven cause -> native/DIDNT_WORK.md row, MISSING.md ticked with the BOOT_LOG ref;
never `pkill -f` / `pgrep -f` with a pattern that also matches the calling shell (use `pgrep -x albw`,
`pkill -x albw`); Azahar config restored after any gdbstub use (use_gdbstub=false); one progress line
per iteration under "Progress" below. Test states: save states are per build - after each relink,
make a fresh one with the scripted route (new game -> yard, scratchpad route_press.txt, ALBW_SPEED=0,
ALBW_SS_AT=<frame>:save:<slot>, private ALBW_STATE_DIR / ALBW_SAVE_DIR). Debug statics in saved
native modules are restored with a state: switch traces on from gdb after `render_ss_loaded`.

1. **Link's flow dash (yard, "C'mon, let's get to his shop")** - BOOT_LOG 127. The flowchart sends
   Link_Dash (State_AnmFromFlow 0x96, anim 10) but Link's position never changes (x 12 -> warped to
   6.45 at frame ~889); Gulley's movement and the camera (which follows Link) are fine.
   a. Find the condition in 001EA96C (called per frame by 00342C24 with &params) that skips the
      position integration (EU 1EAB14..1EAB38) during the dash: walk its branch structure on the ARM,
      compare the port's inputs (00342C24's params block: +0x3B40.. state, **(+0x44) speed, mode bytes
      +0x3BAE, the action id read at +0x614 +0x42) with what the ARM path needs; gdb on the port at
      the branch points.
   b. Check how the dash speed / root motion is meant to reach the params (00342C24 first branch,
      002927A0 action update, the anim-10 flag +0xCC set by 001DBF54).
   c. Fix, verify with frames (Link slides into Gulley; camera follows).
2. **Systemic lostframe sweep (Vec3 first / second store)**: extend tools/lost_vec3_scan.py to the
   lost x (first) and y (second) word, as found in 001EA96C (`&stack0x..` passed, only [1]/[2]
   copied); confirm each against the EU code; fix with compilefix copies; record counts.
3. **Gulley at "Wake up!" (house)**: he must turn to face the screen and does not. Route run to the
   house dialogue; ALBW_STATE_TRACE + the NPC's rotation (actor angle fields) over the frames; find
   the turn command (flow action / NPC state) and the defect; compare with the Azahar recording
   (scratchpad azrec) where available.
4. **Weather vane bubbles** (pan to the vane, "With the weather vane here!"): ALBW_EFT_TRACE=1 in
   that scene: is the emitter set created, are its draws dropped (g_live_dropped / unknown program
   hash)? Register the programs of every PTCL (not only JackAll: native/sdk/eft.c register_programs
   runs once), classify unknown programs against effects.c's variants, add GLSL for any truly new one.
5. **House candle flame** (appears briefly when Link gets off the bed, then vanishes): same eft path;
   check the emitter's lifetime / kill and the draw path.
6. **Dream**: Link holding a sword and shield; the mist without lines / borders; smoke colour and the
   missing nebula (MISSING.md) - eft programs / model visibility.
7. **Automated defect search**: compile every linked Ghidra text once with -Wfloat-conversion
   -Wimplicit-int-float-conversion -Wshorten-64-to-32 and triage float<->int conversions; then the
   remaining fall-through functions (tools/fallthrough_scan.py list).
8. **Billboards** (subagent report: per-PTCL program registration, bone billboard order) - after 4.

### Status at handover (2026-11-17 morning, before the reboot)
Build: build/albw is linked with everything below (boots, unit tests pass, regression route run OK: title, dream,
WAKE UP turn, house, dash, vane). Nothing committed since a6fb290. Old save states do not load in this build (build
hash); regenerate with tools/overnight/route_press.txt (README there). The machine needs a REBOOT: NVIDIA libraries
620.70 are installed but the 615.78 kernel module is loaded ("X_GLXCreateContext BadValue" from ./run.sh, nvidia-smi:
Driver/library version mismatch) - not a port bug.

| item | state |
|---|---|
| 1 Link's flow dash + camera pan | DONE, BOOT_LOG 128 (u8 return read as int: boolret.py extends declared small returns) |
| 2 lostframe Vec3 sweep | not started tonight (22 candidates in build/lost_word_verified.txt, 2 reviewed = FP) |
| 3 Gulley faces the screen at WAKE UP | DONE, BOOT_LOG 129 (look-at virtual lost its third argument) |
| 4 vane bubbles | DONE, BOOT_LOG 130 (eft draw range [a, return)); vane body grain still open |
| 5 house candle flame | OPEN: sconce set draws a faint glow only; Azahar shows a red-orange flame. Ruled out: depth / alpha / cull / stencil (ALBW_EFT_FRAG), texture decode (LA8 / L8 OK), room model textures (no flame texture). Next: compare particle alpha / scale with Azahar |
| 6 dream | OPEN: nebula background missing (Triforce + Link close-up), monster shot shows pinkish streaks, shield not visible on Link (model draws with 0 pixels: 0x1f12ac00 x8). The dream's eft sets (resource 1: ids 2, 0, 0x5e, 0x5d x3, 0x5a, 1, 3, 4 x7, created frames 2710-3212) are alive at frame 3800 but almost all have 0 emitters (only id 2 has 2, id 1 has 1): emitters end early -> next: emitter lifetime / loop flags in the eft calc (compare one set with Azahar) |
| 7 defect search | indirect-call dropped-argument class: tools/indirect_args_scan.py, ~45 ARM-checked compilefix copies, status in build/indirect_args_triage.txt (TODO: 00495CA8/00495DA4 thunks, 003B8744 site 3B8960) |
| 8 billboards | not started |

New tools tonight: Azahar az_trace (AZ_SCAN multi-frame, AZ_DUMP), ALBW_EFT_SETLOG (eft.c, read per call),
ALBW_EFT_FRAG=d/a/b/c/s (render.c: particle draws without depth / alpha / blend / cull / stencil), state slot 4 (house
frame 9000). Gotcha: statics of saved modules (game, sdk/eft.c, sdk/h3d.c) are restored by a state load, so env
switches cached there read as "off" after a load (native/SAVESTATES.md).

Progress (one line per iteration):
- 22:00 tooling: test games now run offscreen on the GPU (SDL_VIDEO_DRIVER=offscreen: invisible, ~10x faster); Azahar source build (Qt, ${AZAHAR_DIR:-$HOME/azahar}/build-dbg) started for scripted input / trace logging; tools/lost_word_scan.py + tools/verify_lost_word.py (lost first / second Vec3 word, checked against the EU code by call occurrence): 22 sites flagged REAL, first reviewed (002E15CC) is a false positive (output argument) - review list in build/lost_word_verified.txt; route run for fresh yard states (frames 9700 / 9900) running.
- 22:40 item 1: the 001EA96C block I fixed (EU 1EAAC0..1EAB38) is gated by params+0x95 / state+0x3BAE / 002C1634 (riding a moving object), not the walk / dash path: the dash mover is elsewhere - to be found with a write watch on Link's position in the original (Azahar build). Fresh yard states (frames 9700 house / 9900 yard) in scratchpad night/states. Item 4: effect keys / emitter sets are created during the dash (sets 740, 739, 24), effect draws run (0 dropped), but at the vane pan (frame 1500 dump) NO particle program is drawn and the bird's face is awake / its body texture blocky (Azahar: eyes closed, bubbles): the vane actor (MojTelephone, factory 005B559C, creator 00603E68 -> ctor 001C57A0) is not in its sleeping look - one cause for both (state / material animation / effect key in 001C5xxx).
- 00:20 item 1 DONE (BOOT_LOG 128): Azahar trace build (az_trace: write watch / scripted input / state load / memory scans, headless on Xvfb :99) showed the original moves Link through 001E5FC4 in action 0x97 FlowRailMove; the rail node is reached in both games, but the u8 parameter reader 0054B260 left word>>16 in %eax: tools/boolret.py extends declared small returns (178 adapters; plain char / source-declared bool excluded - they crashed the boot); route run: Link dashes into Gulley, camera follows (frames 10360-10690). Dream sword + shield = original. Next: item 3 (Azahar shows a "WAKE UP!" close-up facing the camera).
- 01:45 item 3 DONE (BOOT_LOG 129): Gulley found in Azahar memory (AZ_SCAN now takes several frames), angle watch -> 0030D6D0 calls look-at virtual 006143E4 with r2 = 1 in the ARM, Ghidra dropped it; compilefix passes it; route run: Gulley turns to the camera at "WAKE UP!", dash still OK. New class scanner tools/indirect_args_scan.py: 109 candidates in build/indirect_args.txt (to triage, item 7). New night states (night3/states: 1 = house 5300, 2 = yard 9700, 3 = yard 9900). Next: item 4 (vane).
- 03:55 item 7 (indirect-call class) + item 4: tools/indirect_args_scan.py reworked (pairs ARM / Ghidra sites per vtable offset; `mov r1, r2` copies count as arguments; VFP / ldm base reads are not writes): ~35 ARM-checked compilefix copies (+0x138 state change (1)->(1,1) x16, look-at (0)->(0,0) 0030D510, flow 0030CA68, text pane +0x60 length x4, ...), list + status in build/indirect_args_triage.txt; boot + unit tests pass. Item 4: the vane's bubble set (0x212) is created at yard entry, sits at the head, is calculated every frame; its draws were translated from the wrong range: eft.c's 003F8250 wrapper bracketed the eft cursor, but the set writes from its `a` argument (current half of the double buffer) up to the returned pointer -> fixed to [a, r) (all particle effects). Verification route run (night6) in progress. Vane body grain / blocky texture still open (not filtering: ALBW_TEX_FORCE_LINEAR changes nothing).
- 05:55 item 4 DONE (BOOT_LOG 130): vane bubbles visible after the eft range fix (night6 route run, frames 11600-12000 vs Azahar). Item 5 (candle): the sconce's eft set (2 emitters, at (5.7, 3, -6), scale 0.6) is calculated and drawn every frame (2 draws, 0 dropped, colours c82 = 1, alpha 0.25 / 0.58, blend src-alpha / additive); ALBW_EFT_FRAG=b (new render.c switch: d/a/b/c/s turn depth / alpha / blend / cull / stencil off for particle draws) shows the glow quad at the sconce, so position / texture are right; with blending the port shows a faint glow only, Azahar a distinct red-orange flame above the sconce: the flame itself is another element (third emitter / other set / a model with a visibility or texture animation - "appears briefly then vanishes" fits an animation). Next: MODELMAP + eft set list at house load (route run from boot with ALBW_H3D_MODELMAP and ALBW_EFT_SETLOG; statics caveat in SAVESTATES.md), Azahar watch on the sconce actor. New state slot 4 = house frame 9000 (Link about to walk right, sconce in view with ALBW_PRESS=300:CRIGHT:90).
- 06:35 item 7 batch 2: 0046308C/004610A0 text length (in_r3), 0048FAF8 sixth parameter + caller 001E14F8, 0037A9E8 (+0x64/+0x68 mov r2, r3 elisions), 00466004 (+0x18 alignment); boot + unit tests pass; regression route run (night8): title, dream, WAKE UP turn, house, dash, vane OK; fresh states night8/states (1 house 5300, 4 house 9000, 2 9700, 3 yard 9900). Next: item 6 (dream: nebula / mist / smoke).
- 07:20 item 6 started: Azahar vs port dream captured (Azahar: red nebula behind the Triforce and Link, monster shot with dark red clouds + red eyes; port: black, pinkish streaks); 0 eft draws dropped; dream sets alive but emitter counts 0 at frame 3800. Handover written above (reboot needed for the NVIDIA driver).

## Overnight plan (2026-11-15): title 1:1 -> opening cutscene -> gameplay

Working rules: one game / emulator / gdb run at a time, ALBW_JOBS=2, no parallel agents (RAM);
every fix gets a BOOT_LOG entry, every disproven cause a native/DIDNT_WORK.md row; no commits
unless asked. Ground truth = Azahar (`./run_reference.sh`): burst captures (`import -window <id>
-crop 400x240+440+30` in a loop, ~14 fps) matched to our ALBW_SHOT frames by image distance, and
its GDB stub (qt-config use_gdbstub=true, port 24689, EU addresses) for memory / matrices.
Restore the emulator config afterwards (scratchpad qt-config.gdb.bak).

Done tonight: texture-mapper samplers (99), texture-scroll + no-tangent frame from the real
DVLE via tools/pica_disasm.py (100), per-material light environment (101), soldier z
(004BC850 lost stack store, 102).

1. **Systemic: lost Vec3 stack stores** (class of 102). Scan the EU code for
   `ldm rX, {a,b,c}` + `stm sp, {a,b,c}` (and vldm/vstm of 3 words to sp) whose converted
   stage-2 text stores fewer words into that frame slot; fix each in native/compilefix from the
   stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4) + the missing store. Actor
   positions, velocities and camera targets all go through this pattern: high gameplay value.
2. **Title flyover remainder** (automated matched-frame report: per-region colour / position
   diffs vs the emulator burst): fence-edge seams (if still visible), fairy streak, shadows
   (the stencil-marking draws are missing), fog (raw 0x0E0/0x0E1 dropped), decal flicker,
   grass ~1-2 % dark, "SoliderPaint" colour, Triforce flash.
3. **Opening cutscene after the title** (Demo1: new game -> name entry -> Begin): capture it in
   both, match, fix differences in order of size (missing models, positions, lighting, camera,
   timing). Input recipe via ALBW_PRESS (record it in BOOT_LOG).
4. **Link's house / gameplay** (IndoorLight1, then outdoors): interior darkness (fragment
   lighting / light set), walking, NPCs, doors, sword, items, 2D wall merge, menus, saving;
   boot loop (tools/boot_loop.py) for every stop; sanitizer run (ALBW_SANITIZE=1) per stage.
5. **Escape menu / GUI options** (user request): Esc opens a menu bar overlay (window layout,
   filtering, controls, save/load, quit) instead of quitting.
6. Software-renderer speed and the right-eye second pass (stereo off unless 3D is wanted).

Progress:
- iter 1: step 1 done - lost-Vec3 sweep: 00249620 fixed (BOOT_LOG 103), no other real losses among 20 flagged sites; title clean.
- iter 2: step 2 - shadows fixed (00518694 lost vtable-call args; natives 002C3870 / 00387E58; BOOT_LOG 104); matched-frame diffs now mostly edges; open: SoliderPaint variant texture (blue in Azahar).
- iter 3: step 3 started - cutscene recipe found (ALBW_PRESS / Azahar xdotool); idr_Common.bch now loads (004AC000 lost break, BOOT_LOG 105); open: black fade overlay + camera at the dialogue, name cut to 'L', dream backdrop missing.
- iter 4: dialogue: name expansion verified correct; the typewriter reveal stalls after a wait tag (Hey, L / empty boxes) - next: the reveal update; cutscene does advance with A (room visible, lit). Tools: ALBW_TRAP_FRAME=<n>.
- iter 5: dialogue stall = 16-char TextBox buffer (capacity from layout; emulator gets 256 via the text provider, ours builds the window without one); fixed systemic 8-byte literal-pool constants (gen_data, BOOT_LOG 106). Next: the missing text provider in the message-window build.
- iter 6: "Hey, Link!" fixed (tiny DAT_0000xxxx constants now absolute symbols, BOOT_LOG 107); next: the following dialogue boxes are still empty.
- iter 6b: later dialogue boxes empty: message window state 2 waits for its animation controller (+0xDC) to go idle; it holds at state 3 and no out-animation is requested - next: compare with Azahar.
- iter 7: opening dialogue plays through (boolret combined-bool adapters, BOOT_LOG 108); next: top screen black for parts of the cutscene (fade / camera), dream backdrop.
- iter 8: house dialogue black: a sky-dome draw (prog 3/105, m_vr, depth always+write) blacks the lower screen and occludes the room; camera and culling ruled out. Next: which vr model / its visibility after the dream. Tools: ALBW_H3D_DUMP_FROM, ALBW_NO_CULL_LISTS.
- iter 9: corrected: the sky box is not the occluder; the room's floor/bed meshes are not drawn at the close camera (mesh/room visibility). Tools: ALBW_MODEL_TRAP=<name> (g_model_watch), frame in ALBW_H3D_MODELS_BT. Emulator gdbstub detach/reattach automation not working yet.
- iter 10: dream draws all fail depth (clear 0, LESS, no backdrop drawn first); the dream backdrop (nebula) is missing - next: find it.
- iter 11: dream visible (depth clear 1.0 lost through 0049F3C4, BOOT_LOG 109); remaining: red nebula particles, room dark around the bed at "Hey, Link!".
- iter 12: Link model scale fixed (0028C068 s16-s18, BOOT_LOG 110); house camera looks at (0,0,0) instead of the bed - next: camera target.
- iter 13: house bed scene matches Azahar (0030C144 lost shot position, BOOT_LOG 111); open: yellow '>' bar drawn on the top screen during dialogue, Link's sleeping face, dream nebula; tools/stack0x_scan.py lists 179 similar candidates.
- iter 14: MILESTONE gameplay: the whole wake-up dialogue plays, control is handed over (~frame 8800, hearts HUD), Link walks (circle pad) and leaves the house: loading screen -> outdoors, Gulley's next line (recipe: ALBW_PRESS=1800:START,2200:A,2500:DOWN,2650:A, A every 300 frames 5500..8500, then 9000:CRIGHT:90,9150:CDOWN:120,9330:CLEFT:90,9480:CDOWN:150,9640:CRIGHT:25,9680:CDOWN:300). Open: yellow '>' pill of the message window (DIDNT_WORK).
- iter 15: dialogue pill fixed (004371D8 byte return, BOOT_LOG 112): house dialogue == Azahar. Lead: tools/boolret.py misses FUN_-labelled bodies and shared-epilogue byte returns - extend it (scan FUN_ labels with func_ aliases, allow jumps that land on epilogues after setcc/movb paths).
- iter 16: tools/boolret.py covers jump-in byte returns and FUN_ labels (+108 adapters, BOOT_LOG 113), full regression sequence unchanged. Pre-existing (files from 2026-11-14, unrelated to the link): native/hot/test misc2 -m64 segfaults.
- iter 17: outdoors playable: Gulley's vane scene (camera pan), free walking with hearts HUD, leaving the yard is blocked by Gulley's 'spin the vane' line (game logic OK); no crash up to frame ~17000. Saving at the vane not reached: identical ALBW_PRESS scripts end with Link at different spots after ~frame 14000 (run-to-run timing variance), so blind scripts cannot line him up; test the vane interactively or add a position-aware input driver. Next: (5) Esc menu.
- iter 18: step 5 done: Esc menu (pause overlay with window / layout / filter / fullscreen / editor / reload controls / quit; BOOT_LOG 114). link.sh now rebuilds platform.c when an #included file changes (link64.sh: not yet).
- iter 19: Link's open eyes in bed: eye texture swaps work (blink seen), but nothing requests the closed frame in the bed scene (DIDNT_WORK); asset_test ALBW_BCH_COUNTS=<file> lists BCH section counts (native/assets/build.sh needs an absolute OUT).
- iter 20: eye-frame writer not caught by a write watch (DIDNT_WORK); heap addresses shift with relinks - re-read them with the debug switches before each gdb session. End of the overnight run.
- 2026-11-16: Link's eyes closed in bed (BOOT_LOG 115, lost s0 frame in the material-animation apply 00567588 / 001699A0; matches Azahar c32); Esc menu Resolution 1x-8x live (BOOT_LOG 116). Note: X11 window creation hangs in SDL_ShowWindow on this desktop today; test runs use SDL_VIDEO_DRIVER=wayland (software GL, slow).
- 2026-11-16: optimization pass (BOOT_LOG 117): ALBW_PROFILE sampling profiler + tools/prof_report.py; op pool hashes only used bytes; the port's own code is ~0.15 core, the rest is the GL driver. X11 hang = KDE session locked (windows not mapped).
- 2026-11-16: review + fragility audit (BOOT_LOG 118): 6 fixes (menu rescale, texture LOD clamp, 64-bit varargs, viewer/test links, misc2 test); biggest open fragility: 119 functions linked with a stale-map Ghidra body (tools/stale_map_scan.py) - do the EU/USA map fix integration next. Fairy light streak at the logo: still missing (checked vs Azahar e001).
- 2026-11-16: map fix integrated (BOOT_LOG 119: 0 wrong bodies linked, the six missing functions resolved); particles part 1 (BOOT_LOG 120): emitter sets now created/calculated as in Azahar (stripped __asm in the name search); part 2 = draw path (raw PICA -> native eft producers).
- 2026-11-16: particles drawn (BOOT_LOG 121: title fairy lights match Azahar, dream effects run), fog implemented (122, unverified), function names (native/names.txt), checklist MISSING.md.

## Lost stack stores (lostframe class) left in stage-2 text

Ghidra drops stores into the word(s) at sp+0/sp+4 when they belong to an object passed by address (it propagates the values past the call instead): checked by hand in 002D8484 (case 1 of its state switch: vec at sp+4 normalised without being written) and 001EA96C (1EAB1C: vec copy to sp+4 before `add`, x word missing). native/framework/tools/lostframe.py finds candidates; each needs the store put back by the ARM.

## Unresolved symbols after the `_DAT_` fix (boot stop 101; tripwire stubs, build/stubs.c)

Data (18, the gen_data "unplaceable" names; `ALBW_GEN_DATA_DEBUG=1` lists them): DAT_00000005 DAT_00000006 DAT_00000007 DAT_00000009 DAT_0000000a DAT_0000000b DAT_0000000d DAT_0000000e DAT_0000000f DAT_00000011 DAT_00000012 DAT_0000001b DAT_0000002b DAT_0000002d DAT_00000030 DAT_0000003c DAT_00000040 DAT_00000089 - small constants Ghidra printed as `&DAT_000000xx` (an address below the image): each use is an integer literal, not data; stubbed with 4 KiB blocks, a read gets zeroes. Converter: print them as the integer.

Functions (34+3 after stop 103, each a runtime_fatal tripwire):
- `_ZN7Primary2v0Ev` .. `_ZN7Primary3v16Ev` (17), `_ZN13Base_001510A4D2Ev`, `_ZTI13Base_001510A4`, `_ZTVN10__cxxabiv117__class_type_infoE`, `_ZTVN10__cxxabiv120__si_class_type_infoE`: virtual-method / RTTI declarations of matched C++ sources (placeholder classes `Primary`, `Base_001510A4`), referenced from their vtables or typeinfo, not called;
- `coprocessor_function`, `coprocessor_load`, `__sqrtf`: Ghidra intrinsics (cdp / ldc, vsqrt) left in converted text;
- `func_1FF80000`, `func_FE6533C4`, `func_FE6D27C8`, `func_FEADFFF6`, `func_FEAE0002`: calls to addresses outside the code (shared page 0x1FF80000, negative offsets): Ghidra artefacts;
- `func_001A3F04`, `func_00200080`, `func_00205E20`, `func_002A0078`, `func_002A018C`: game addresses with no source (mid-function / fall-through entries, or dumps that timed out like 001EA96C did): need a source each when reached (tools/reconvert_one.py, BOOT_LOG stop 103);
- `data_711F50`, `func_getInfo51C`, `func_leaf`, `func_tail`: placeholder names in matched sources. Resolved: data_711F50 = data_00711F50 (alias), func_getInfo51C = inlined read of +0x51C (native/game), func_leaf / func_tail: native 00441298 (BOOT_LOG 110).
| Converter follow-ups from the 3D track (2026-11-15) | found by the title 3D work, fixed by hand once | (1) FCONV over-application: integer conversion results kept in float variables (`fX = (float)VectorFloatToUnsigned(...)` then `ALBW_AS_U32(fX)`) store the float's bits instead of the integer: 003FD364 (native now, BOOT_LOG 87 [3d]) and 5 more Ghidra sources with the same form: 00590B1C, 00244E68, 002CEA4C, 002AE274, 004DE3E0; the converter should type the vcvt result as an integer. (2) Stack parameter after an unused r3: Ghidra prints `PARAM param_4 Stack[0x0]` with no r3 parameter, so C callers passing 5 words feed r3 into the size: 001B7C24 (native now, BOOT_LOG 88 [3d]); scan all `Stack[0x0]` PARAM comments whose function has fewer than 4 register parameters and add the missing r3 slot. (3) Float results of indirect-call targets: the curve handler table data_00714BB0[kind][format] (called by the matched 005670A0 as `f32 (*)(curve, f32)`): 17 Ghidra handlers were typed int / uint / void / undefined8 and dropped the float; on i386 the caller then reads an empty x87 register (NaN 0xFFC00000). All 17 are native now (0067A940 / 0067B458 BOOT_LOG 89g [3d], the other 15 BOOT_LOG 90 [3d], native/game/curve_handler.h). systemic3/retfix.json concluded "s0 consumed by nobody" for them because the table call is invisible to it; the converter should take the return type of table entries from the call site's pointer type (scan .data function-pointer tables whose consumers call through a float-returning type). (4) Lost float argument in Ghidra tail calls through a vtable ("Could not recover jumptable" + `(**(code **)(*p + off))(p, ...)` with a float live in s0): 00582014 -> vtable +0x18 (002C3EB4 room alpha) dropped s0 (native now, BOOT_LOG 91 [3d]); scan for indirect tail calls whose callee signatures take a float. |
