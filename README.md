# ALBW native port (work in progress)

A native Linux (x86-64) build of *The Legend of Zelda: A Link Between Worlds*, in C with an
SDL2 + OpenGL frontend. No emulator: the game's ARM11 code is **statically recompiled** to C
and linked with a high-level reimplementation of the 3DS system (kernel, services, GPU).

The matching decompilation in [`../albw-decomp-ai`](../albw-decomp-ai) is used as a
**reference only** (function table, USA<->EU address map, decompiled C). This repository
contains no game code, data or assets: everything game-derived is generated locally from
your own ROM into `build/` and is never committed.

## How it works

| Part | Path | What it does |
|---|---|---|
| Recompiler | `recomp/armrecomp.py`, `recomp/thumb.py` | ARMv6K + VFPv2 + Thumb-1 machine code -> one C function per guest function, exact per-instruction semantics |
| CPU model | `runtime/cpu.h`, `runtime/cpu_ops.h` | guest registers/flags/VFP state, flat 4 GiB guest memory, instruction helpers |
| Kernel HLE | `runtime/kernel.c` | svc calls: memory, threads (host threads + one big lock), events, mutexes, semaphores, timers, address arbiters |
| Services HLE | `runtime/ipc.c` | IPC: `srv:`, the GSP interrupt queue / framebuffers; everything else is a logged stub |
| Frontend | `runtime/main.c` | SDL2 window, OpenGL 3.3 presentation of both screens, 60 Hz vblank |

Function entries come from the decomp's function table plus: branch targets outside known
functions, every absolute code pointer in the image, ARM->Thumb stubs, the C++ static
constructor table, and a linear sweep of the Thumb library code.

## Build and run

Needs: python3, gcc or clang, cmake, ninja (optional), SDL2, GLEW, OpenGL.

```
ALBW_CODE_BIN=/path/to/code.bin ./build.sh      # recompile + build (about 2 min)
./build/albw /path/to/code.bin                  # --trace logs every svc / IPC request
```

`code.bin` is the decompressed `.code` of a decrypted ROM. Extract it with the decomp's
`tools/extract_code.py`. Right now the EU retail build (`CTR-P-BZLP`) is used, with the
decomp's `shared/eu_usa_map.json` to reuse its function table; `build.sh` defaults to
`$ALBW_DECOMP/rom/eu_code.bin`.

## Status

- Whole game recompiles: 29,627 functions (60 Thumb), builds warning-free.
- Boots natively: C runtime init, 1,230 static constructors, thread creation, service
  connections (APT, ndm, cfg, fs, hid, ptm).
- **Stops in APT (applet manager) initialisation**: the service stubs return empty
  replies where the game expects real handles and events.

## Roadmap

1. Services needed to reach the game loop: APT (lock/notification/resume events), fs
   (RomFS read straight from the ROM), cfg, hid (keyboard/gamepad), ptm, ndm.
2. GSP: command queue, memory fills, display transfers -> framebuffers on screen.
3. PICA200 GPU -> OpenGL renderer (shaders, textures, the 3DS fixed-function combiners).
4. DSP audio.
5. Replace recompiled functions with readable C from the decomp, one at a time.
