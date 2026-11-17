# What is missing - checklist

Tick an item (`[x]`) when it is done and verified (say how, and the BOOT_LOG entry). Details of
each area: PLAN.md "Critical missing pieces"; disproven causes: native/DIDNT_WORK.md.

## Correctness of the decompiled game
- [x] EU/USA map fix: no function runs another function's body (BOOT_LOG 119, tools/stale_map_scan.py: 0)
- [x] The six missing functions (tripwire stubs) resolved (BOOT_LOG 119)
- [x] Matched sources whose stripped `__asm` blocks computed values fall back to Ghidra (BOOT_LOG 120)
- [x] Caller-side lost-float audit + fall-through inlining (BOOT_LOG 123; tools/proto_mismatch_scan.py, tools/fallthrough_scan.py)
- [ ] Fall-through: long ones still to check (00108F28, 00151214, 0016739C, 00435610, 004BC850, 004FD268, 00560A68, 0058FC28) and the ~500 Ghidra-first pairs in general
- [ ] Review the 179 possible lost stack stores (tools/stack0x_scan.py)
- [ ] Check the 89 matched functions lost_float_scan.py could not parse (float arguments in s0/s1)
- [ ] Remaining bogus call targets in build/stubs.c (func_1FF80000, func_FE6533C4, func_FE6D27C8, func_FEADFFF6, func_FEAE0002): find the mis-converted calls
- [ ] Ghidra intrinsics still linked (coprocessor_function / coprocessor_load): find their callers

## Graphics
- [x] Particles: emitter sets created (BOOT_LOG 120)
- [x] Particles: drawn - title fairy lights match Azahar (BOOT_LOG 121)
- [x] Particles: the dream's effects run without crashing (BOOT_LOG 121)
- [ ] Particles: dream - the smoke at frame ~3300 is purple where Azahar's is red (colour / blending / texture format)
- [ ] Particles: dream - the red nebula behind Link in the close-ups (frames ~3600-4300) is missing (black)
- [ ] Particles: stripe / trail programs (PTCL programs 14, 17, 19: entry 0x79) - GLSL to write; their draws are dropped now
- [ ] Particles: check effects in gameplay (sword, grass, splashes, item effects)
- [ ] Fog: implemented (BOOT_LOG 122) - verify against Azahar in a fogged scene
- [ ] Shadow-marking draws on the title flyover (shadows missing there)
- [ ] Other raw GPU writers not translated yet: 00387E58, 00171510 (find the rest with ALBW_RAW_DUMP=<frame>)
- [ ] Fence flicker on the title flyover
- [ ] "SoliderPaint" colour variant
- [ ] Grass ~1-2 % darker than Azahar
- [ ] Water look (deeper blue / highlights in Azahar)

## Builds and tools
- [x] Other false pointer relocations in game data: 29 odd targets checked (BOOT_LOG 134): 6 fixed (Shift-JIS text, "Jump", a number table), 23 are real pointers into tail-merged strings
- [x] Save states load in later builds (runtime/ss_convert.c, BOOT_LOG 132; refused only when a function on a saved stack changed)
- [x] Link kept walking down by himself after Gulley's "spin the vane" line: 002D8484 DemoWalkToTarget lost stores (BOOT_LOG 133)
- [x] 64-bit build: tools/link64.sh has wraps.txt / names.txt / zlib / fixed game data (BOOT_LOG 134)
- [ ] 64-bit boot: stops at frame 184 (NULL in func_00394794) - build/decomp64 objects date from 2026-11-16; needs the 64-bit reconversion (ALBW_V4_STAGE=1 tools/build_decomp64_v4.sh) with master's fixes, then BOOT_LOG64
- [ ] link64.sh: rebuild platform.c when its included files change (as link.sh)
- [ ] Function names: extend native/names.txt as functions are identified (51 names so far)

## Gameplay (untested beyond the first yard)
- [x] Link's head missing outdoors: CONCAT44 of SQRT doubles converted values (BOOT_LOG 126, checked by the user)
- [x] Follow-Gulley dash (Link slides into Gulley) + the camera pan after it: small-integer return read as int (0054B260 u8), BOOT_LOG 128, checked in a route run (frames 10360-10690 match Azahar)
- [x] Walking off the yard's edge before spinning the vane loops (same cause: BOOT_LOG 133)
- [x] Dream: Link holding a sword and shield is correct (Azahar shows the same)
- [ ] Dream: nebula background missing behind the Triforce and Link (Azahar: red clouds); monster shot shows pinkish streaks instead of dark red clouds; Link's shield not visible in the close-up (eft emitters end early: PLAN handover)
- [x] House: at "Wake up!" Gulley turns to face the screen (dropped look-at argument in 0030D6D0, BOOT_LOG 129; route run frames 6290-6410)
- [x] Weather-vane save prompt never came up / crashed: gen_data relocated two kinds of non-pointer words - the action-info table's class|anim words (action 0x95 'touch telephone' + 14 more rows: tools/gen_data.py NOT_POINTER_TABLES) and 3-character strings ("Out": tools/gen_data.py short3). Verified: route run touches the vane, map message, Save -> Saving complete, Save_0.bin rewritten, Continue spawns Link at the vane (BOOT_LOG 131)
- [x] Title, new game, name entry, opening dream, Link's house, leaving the house, Gulley's vane line
- [x] Save file written on new game, loaded with Continue
- [x] Save at the weather vane (BOOT_LOG 131; tools/route_vane.sh makes a state at the prompt)
- [x] Weather vane sleep bubbles (eft draw range, BOOT_LOG 130)
- [ ] Weather vane bird body: grainy / blocky texture vs Azahar (not filtering)
- [ ] House candle flame appears briefly when Link gets off the bed, then vanishes (recheck after BOOT_LOG 130)
- [ ] Hyrule field / town
- [x] Sword: slash, charge, spin (BOOT_LOG 141)
- [x] Items: bombs, bow, boomerang, hookshot, fire / ice / sand / tornado rods, hammer, lamp, net, hint glasses (BOOT_LOG 142-143)
- [ ] Item effects render wrong: fire rod flame dark red, black streaks behind projectiles, tornado = huge triangles (particles, BOOT_LOG 143)
- [ ] Combat against enemies
- [x] Items and the bottom-screen menus (Gear / Items): open, select, equip to Y (BOOT_LOG 140-143)
- [ ] Wall merging (FlatLink models)
- [ ] First dungeon
- [ ] Lorule
- [ ] Sound effects / music in gameplay

- [x] Pick up / carry / throw a pot (BOOT_LOG 136), bushes, read signs, Gear / Items menus by touch (BOOT_LOG 138)
- [ ] Menu open: blurred top background shows the bottom menu's shapes (BOOT_LOG 138)
- [ ] 27 native decompiled files read hidden register inputs (in_r0..in_r3) that only work with leftover stack values (BOOT_LOG 137 / DIDNT_WORK): give each its real parameters
- [ ] Save states from an older build: text built after the load uses wrong glyphs (BOOT_LOG 136)

## Frontend
- [x] Esc menu with window / layout / filter / fullscreen / resolution (BOOT_LOG 114, 116)
- [x] Save states in memory (F6 / F7 / F8, File menu; BOOT_LOG 124, checked by the user)
- [x] Save states on disk (survive a restart; BOOT_LOG 125, checked by the user)
- [ ] SDL X11 window not appearing on this desktop (Wayland works: SDL_VIDEO_DRIVER=wayland)
- [ ] USA ROM: untested (EU is the supported ROM)
