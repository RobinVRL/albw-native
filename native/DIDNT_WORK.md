# Hypotheses that turned out wrong (title flyover / 3D rendering)

Ruled-out causes, with the evidence, so they are not chased again. Newest last. Debug switches
named here are documented in `native/BOOT_LOG.md` (entries 93-98).

Reference used: Azahar via `./run_reference.sh` with default graphics settings (game-controlled
texture sampling, 1x resolution, top screen shown 1:1 - verified: the 2D logo has identical edge
sharpness in both, so the emulator image is not blurred by its presentation).

## Lighting / tint jumps during the flyover

| Hypothesis | Test | Result |
|---|---|---|
| The jumps (frames ~901, 966, 969, 983, 1160, 1231, 1382) are a port bug | emulator frames at the same camera position (e025 -> e026 vs our 1381 -> 1382) | concluded "not a bug" at the time - **that conclusion was wrong**: the stills were too far apart to show it. They were a port bug: shared light-environment state leaking between materials (BOOT_LOG 101); after the fix, 0 tile brightness jumps in frames 880-1500 (was 7, up to 47 levels) |
| Fragment-light state changes at the jump | `ALBW_RENDER_DUMP=1374-1386` with fraglight state per draw | identical across the jump |
| TEV combiner constants change | same dump | identical |
| Vertex lighting (c20-c24: material colours, hemisphere) changes | same dump | identical |
| A full-screen colour overlay (third 3/105 draw) changes strength | same dump | overlay state constant |
| Room cross-fade (room +0x3F8) snaps instead of ramping | `ALBW_ROOMFADE_TRACE` | only one room, fade constantly 1 |
| Model alpha lost through other vtable +0x18 calls (class of 00582014) | sweep of converted sources | the 3 candidates (0014A40C, 0014BDE0, 0037A9E8) are other objects, not model alpha |
| Unhandled uniform writer 00518694 leaves a stale normal matrix | made it native (real fix, kept) | jumps unchanged (not their cause) |
| Shared texture mip range between materials | per-draw LOD clamp (real fix, kept) | jumps unchanged |

## Grass grain / shimmer / texture popping

| Hypothesis | Test | Result |
|---|---|---|
| Wrong sampler filter decode (mag/min bits) | `ALBW_TEXPARAM_TRACE`: raw 0x83/0x93/0x9B words | all 189 materials x 3 units = 0x2220 (nearest / nearest-mip). **The conclusion "the data really says nearest" was wrong**: 0x2220 is only a default in the blob; the real sampler is the material's texture mapper (see "Resolved" below) |
| The game patches sampler words at runtime | re-read the words at frame 900; hardware watchpoint on the VRAM copy | only our own DMA writes them (words hold our markers by design) |
| Raw texture-unit commands written by game code that we drop | `ALBW_RAW_TRACE` (raw PICA words between markers) | no raw 0x80-0x9F writes at all |
| Sampler template in rodata (albw_ro+0x15590) used for 3D | traced the users | used by 00400A64 (nw::lyt 2D material ctor), not h3d |
| Emulator presentation blur (filter_mode) makes it look smoother | logo-region gradient energy | identical in both (38.92 vs 38.94) |
| Bad stored mip levels | `ALBW_TEX_GENMIP=1` (GL-generated mips) | no measurable change |
| LOD bias / level selection | `ALBW_TEX_LODBIAS=0.5/1.0` | moves towards the emulator but not consistently across regions; not the cause |
| ETC1 / ETC1A4 decoder errors | code review against the format + Citra's nibble order | correct |
| Texture-coordinate generation from position (bool 9 off) | dumped bools | bool 9 set on terrain: UVs come from the attribute |
| Texture matrix scale lost (003FA8AC) | gdb on its inputs | terrain coordinators are identity (scale 1) |
| Vertex colours ignored (c7.w = 0) | `ALBW_H3D_VTXTRACE` per draw | every draw with a colour attribute has c7.w = 1/255 |
| GL normalises integer attributes | code review | GL_FALSE, correct |
| Forced alpha test on configured-but-disabled materials | `ALBW_ALPHATEST_FORCE` (removed) | opaque terrain gets holes: the data's "disabled" is right |
| Depth-offset sign / scale causes the decal popping | `ALBW_POLYOFS_SCALE` = 1 / 4 / -1 / 0 | 71 / 70 / 50 / 328 flicker px per frame: offset is needed and roughly right; flipped sign lowers the count only by hiding decals - not the cause of the remaining flicker |

## Blinking

| Hypothesis | Test | Result |
|---|---|---|
| A display buffer missing the 3D | `ALBW_FRAME_TRACE` | buffers rotate with period 3, black frames with period 2 |
| Heapsort tie in the +0x2888 draw list | dump of sorted lists | stable every frame; the real cause was the bool adapter on comparator 00429F14 (fixed, BOOT_LOG 93) |
| Bug in native sead::ListImpl::sort 0049F434 | read it | correct (passes both arguments) |

