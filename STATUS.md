# Where the port stands

Last updated 2026-11-21 (release **v0.2.3**). Details of every fix:
[native/BOOT_LOG.md](native/BOOT_LOG.md).

## Releases

| Version | Date | Downloads | Notes |
|---|---|---|---|
| [v0.2.3](https://github.com/spacestate1/albw-native/releases/tag/v0.2.3) | 2026-11-21 | Linux AppImage, Windows zip (experimental) | merged-wall camera and crash at wall ends, dungeon map cursor, effect sort, stub review |
| [v0.2.2](https://github.com/spacestate1/albw-native/releases/tag/v0.2.2) | 2026-11-20 | Linux AppImage, Windows zip (experimental) | bell warp crash, bell selectable in single-screen mode, x87 stack guard |
| [v0.2.1](https://github.com/spacestate1/albw-native/releases/tag/v0.2.1) | 2026-11-20 | Linux AppImage, Windows zip (experimental) | Windows build added; same Linux game as v0.2.0 |
| [v0.2.0](https://github.com/spacestate1/albw-native/releases/tag/v0.2.0) | 2026-11-20 | Linux AppImage | Eastern Palace boss, wall merging, square glows fixed |
| [v0.1.0](https://github.com/spacestate1/albw-native/releases/tag/v0.1.0) | 2026-11-19 | – | first tagged build |

Needs the decrypted European ROM:
`0487 - Legend of Zelda, The - A Link Between Worlds (Europe) (En,Fr,De,Es,It) Decrypted.3ds`
(748,580,864 bytes, SHA-1 `4d2da91fa0edef9eef07e471527461396cc3faf2`). USA / Japan: not supported
(the code is tied to EU addresses; supporting USA would take weeks: a data-address map, the
differing functions and every address in `native/`).

## What works

- Boot, title, file select, in-game saving and loading; save states (F6 / F7) that survive updates.
- The early story, the overworld, houses, items, enemies, combat, game over.
- **Eastern Palace and its boss (Yuga)**: he flies into the walls, travels along them as a
  painting when Link moves around, comes out, raises the frames and barrier, summons soldiers.
- **Wall merging** (Link): the 2D painting is drawn, walks left and right, wraps corners, stops at
  wall ends, steps out with A. How it works: [native/PAINTING.md](native/PAINTING.md).
- Pits: enemies knocked into them fall and die.
- Particle glows are soft again (they were solid squares in states from older builds).
- Single-screen mode (F9): the file select shows the save list; long cutscenes no longer flip to
  the map; Tab / right-stick click flips screens; D-pad + A on the bottom screen.
- Late-game saves load (Death Mountain, Lorule).
- Language: `ALBW_LANGUAGE=1..5` (1 English, 2 French, 3 German, 4 Italian, 5 Spanish; default 1).

## Recent work (2026-11-19 / 20)

| Entry | What |
|---|---|
| 160am | Ubuntu first-frame crash; warp-hole crash (ARM member-function pointers) |
| 160an | Armos stuck mid-fall (a "grounded" test returned its argument) |
| 160ao / 160at | single-screen: save list at the file select; no map flips in cutscenes |
| 160ap / 160aq | save states keep loading after a relink |
| 160ar / 160as | Yuga's fight starts (wall path, walker reads, wall slice, double sqrt cast) |
| 160av | model bounding spheres stored as values (radius 1.3 became 1) |
| 160aw | wall painting drawn: segment-length test, strip reset flag, runtime GPU command blocks, multi-buffer vertex layouts, painting draw item (matrix as uniform op, texture bound after load), left / right direction |
| 160ax | square particle lights: stale effect texture blocks in old states repaired on load |
| 160ay | painting visibility test got its draw-layer argument (stayed hidden in some sessions) |
| 160az | Windows build (below) |
| 160ba | single-screen: the bell (map page) is selectable; x87 stack guard no longer misses a full stack (NaN floats after a leak) |
| 160bb | crash after a bell warp (bone name "Head" passed as an address); same bug fixed for "Melt" |

## Windows build (experimental)

`windows/build_windows.sh` (run on Linux) → `build/ALBW-windows.zip`. `ALBW.exe` loads the Linux
i386 program like Linux's own loader would and gives it Windows versions of the C library, pthread
and POSIX calls; SDL3.dll; a bundled Mesa OpenGL fallback. Details: [windows/README.md](windows/README.md).

- Tested under Wine 11: title, file select, saves, audio (WASAPI), controllers, GPU and Mesa paths.
- **Not tested on real Windows hardware.** Under Wine it gets slow once many objects are drawn
  (1–2 fps at the file select's 3D preview; probably Wine's 32-bit OpenGL bridge). Needs a report
  from a real Windows PC.
- Save states do not move between the Linux and Windows builds; in-game saves do.

## Open issues

| # | Issue | Needs |
|---|---|---|
| 1 | Dust effect when Link first leaves his house | a save state at the house door |
| 2 | Graveyard: enemies / meshes visible through gravestones | a save state in the graveyard |
| 4 | Rods (fire, ice, tornado, sand) on bushes | a save state near bushes with the rods |
| 10 | Winning the Yuga fight and the scenes after it (video ref. from 9:00) | a state late in the fight |
| 12 | Slot 4 event close-up shows a magnified quarter view | a state right before the close-up |
| – | The sage's large pink aura (boss cutscene) is faint | – |
| – | Fire / Tornado Rod flame cones not drawn (effect program missing) | – |
| – | Windows: speed on real hardware unknown | a Windows tester |
| – | Most dungeons after the Eastern Palace untested | play-testing |
| 14 | Slot 2 Zora's River crash (Shady Guy scene): not reproduced after the x87 fix | a report if it comes back |
| 18 | Merge camera: wall-end spin fixed (160be); the slot 6 doorway wrap still to re-check | – |
| 19 | Terrain drawn as dark mud with blue tiles (screenshots/world-error.png) | a save state there |
| – | Sanitizer build: runs the castle route clean (160bd); cannot load save states from the normal build | routes from boot to more areas |

Not bugs, but old save states: states saved by older builds can carry stale data (e.g. the
"Nāy" A-button label after merging in slot 6); playing from an in-game save fixes it.

## Working notes

- **Build:** `./build.sh` (first time with the ROM path). Relink only:
  `ALBW_FCONV_INTERIM=0 ALBW_JOBS=2 tools/link.sh`.
- **Experiments go to a separate binary:** `ALBW_LINK_OUT=build/albw-dbg tools/link.sh`. The player
  runs `build/albw`; relinking it mid-session makes states saved meanwhile depend on a build that
  disappears (slot 5 was lost that way: states taken inside a function whose code changed cannot
  load).
- **Save-state compatibility:** avoid changing functions that threads park in (the thread start `0067628C`, `sdk/h3d.c`
  `dec_finish` / `dec_write`, `platform.c` `plat_end_frame`) unless needed.
- **Machine limits:** builds with `ALBW_JOBS=2`; one game or gdb run at a time.
- **Test harness:** `ALBW_ROUTE="at 60;load N;..."` (`load` is 0-based: user slot N = `load N-1`),
  `SDL_VIDEO_DRIVER=offscreen`, `ALBW_SHOT=<frames>` + `ALBW_SHOT_DIR`, `ALBW_KEEP_AFTER_SCANOUT=1`.
  Castle route to a wall merge: `ALBW_PRESS='1800:START,2200:A,2700:A'` and
  `ALBW_ROUTE="at 3300;scene DungeonEast 1 0;wait 300;goto -6 -4.0 0.3;hold CUP 60;wait 10;press A 6"`.
- **Debug switches added recently:** `ALBW_WALK_TRACE`, `ALBW_CALLX_TRACE`, `ALBW_TEXWORD_TRACE`,
  `ALBW_PASS_TRACE`, `ALBW_SKIP_TEX=<hex>`, `ALBW_SKIP_EFT`, `ALBW_SKIP_DRAW`, `ALBW_H3D_CALL_TRACE`.
- **Releases:** `tools/make_release_appimage.sh` (podman, Ubuntu 22.04 container) and
  `windows/build_windows.sh`; tag, then `gh release create`.

## Next steps

1. Get the Windows build run on a real Windows PC; fix what shows up (speed first).
2. The open issues above, as save states for them arrive.
3. Finish and verify the Yuga fight's ending and the scenes after it; then the next dungeons.
