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
- [ ] 64-bit build: tools/link64.sh needs native/wraps.txt (eft / fog wrappers) and native/names.txt support
- [ ] link64.sh: rebuild platform.c when its included files change (as link.sh)
- [ ] Function names: extend native/names.txt as functions are identified (51 names so far)

## Gameplay (untested beyond the first yard)
- [x] Link's head missing outdoors: CONCAT44 of SQRT doubles converted values (BOOT_LOG 126, checked by the user)
- [x] Follow-Gulley dash (Link slides into Gulley) + the camera pan after it: small-integer return read as int (0054B260 u8), BOOT_LOG 128, checked in a route run (frames 10360-10690 match Azahar)
- [ ] Walking off the yard's bottom edge before spinning the vane loops (recheck after BOOT_LOG 128)
- [x] Dream: Link holding a sword and shield is correct (Azahar shows the same)
- [ ] Dream: nebula background missing behind the Triforce and Link (Azahar: red clouds); monster shot shows pinkish streaks instead of dark red clouds; Link's shield not visible in the close-up (eft emitters end early: PLAN handover)
- [x] House: at "Wake up!" Gulley turns to face the screen (dropped look-at argument in 0030D6D0, BOOT_LOG 129; route run frames 6290-6410)
- [ ] B button does not work (save prompt)
- [x] Title, new game, name entry, opening dream, Link's house, leaving the house, Gulley's vane line
- [x] Save file written on new game, loaded with Continue
- [ ] Save at the weather vane (interactive)
- [x] Weather vane sleep bubbles (eft draw range, BOOT_LOG 130)
- [ ] Weather vane bird body: grainy / blocky texture vs Azahar (not filtering)
- [ ] House candle flame appears briefly when Link gets off the bed, then vanishes (recheck after BOOT_LOG 130)
- [ ] Hyrule field / town
- [ ] Combat (sword, enemies)
- [ ] Items and the bottom-screen menus (Gear / Items)
- [ ] Wall merging (FlatLink models)
- [ ] First dungeon
- [ ] Lorule
- [ ] Sound effects / music in gameplay

## Frontend
- [x] Esc menu with window / layout / filter / fullscreen / resolution (BOOT_LOG 114, 116)
- [x] Save states in memory (F6 / F7 / F8, File menu; BOOT_LOG 124, checked by the user)
- [x] Save states on disk (survive a restart; BOOT_LOG 125, checked by the user)
- [ ] SDL X11 window not appearing on this desktop (Wayland works: SDL_VIDEO_DRIVER=wayland)
- [ ] USA ROM: untested (EU is the supported ROM)