## Trees (half green / half brown root bulbs)

| Hypothesis | Test | Result |
|---|---|---|
| Root bulbs are a separate missing model / actor | draws in the tree's screen box | one tree draw (1695 indices) holds canopy, leaf skirt and bulbs; the atlas contains both leaf and bulb drawings |
| Actors hidden by a wrong distance check (0014F794) | gdb on its inputs, EU code of 00115CA8 | faithful (reference matrix transform matches the ARM) |
| Wrong texture data | `ALBW_TEX_DUMP_DIR` | atlas decodes cleanly (tan bulb drawings + green canopy bands; unit 1 is a normal map) |
| Vertex colour tints the roots green | `ALBW_FS_DEBUG=2` | vertex colour white |
| Lighting tints them green | `ALBW_FS_DEBUG=3`, `=6` | diffuse neutral, specular tiny |
| TEV buffer handling (one-stage lag) | compared with Citra's shader generator | identical semantics |
| Global vertical texture flip | `ALBW_TEX_FLIPV=1` | breaks the 2D logo; tree not fixed |
| V flip of model texture coordinates only | `ALBW_H3D_FLIPV=1` | tree worse |
| Alpha test should cut the green around the bulb drawings | `ALBW_ATEST_TEX=1f173d80` | removes the tan parts, keeps the green: wrong |
| Skinning puts the pieces in the wrong place | tree vertex layout | no bone indices; single rigid matrix |
| Face culling inverted | `ALBW_CULL_FLIP=1` | the whole scene breaks (ground culled): culling is right |

## Other

| Hypothesis | Test | Result |
|---|---|---|
| Correct 0016DAD0 bounds (drop the stale native copy) | linked the converted text | models vanish for single frames: NaN in its inputs; old copy kept until the NaN source is found |
| Shadows missing because of stencil handling | dumped stencil state | stencil handling is fine; no draw writes the stencil (the marking draws are missing) |

## Trees, round 2 (ground truth from the emulator's own texture dump)

Method: Azahar texture dumping (`dump_textures=true` in its qt-config.ini, restored afterwards;
dumps under ~/.var/app/org.azahar_emu.Azahar/data/azahar-emu/dump/textures/00040000000EC400/).

| Hypothesis | Test | Result |
|---|---|---|
| Our ETC1A4 decode differs from the hardware (alpha inverted / scrambled) | emulator dump `tex1_128x256_CE66D2971B50EE6A_13_mip0.png` vs our `ALBW_TEX_DUMP_DIR` decode of 0x1F173D80 | **identical** (colour and alpha, same orientation): decode is correct |
| The tree is drawn twice (a separate cut-out pass) | all draws sampling the atlas in one frame | one draw per tree instance (8 instances), plus the drop-shadow decal (0x1F167800) |
| Alpha-test enable lost through partial (masked) register writes | `ALBW_ATEST_TRACE`: every 0x104 write | all mask 3 (bytes 0-1: enable, function, reference complete); the tree's material: 0x8060 = disabled, GREATER, 128 |
| The material uniform writer 00565204 also writes the alpha test | literal pool of EU 005651DC | writes 0xC3-0xFB, 0x103, 0x2C0, 0x81, 0x1C0 - no 0x104 |
| The tree uses a special (wind / billboard) vertex shader | `ALBW_H3D_SHADERNAMES` | every material is a DefaultShader program; tree = `1@DefaultShader-nl` (variant 40) |
| Depth offset hides the outer part of the root cards under the ground | `ALBW_POLYOFS_SCALE=0 / 4` on the tree | no change (the tree and ground draws have no offset) |
| Within-draw depth order inverted | `ALBW_FS_DEBUG=7` (depth view) | the root / leaf cards lie at ground depth, smooth; nothing inverted |
| Forced alpha test GREATER 128 on the tree | `ALBW_ATEST_TEX=1f173d80` | keeps the green, removes the tan bulbs |
| Forced alpha test LESS 128 on the tree | `ALBW_ATEST_TEX=1f173d80 ALBW_ATEST_FUNC=4` | the bulbs become round and ridged like the emulator's, but the canopy disappears: so the emulator does keep the dark-alpha bulb drawings, yet no single alpha test reproduces both - the mechanism is still unknown |

Open leads: (1) verify our GLSL translation of DefaultShader program 1 (texture coordinates)
against the real DVLE bytecode (needs a PICA vertex-shader disassembler; asset_test already
parses the DVLB symbol tables); (2) the tree light set `World/Environment/LightSet/bg_TreeLight.bch`
(trees get their own light environment - Fresnel / LUT alpha outputs are not used by our TEV
path); (3) render the tree model offline in the asset viewer (needs an option to take textures
from a second BCH: World/Course/fld_o_Common.bch) to separate data from in-game state.

## Resolved: texture mapper sampler state (trees, grass grain, shimmer)

