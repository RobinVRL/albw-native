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

## Coordination with the 3D agent (top screen)

Top-screen 2D now draws (BOOT_LOG 109): Mn_TitleLogoT is a LAYOUT (ZELDA logo, its 2D Triforce P_TriForce_00 and the light panes, animations InTriForce / InTitle), Mn_TitleT holds "(c) 2013 Nintendo"; TitleLogo.bch / TitleCamera.bch / title_triforce.bch are the 3D part (the big Triforce, camera, field). Left for the 3D agent: the large 3D Triforce still in front of the field at the title, the blue background instead of the overworld, and the black top behind the opening dialogue. Note for h3d: 001321B8 is the other caller of 005FF104, so its sub-buffer now runs too (it was dropped before).


### Title overworld: handover notes (3D agent, 2026-11-15, BOOT_LOG 90-91 [3d])

State after master afe8cc8 merged into title-3d: top-screen frames 300/600 show the 3D Triforce assembling on black; from state 2 (title counter 0x19F) the 2D logo + "(c) 2013 Nintendo" draw over a BLUE background (clear colour / sky) with the big 3D Triforce's lower pieces still visible; the reference (scratchpad azahar/ref/emu_t8s.png) shows the overworld (castle town area) and no 3D Triforce.

Findings:
1. Curve handlers: all 17 entries of data_00714BB0 are native float handlers now (BOOT_LOG 89g / 90 [3d], native/game/curve_handler.h). General: animation curves game-wide.
2. Stage rooms (FieldLight18 room models) are submitted by 001312BC submit_models -> 004CEF4C (per-model "shown" mask +0x168) -> drawn via the sorted list +0x2888 -> 00130160 -> 00330B40 -> 00170558. 004CEF4C hides a model unless its alpha +0x154 > 0. For room-owned models (flags 0x20000000) the alpha is set each frame by 004ECF14 -> 00582014 (room fade: model +0x158 x room +0x3F8) -> vtable +0x18 = 002C3EB4(model, flag, s0 = alpha). The Ghidra 00582014 dropped the float argument, so +0x154 got stack garbage: 8e-17 (drawn) in some runs / frames, 0 (hidden) in others. That is the run-to-run variance (24 vs 9 VBOs) and the 15 -> 4 model drop. Native fix written: native/game/func_00582014.c (BOOT_LOG 91 [3d]); verify it (ALBW_H3D_MODELS=1: rooms should stay drawn in state 2 in every run).
3. Field actors (e.g. scene model 4) are hidden at state 2 by 004BFD14 -> 004CF478(model, 0) because 0014F794 (squared XY distance from *(data_00708998+0x18)+0x118 to the actor > its range +0x3AC, or room inactive 00581C9C) says not visible; this looks like genuine game behaviour (the reference point moves with the title camera), check after (2).
4. Title flow: 0029B698 at title +0x194 (frame 0x19F) clears camera +0x94 and render env +0x2C1B (camera cut). The title camera in state 2 pans (ALBW_H3D_CAMTRACE: eye roughly (2, 26, 34) moving); compare its path with the reference once rooms draw.

Next steps: (a) relink with func_00582014.c and confirm the overworld draws in state 2 (shots: ALBW_SHOT=600,1200,2000 ALBW_SHOT_DIR=...); (b) the 3D Triforce after the logo appears (TitleLogo.bch model 0 still drawn: find its hide / fade, probably the same alpha path 002C3EB4 or a visibility animation); (c) blue background = the sky / clear when no rooms draw, re-check after (a); (d) sweep other vtable calls that pass a float in s0 through Ghidra tail calls ("Could not recover jumptable" + indirect call with a float live in s0): same class as 00582014.
Debug aids (native/sdk/h3d.c): ALBW_H3D_MODELS=1 (+ _BT=1 call chain of each model's first draw), ALBW_H3D_SCENE=1 (scene model list: flags +0x164, vis index, shown mask +0x168, element count), ALBW_H3D_SCENE_TRAP=1 (SIGTRAP once the scene has models, for gdb watchpoints; scripts build/shots3d/room*.gdb), ALBW_H3D_CAMTRACE=1. Private save: build/shots3d/race.sh. Note: tools/link.sh's DAT grep over build/decomp/ghidra_fallback is very slow under I/O load (40+ min seen).

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
