# A Link Between Worlds – native Linux port

A native Linux build of *The Legend of Zelda: A Link Between Worlds* (Nintendo 3DS), made from
decompiled game code. The game logic runs as real C on your PC. Graphics, sound, input and file
access are rewritten for Linux (SDL3 + OpenGL). There is no emulator.

**Work in progress.** The game boots and is playable through large parts of the story. Expect
bugs, glitches and crashes. See [Status](#status).

## You need your own game

This repository has **no game data**: no ROM, no keys, no assets, no saves. You need a
**decrypted** dump of the **European** release that you made yourself.

Tested dump:

| | |
|---|---|
| Title | The Legend of Zelda: A Link Between Worlds (Europe) (En,Fr,De,Es,It) |
| Product code | CTR-P-BZLP, version 2 |
| File | decrypted `.3ds`, 748,580,864 bytes |
| SHA-1 | `4d2da91fa0edef9eef07e471527461396cc3faf2` |
| MD5 | `b0bc337f96e8aaa4ab94aef91c3b1f6b` |
| CRC32 | `07004847` |
| `.code` SHA-1 (what the build checks) | `2aeee593a695f2ce1196b844026567f227472f0b` |

The file hashes depend on the dump and decryption tools. A different file can still work if its
`.code` matches: the build checks that and stops if it does not.

Not supported (yet): the USA release (`.code` SHA-1 `e6ab7d66ee62e879248b0660aaf38d22202e604b`)
and the Japanese release. Their code sits at different addresses.

## Build

Supported: Fedora, Ubuntu, Linux Mint, Debian, Arch, openSUSE (x86-64).

```
git clone <this repository> albw-native
cd albw-native
./build.sh /path/to/your/game.3ds
```

`build.sh` installs the packages it needs (asks for sudo), builds a 32-bit SDL3 if your
distribution has none, reads the game code from your ROM, then compiles and links. The first
build takes a while (about 26,000 source files). Rebuild later with `./build.sh` (the ROM path is
remembered in `~/.config/albw-port/rom_path`). Already have the packages? Use `--no-deps`.

The game is a 32-bit program for now, so the build uses 32-bit libraries. A 64-bit build is
planned.

## Run

```
./run.sh
```

Saves go to `~/.local/share/albw-port/save`. The 3DS game saves (`Save_*.bin`) are the game's own
format.

### Controls (keyboard; rebind in Esc > Controls)

| 3DS | Key | | 3DS | Key |
|---|---|---|---|---|
| Circle pad | arrow keys | | L / R | Q / W |
| A | X | | Start | Enter |
| B | Z | | Select | Backspace |
| X | S | | D-pad | I J K L |
| Y | A | | Touch screen | mouse on the bottom screen |

| Key | Action |
|---|---|
| Esc | pause menu (window, layout, filtering, reset game, quit) |
| F1 | input menu |
| F2 / F3 / F4 | screen layout preset / layout editor / swap screens |
| F5 | one window or two windows |
| F6 / F7 | save state / load state |
| F9 | single-screen mode on / off |
| F10 | widescreen (16:9 top screen: a wider view, not stretched) on / off |
| F12 | screenshot of both screens (`~/.local/share/albw-port/screenshots/`) |
| Tab (controller: right-stick click) | single-screen mode: show the other screen (items, map) and back |

In single-screen mode Start brings up the bottom screen (map, Gear, Items) and Select opens the
game's Pause. Rebind any key or button in Esc > Controls (saved to `~/.config/albw-port/input.cfg`).

A game controller works too.

## Status

Tested and working:
- boot, title, file select, saving and loading
- the opening and early story scenes, the overworld, houses, the blacksmith
- items and equipment, enemies, combat, game over
- loading late-game saves (Death Mountain, Lorule)

Known problems:
- sound in gameplay is still being worked on
- some effects (Tornado Rod, fire, trails) draw wrongly
- some cutscenes may stop or crash: please report them
- see [MISSING.md](MISSING.md) for the full list

## How it works (short)

- `decomp/` – the decompiled game code (from the matching decompilation project and Ghidra),
  converted so it compiles natively. Built with `tools/build_decomp.py --snapshot decomp`.
- `native/` – everything written by hand: the platform layer (window, input, audio), the
  replacements for the 3DS system libraries, the renderer, and fixes for decompiled functions
  that were wrong (`native/compilefix/`, each with a note on what was wrong).
- `tools/` – build and analysis scripts.
- The game data (strings, tables) is generated from your ROM at build time and is never stored.

Development notes: [native/BOOT_LOG.md](native/BOOT_LOG.md) (every bug found and how it was
fixed), [native/DIDNT_WORK.md](native/DIDNT_WORK.md) (what was tried and failed),
[native/SCRIPTED_EVENTS.md](native/SCRIPTED_EVENTS.md) (all cutscenes, with test status).

### Rules the port follows

- No emulation: no CPU interpreter or recompiler, no GPU or OS emulation. 3DS library calls are
  replaced function by function with native code.
- Shaders are hand-written GLSL; GPU command lists are never interpreted at run time.
- No game data in the repository.

## License

The port's own code (`native/`, `tools/`, scripts) is under the MIT license: see
[LICENSE](LICENSE). It does not cover the game itself or its data.

## Legal

This is a fan project for preservation and study. It is not affiliated with or endorsed by
Nintendo. *The Legend of Zelda* and *A Link Between Worlds* are trademarks of Nintendo. You must
own the game and dump it yourself; do not ask for ROMs or keys.