Cause: the material texture blob's sampler words (0x83/0x93/0x9B) are the same default 0x2220
(repeat/repeat, nearest) in every material. The real per-texture state is the material's texture
mapper (material +0x18: wrap u/v, mag/min filter per unit), which the h3d runtime turns into the
sampler words. The tree material says wrap 3/3 (mirrored repeat), linear filtering. The root
cards' texture coordinates reach u = -0.36. With plain repeat that wrapped onto the green leaf
bands on the right of the atlas (half green roots); mirrored, it reflects back into the tan bulb
drawing (the emulator's look). Point sampling everywhere gave the grain and shimmer.

Found by: `ALBW_H3D_DUMP=1 ALBW_H3D_DUMP_TEX=1f173d80 ALBW_H3D_DUMP_BIN=<dir>` (raw vertices /
indices / uniforms of the tree draw), triangles plotted in UV space over the atlas (root triangles
outside [0,1]), then `ALBW_MAT_LIST=Tree build/assets/asset_test64` (mapper per material).
Fix: native/sdk/h3d.c apply_mapper() (`ALBW_NO_MAPPER=1` restores the old behaviour for
comparison).

So the alpha-test and shader hypotheses above (Trees, rounds 1 and 2) were all chasing a
symptom: the LESS-128 alpha test "worked" only because the leaf bands have high alpha.

## Water (river / castle pool) - after the mapper fix

| Hypothesis | Test | Result |
|---|---|---|
| Water material state wrong (combiner, constants, texture scroll) | `ALBW_RENDER_DUMP` of the water draws vs `ALBW_MAT_LIST=m_o_water ALBW_MAT_FULL=1 asset_test64` | combiner stages, constants and buffer colour identical to the file; texture matrices animate (scroll) |
| Combiner operand / function evaluation (green-channel operand 8, subtract, lerp, add-multiply) | render.c FS_TEV vs Citra's shader generator | identical |
| Fragment-lighting environment bits (bump mode, renormalise polarity, Fresnel selector, LUT disables) | native 005626C0 vs the Ghidra text of the original | identical (bit 30 = disable renormalise when bump && !flag) |
| Sun direction sign / axes in view space (00567734 directional branch, float args lost in Ghidra) | EU machine code 0056770C (vmul / vmla / vnmla: -(view rows . dir), x/y/z order) | native matches |
| LUT entry decode | 0x1C8.. words: value 0.12, signed delta | format right; the water's D0 table (SpecularWater01) has that odd shape in the data itself |
| HILO8 normal map decode | texdecode.c vs Citra (R = byte 1, G = byte 0, B = 0) | identical |
| "River darker / no sparkles than the emulator" | frames 1100-1111 | the sparkles and brightness are there; the earlier comparison (our 1000 vs emulator e011) was at different camera positions - the water is view-dependent (Fresnel) |
| Global flashing in the flyover | per-frame mean difference, frames 880-1500 (every frame) | no frame-to-frame spikes; only scattered thin-edge pixels (fence and wall-top seams, <3000 px over 48 frames) |

## Fence flicker / z-fighting (title flyover, frames 1000-1060 and 1331-1389)

| Hypothesis | Test | Result |
|---|---|---|
| Depth-offset formula wrong (Ghidra lost the float maths of 0056497C) | EU machine code 00564954 | register 0x4E = near - (near - far) * units * 128 / (2^bits - 1): our GL units = units * 128 * (far - near) is the same bias; w-buffer path units * 128 also matches |
| Fence-base / fence-shadow decal z-fighting | motion-compensated flicker count (scratchpad regflick.py: align neighbours by phase correlation, count pixels that flash against both) in fence areas clear of the logo, `ALBW_POLYOFS_SCALE` = 0 / 1 / 4 | offset 0: 2841 px flicker on the fence area; 1 and 4: 0. No flicker in the captured frames with the normal offset (the remaining counts in other areas are the 2D logo underline over the moving scene, an artefact of the measure) |
| Presented image differs from the captured one | platform.c: ALBW_SHOT reads the same screen target that plat_composite draws to the window | same image; the window cannot be screen-recorded here (Wayland, x11grab is black) |

Resolved later (BOOT_LOG 100): the water's real problems were in our hand-written vertex / lighting GLSL, found by
disassembling the game's DefaultShader (tools/pica_disasm.py): the texture-coordinate vector is (u, v, 1, 1), not
(u, v, 0, 1) (scroll translation was dropped: the water stood still), and the no-tangent tangent frame is the
quaternion's (T = -x, B = -y), not an invented one. Everything in the water table above was indeed correct.

| Hypothesis | Test | Result |
|---|---|---|
| Water textures differ from the hardware's | emulator texture dump vs ALBW_TEX_DUMP_DIR (HILO8 normal map 0x1F186900, ETC1 waterField 0x1F185E80) | identical (mean abs difference 0) |

Resolved (BOOT_LOG 101): the darker surfaces (stones, fence posts, grass ~10 %) and the sudden per-area
lighting jumps were shared light-environment state: on cached material binds (00564C14, 005655D0 cached
branch) the native code recorded the environment from the light-set object, which held the last rebuilt
material's bump mode / bump texture / Fresnel / LUT config and specular colours. Measured with
scratchpad jumps.py (per-tile brightness jumps with the camera pan removed).

## NPC soldiers (title flyover) - open

Symptom: matched frames vs Azahar burst captures (emulator 46-76 = our 1190-1365): our soldiers sit further
up the screen (north) and look tipped over (hat towards the camera, spear diagonal); the gate guard shows
behind the castle wall instead of in front of it. Scarecrows (also skinned actors) and all static objects
match.

| Hypothesis | Test | Result |
|---|---|---|
| The skinned-mesh bone palette (native 005683D0) mis-builds the matrices | read against the original's description (world x inverse bind / world) | straightforward; the scarecrows (same path) are right |
| Bone world matrices of NpcSoldier | `ALBW_SKEL_DUMP=NpcSoldier` (new, sdk/h3d.c) | the root bone leans 10-20 degrees about x (pre-flyover instance: 26-31 degrees, oscillating); scarecrows lean ~5 degrees (the game's lean-back towards the camera). Both flyover soldiers sit at z = -0.20 / -0.04, y = 0.48. Not yet known which value is wrong: needs the emulator's matrices (Azahar GDB stub) or the soldier's animation / lean code |

Resolved (BOOT_LOG 102): the soldiers' position z was lost in 004BC850 (lost stack store of the position
Vec3 passed to the base-matrix writer). The lean is genuine (the emulator has the same ~30 degree root
lean via its GDB stub). Ruled out on the way: spawn parameters (correct at 00150E40), the skinned bone
palette 005683D0, the instance matrix writer 004CEAF0 (native, faithful).

## Shadows / SoliderPaint (title flyover, iteration 2)

| Hypothesis | Test | Result |
|---|---|---|
| Shadow-marking draws are the raw immediate draws (0x22E / 0x232 raw words every frame) | template data_006A8164 + callers | those are the nw::lyt RectDrawer kicks (0056F468), already drawn natively |
| The shadow volumes are drawn by 00387E58 (raw-matrix model draw) | native version with a call trace | not called in the title (kept: same raw-matrix class) |
| The soldier's own model carries the shadow | NpcSoldier materials (asset_test) | no stencil state; the volumes are separate ActorCommon models |
Resolved: BOOT_LOG 104 (lost arguments in 00518694's vtable calls).

Open: the wall painting (SoliderPaint) shows the material's default texture SoliderPaint_greensword; Azahar shows
a blue variant (SoliderPaint_bluesword exists in the same file, texture 0). The per-instance texture slot (state
+0x13C) holds the default blob - the variant switch (actor parameter -> texture slot) is not applied yet.

## Opening cutscene / Link's house (iteration 3)

| Hypothesis | Test | Result |
|---|---|---|
| The room draws black because of fragment lighting | ALBW_FS_DEBUG=1 (texture only) / =3 | room still black: unit 0 had no texture (address 0) |
| Texture blobs decoded before the data was in place (staging) | ALBW_H3D_MODELMAP: decoded unit-0 address of every registered texture | none 0 |
| The cross-file texture binder (003FC460) never runs | gdb FinishBreakpoint log of its calls and return flags | it runs (frame ~4165); the indoor textures were simply not in any loaded file -> idr_Common not loaded (BOOT_LOG 105) |

Open after 105: (1) a fullscreen 2D draw (prog 4/0, blend src-alpha) blacks the scene out at the dialogue
(fade that never clears); the room draws only cover the top band (camera mid-move?); (2) "Hey, L" instead of
"Hey, Link!" (player name cut after one character: UTF-16 read as char?); (3) the dream sequence (Triforce on a red
nebula, Link floating) shows only Link.

## Dialogue text stops ("Hey, L", later boxes empty) - iteration 4

| Hypothesis | Test | Result |
|---|---|---|
| The player name is stored / copied wrongly (UTF-16 vs char) | gdb memory search at frame 5400: "Link" UTF-16 + terminator in save / file data; read watch -> 00584084 copies it into the stack WFixedSafeString<11> of 00179BC4 (capacity 11, layout right) | name intact |
| The name-tag expansion (00178DB0 / 00179BC4 / 00178AE8) is wrong | gdb dump of the message buffer at 00178DB0 entry / exit (port) | correct: `<wait 90> Hey, <wait 90> Link! <wait 90> <wait 100>` after expansion |
| Wide-string helpers mapped to libc (4-byte wchar_t) | native/core/crt_thumb.c | 16-bit wcslen / wcsncpy already native |
Finding: the typewriter reveal stalls after the first character that follows a wait tag (group 0 type 2):
DispStringBuffer rebuilt with 1..5 chars, then 6 ("Hey, L"), then never again; the following boxes show no
characters at all. Next: the message window's reveal update (wait-tag timer / per-frame char counter).
Emulator side not captured yet (the scripted xdotool run did not reach the dialogue under the gdb stub).

Dialogue, iteration 5 (the stall is a 16-character text buffer, not a timer):
| Hypothesis | Test | Result |
|---|---|---|
| The typewriter's wait counter (reader +0x3A) runs away | gdb write watch on it | never written; the reader advances through the whole message (positions 5..30, wait tags skipped) |
| TextBox length (+0xCE) stops because the reveal stops | gdb write watch: 9, 10, 15, 16, then no change while the reader goes on | 00405A44 clamps to capacity - 1: TextBox +0xCC = 17 |
| AllocStringBuffer (00403FE4) gets the size from a wrong layout offset | sizes logged in the port (all 16 at the dialogue) vs Azahar GDB stub (16..256, nine 256s, all from the provider branch, lr 0x405E30) | the layout default is 16 in both; the emulator's dialogue box goes through the text-provider branch, ours does not (param_4[5] = 0 for its build). Found on the way: double literal-pool constants (BOOT_LOG 106) |
Next: why the message window's layout build passes no text provider (BuildArgSet +0x14).
| The message window is built without a text provider | trace of every TextBox build (provider word) | all 58 builds have one (an earlier grep used a stale heap address); the real fault was `&DAT_00000040` (BOOT_LOG 107) |

Empty dialogue boxes after "Hey, Link!" (iteration 6, open):
| Hypothesis | Test | Result |
|---|---|---|
| The typewriter keeps typing an empty message | breakpoint on the reader advance 0017A190 at frame 6500 | not called: the window is not in its typing state |
| The message window state machine (00440C48, state at +0x90) | gdb at frame 6500 | state 2 (handler 00440E6C) forever: it waits until the animation object at window +0xDC is idle (+0xD == 0 && +0xE == 0) |
| That animation object | its update 0012C85C (pane-animation controller: 1 in, 3 hold, 4 out, 0 idle) | stuck at +0xD = +0xE = 3 (hold); nothing requests 4 (out). Next: who should request the out-animation (Azahar GDB stub on EU 00440E4C / the controller's +0xE) |
| The window waits on a stuck animation (state 2 / controller held at 3) | write log of the controller +0xE and window +0x90 | not stuck: state 2 is "wait for A"; A requests the out-animation correctly. The real fault: message 2's typing state left at once (bool adapter, BOOT_LOG 108) |

Black top screen during the house dialogue (iteration 8, open):
| Hypothesis | Test | Result |
|---|---|---|
| A fullscreen 2D fade quad (prog 4/0) | RENDER_DUMP at 5450 | not present in that frame |
| Wrong cutscene camera | h3d dump c86-c92 at 5450 / 5900 (ALBW_H3D_DUMP_FROM, new) | sane top-down cameras (eye ~(0, 13.6, 1.8) and ~(0, 18.5, -1.3)) |
| Room meshes culled by the visibility lists | ALBW_NO_CULL_LISTS=1 (new experiment switch) | a little more appears (wall, bed top) but the lower screen stays black |
Finding: the first draw, the sky-dome shader (prog 3/105, material m_vr: depth ALWAYS + write, stencil clear), covers
65472 px with black and writes depth, so the room behind it fails the depth test; Azahar shows the full room. Next:
which vr model this is (vr_Black from the dream?) and why it is still drawn / not at the far plane.
| The sky dome (vr_Black) occludes the room | model name trace (frame in ALBW_H3D_MODELS_BT), sky positioning 0016F1A4 (EU code: x / z from the camera, y = actor +0x40C, 0 also in the title), vr_Black bounds (viewer: open box +-300 x, -100..100 y, 10 triangles) | **wrong**: the box is far outside the room; the black is the clear + box behind missing geometry. The floor / bed meshes of the room are not drawn at the 5450 camera (also with ALBW_NO_CULL_LISTS=1): some mesh / room visibility decision hides them |

The dream before the house (iteration 10, open):
| Hypothesis | Test | Result |
|---|---|---|
| Frame 5450 is the house with a bad camera | texture-only views + model names | frame 5450 is still the dream (LinkDemo from behind); Azahar is already in the bed scene at "Hey, Link!" |
| Dream models off-screen | h3d dump at 3500 (models ~y -200, camera eye ~(3, -200, -5) looking at them) | in view |
| Unbound dream textures / missing course file | render dump units; ALBW_MATSTATE='*'; FS log | textures bound; no extra course file |
| Material alpha 0 (fade) | c20 / c21 of the draws | 1.0 |
Finding: every dream draw (44 x variant 75, depth LESS) changes 0 pixels; the depth buffer is filled with 0 (game
fill, value 0), and no draw with depth ALWAYS precedes them (the title / house have their sky dome for that). The
dream's backdrop (red nebula: sky model and / or eft particles) is not drawn at all - next: find the dream's backdrop
model / emitter and why it is missing.
| The dream needs a missing backdrop model to initialise depth | Demo1 models (TriForce, LinkDemo, GhostGanon only) + depth-fill backtrace | no backdrop model exists; the depth clear value itself was wrong (BOOT_LOG 109) |

House "Hey, Link!" (iteration 12):
| Hypothesis | Test | Result |
|---|---|---|
| The sky (variant 105) occludes the room | ALBW_H3D_SKIPVAR=105 | without it the area below the line shows stale pixels: the room is simply not drawn there |
| Flattened Link from a bad rotation | ALBW_SKEL_DUMP: base / scale / rotation | the scale held the position (fixed, BOOT_LOG 110); the scene is still mostly black |
Open: the camera looks at (0, 0, 0) (eye (0, 13.55, 1.78), direction (0, -0.99, -0.13)) while Link lies at
(-2.6, 0, -7); Azahar centres Link. Likely a lost camera target vector. The camera object is not next to the view
matrix (00130C1C's view pointer) - trace the look-at camera's target next.
| House camera: lost target inside the camera interpolation 00121634 (iteration 13) | gdb: target writes, EU 00121634 stores | 00121634 only restores saved values; the zero target is set by the shot itself (0030C144 lost Vec3, BOOT_LOG 111) |
| House room alpha (model +0x134 = 0 on idr_Link) | ALBW_SKEL_DUMP (+0x154 / +0x158) | +0x134 is not the alpha; the room alpha (+0x154) is 1 |
| Room behind the near / far planes | projection dump (near 0.2, infinite far) + frustum planes from 003FB1D0 | both correct; the culling frustum was right for the (wrong) camera |

Yellow ">" pill on the top screen with every message window (iteration 14, open; Azahar never shows it):
| Hypothesis | Test | Result |
|---|---|---|
| Name the pane from the material (ALBW_LYT_MATS=<frame>, new in sdk/lyt.c) | strings in the material block | CTR lyt materials hold no inline name: only unrelated heap strings; need the pane (name char[] in the Pane object) from the caller instead |
Facts: it appears and disappears together with the message window (frames 4500.., also outdoors at 9900+); likely a choice/answer
or "next" pane of the message-window layout whose hide animation / visibility flag is not applied.
| Pill: pane global alpha never propagated (CalculateMtx skipped) | gdb write watch after poking N_Btn_00 +0x46 | true but harmless: the ARM also stops below a zero-alpha pane; the real fault was the visitor's byte return (BOOT_LOG 112) |
| Pill: draw visitor 00437244 / 003FF5D8 (window / null slots) | x86 disassembly | correct (bool adapters); the parts slot 004371D8 was the broken one |
| Reach the weather-vane save with blind ALBW_PRESS scripts (iteration 17) | 5 runs, walk lengths 22..70 frames, side steps | Link's position at frame ~14400 differs between runs with identical input (timing variance), so fixed scripts miss the vane; not a game bug as far as seen |

Link's eyes open in bed (iteration 19; RESOLVED by BOOT_LOG 115: the material-animation apply 00567588 lost its frame argument):
| Hypothesis | Test | Result |
|---|---|---|
| The bed animations carry an eye texture-pattern animation | asset_test ALBW_BCH_COUNTS=Link_Bed (new) | skeletal animation only: the eye frame is chosen by game code |
| Eye pattern swaps do not work at all | ALBW_MATSTATE=eye + ALBW_H3D_MODELMAP (texture names) | they work: during gameplay Link's eye slot switches eye_alb.0 -> eye_alb.7 (blink) |
| The bed scene sets closed eyes but the renderer misses it | gdb write watch on Link's eye unit-0 slot (material state +0x13C) frames 4150..bed | no write at all: the closed-eye request is never made (same class as SoliderPaint's variant). Next: catch the blink write in gameplay (who writes +0x13C), then find the expression request the bed / sleep state should make |
| Catch the blink with a write watch on Link's eye slot (state +0x13C; heap shifts by relinks: 0xe315c14c -> 0xe315f14c) | gdb, frames 4150..~15000 | only the creation writes (004929F0 <- 00492D98 <- 0049A690 at 4165: 0xff000000, 0); the later binding (blob 0x1f1401c0) and the blink were not caught although ALBW_MATSTATE shows them: the slot is written another way (second mapping of the memory or a copied state) - next: read-watch who loads +0x13C in the bind (sdk/light.c `st`) and trace where `st` comes from |
| Nothing requests the closed face in bed | gdb: break func_00169608 (bind by name) and func_0028C8EC (setFace) | wrong: the bed animation 0x9E calls setFace(7) at ~4222 and the Link_FaceChange layer frame is 7.0; the frame was lost later, in 00567588 (s0 not modelled), so the texture pattern evaluated a stale stack word. The write watches on the unit slot could not catch anything because the evaluated frame never changed |


Particle effects (nw::eft) missing everywhere (2026-11-16, open; PLAN "Critical missing pieces" #2):
| Hypothesis | Test | Result |
|---|---|---|
| The emitters are created but not drawn | gdb counts: emitter vtables 0x6EFDEC / 0x6EFE14 / 0x6EFE3C (draws 003F43DC / 003F4D34 / 003F5498 / 003F5734), draw setup 003F0080 / 003F2E98 / 003F31AC | 0 calls through frame 2900: nothing to draw |
| The resources are never loaded | gdb: 002E32DC (Effect/JackAll) frame 0, 002E3494 (Effect/Demo) frame 183, system init 002E2F78 -> 003F6FF4 (builds the three emitter calcs at System +0x494/+0x498/+0x49C), 003F7CC4 (resource entry) once | loaded; the per-frame manager 002E3DF4 -> 003F6FBC runs every frame, but the per-pass draw 002E39E8 finds its group list (+0xA4 + pass * 0x14) empty and 003F8250 (set calc/draw loop) never runs |
| The title creates the fairy through 002E1B70 / 002E1BB4 | read the sources | camera controller helpers (data_00708998 + 0x18), not effects |
| Find CreateEmitterSet statically | callers into 003E7000-003F8000 (only 003EF0F8, 003F7C78 ClearResource, 003F7D70 are called from game code), users of the set / emitter pool sizes 0x288 / 0x2B0 (003EA664 / 003EAA88 / 003EC2CC / 003EE804 sit in a function table at 0x7162E8; 003E2B04 / 0048E924 are math) | not found: creation goes through virtual calls. Next: Azahar gdbstub breakpoint on the emitter draw (EU 003F43BC / 003F4D14 / 003F5478 / 003F5714) at the title logo, walk the call chain up to the creator (needs an unlocked desktop: X11 windows are not mapped while KDE is locked, and Azahar with QT_QPA_PLATFORM=offscreen segfaults) |
| Even created emitters would draw | render_exec_cmds runs only recorded ops; the eft draw path writes raw PICA commands; render/effects.c has the GLSL only (stripe programs 14 / 17 / 19 unwritten) | a native eft producer is needed as well |

Particle drawing (BOOT_LOG 121, 2026-11-16):
| Hypothesis | Test | Result |
|---|---|---|
| Hook the per-pass draw 002E39E8 to catch the eft blocks | wrap it, ALBW_RAW_DUMP=884 | wrong place: the emitter draws run in 002E3DF4 -> 003F8250 into the eft library's own double-buffered command buffers (cursor at *DAT_003ef2d4), not through CURRENT_BUFADDR; 002E39E8 only adds the pass camera uniforms. Hook 003F8250 with the eft cursor |
| Rebase the attribute base 0x18000000 onto host VRAM | title fairy drew, dream crashed (fault = host VRAM + 0x046DAC80) | only right for VRAM buffers: offsets are physical - 0x18000000; device-memory buffers keep host addresses (identity GetPhysicalAddr), so rebase base + offset only when it lands in the physical VRAM window |
| The dream's buffers use FCRAM physical addresses (0x20000000 + device-memory offset) | map [0x20000000, + device size) -> GetDeviceMemoryAddress | wrong: no address in that window ever reached the decoder (debug print never fired); the crash came from the base rebase above |
| A fresh register shadow per translated range | dream crash at frame 2757, fault = the buffer offset alone | a block relies on state an earlier block set (attribute base 0x200): the live shadow (registers, fixed attributes, program variant) must persist across ranges like GPU state |
| Wrap decomp functions with llvm-objcopy --redefine-sym | (design) | renames the callers inside the game object too; instead add func_X__decomp at the -ffunction-sections section start (tools/link.sh, native/wraps.txt) |

Fog (BOOT_LOG 122):
| Hypothesis | Test | Result |
|---|---|---|
| Fog state is in the model command blobs | ALBW_RAW_DUMP, code-pool scan for 0xE1/0xE6 headers | no: written per frame by 0026EB74 (scene fog object), 002E39E8 (eft pass) and 003CC288 (LUT builder) as raw words |
| Treat every 0xE0 write as combiner state | (design) | 0xE0 is shared: byte 0 fog mode, byte 2 z flip, byte 1 combiner buffer bits - a fog-only write (mask 5) must not re-emit the combiner buffer configuration |

## Scripted yard scene (2026-11-16)
| idea | why it was wrong |
|---|---|
| the dash fails because 001EA96C loses the x word of its position add (BOOT_LOG 127) | that block (EU 1EAAC0..1EAB38) only runs when riding a moving object (params+0x95, state+0x3BAE, 002C1634); the lost store is real but not on the dash path |
| the flow interpreter walks a different node path in the port | the current-node pointer sequence (Azahar watch on flow +0xF0 vs port) is identical |
| the rail-move node's parameter is 37 (node 0x...95D00 bytes 05 00 25 01) | that is the preceding node; the rail node is 0x...960D0 (0B 00 64 01), identical bytes in both games: the u8 parameter reader returned 0x164 |
| the camera pan after the dash is a camera bug | the camera follows Link, who never moved |
| the vane bubbles are drawn but invisible | no particle program is drawn at the vane at all (frame 1500 render dump); the vane actor is not in its sleeping look either (open eyes) |
| the candle flame is invisible because the eft range was wrong (BOOT_LOG 130) | after the fix the sconce set draws (2 emitters, glow only); the flame shape Azahar shows is a different element |
| the candle flame is rejected by depth / alpha / stencil / culling | ALBW_EFT_FRAG=d / a / c / s change nothing; only b (blend off) shows the glow quad: the glow is drawn and simply faint (alpha 0.25 / 0.58) |
| ALBW_EFT_SETLOG / ALBW_EFT_TRACE print nothing after a state load | debug statics of saved modules are restored with the state (off at save time); read the env per call or set from gdb (SAVESTATES.md) |

| -ftrivial-auto-var-init=zero for all native decompiled files (link.sh), to stop fall-throughs (BOOT_LOG 137) | relink + pot route | Link crashed on his first step: 27 native files (e.g. compilefix 0064268C) read hidden register inputs in_r0..in_r3 that worked with leftover stack values and became NULL. Reverted; fix such files one by one (each needs its real parameters) |

## Overworld terrain / grass / trees vanish after crossing an area edge (2026-11-17, BOOT_LOG 153-155, OPEN)

Repro: the user's state (`~/.local/share/albw-port/states/slot2.state`, Hyrule Castle area south edge
next to Link's house, "up toward the water" = castle area): CUP / CDOWN 300 frames each. Dark ground
(only the dirt base layer) whenever house-area ground is on screen; green while in the castle area.
Not reproducible from a fresh early-game boot (Gulley keeps Link in the yard).

| Hypothesis / attempt | Test | Result |
|---|---|---|
| Stale renderer textures: large (> 256 KB) CPU-written textures are not re-hashed, reused memory keeps old contents | FlushDataCache (003E35DC / 003E35E0 / 003E3D74) now calls render_mem_written (kept: correct in itself) | no change |
| Same, any size | `ALBW_TEX_REHASH_ALL=1` (re-hash every texture every frame, kept as a switch) | no change: not texture contents |
| The terrain models are culled per room (room table +0x1618..+0x1624 of *data_0070B928, flags +0x34/+0x35) | gdb dump of the table on green and dark frames | all rooms visible in both |
| Byte +0xB848 of *data_0070B928 is the active area slot | hardware watchpoint | it flips every frame inside the frustum test 00232D34 (a per-frame double buffer), not an area slot |
| The area switch deletes the wrong slot's actors (004EF004 / 004C4FF8 / 004C505C / 004ECDE8) | read against the EU machine code; gdb: which actors are deleted at the switch (f=466) | all equal to the ARM; the 117 deleted actors are the castle area's (NpcSoldier, Impa, its MapField / MassTree / MassGrass...) - correct |
| New-area actors get the old slot tag (+0x2D4) and are deleted with it | gdb: area +0x6A at every 004ED00C construction | new actors are created with tag 1 (correct); the actor manager's +0x3DBEC is NOT the tag (only flips at the end) |
| "No actors are created for the new area" | hook on 004C4884 only | wrong: that hook missed the placement path; 004ED00C shows 47 actors created at f=430-432 (3 MapField, MassTreeApple, AreaLoad, NpcMaple...) |
| The new area's resources fail to load | `ALBW_RES_TRACE=1` (00504D48 log, kept) | all load: MapActor/fld_o_2B.bch, fld_o_2C_low, fld_o_33_low, bg_*, ch_* non-NULL |
| (finding) | `ALBW_VIS_TRACE=1` + `ALBW_RENDER_DUMP` | the new area's MapField model is listed and submitted, but its terrain draw runs with **0 textures bound** (`prog 3/40 tex 0`, full screen) instead of several `prog 3/40 tex 3` draws (good frame: fresh yard). This is the open lead |
| Material texture blobs are patched after the one-time decode (sdk/h3d.c decodes once), re-decode when the words change - checked at execution (render ext_call) | 63 re-decodes | crash at the area switch: executed CALLs of freed / reused blobs re-decoded from stale arguments |
| Same, record time, VRAM words as the source | | dark everywhere - **but this run (and the next) did not load the state at all** ("func_003CC230 was running and changed": editing 003CC230 made the converter refuse the state); the frames were a plain boot. Fixed by adding 003CC230 to ss_convert never_blocks |
| Same, record time, staging copy as the source (as the decoder reads) | with the state really loaded: `ALBW_H3D_REDECODE=1` | 1 re-decode, then a crash; default off. The code stays as an opt-in experiment (sdk/h3d.c h3d_blob_check). Not shown yet that the game patches material blobs at all |
| Adding a field to the renderer's Blob record | loading an older state | broke the renderer (layout in pmem is restored by value from states: dark + slow). Never change pmem record layouts; new data goes into new pmem tables / statics |

Next: dump the house terrain's material texture blob (h3d `ALBW_H3D_MODELMAP`) after the switch vs a
fresh scene load - is the unit-enable / address word 0 in game memory, or only in our decode?
