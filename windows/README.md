# Windows build

`windows/build_windows.sh` (run on Linux) makes `build/windows-release/` and `build/ALBW-windows.zip`:
a folder that runs on 64-bit and 32-bit Windows 10 / 11 by double-clicking `ALBW.exe`.

## How it works

The Windows version runs the same game program as Linux: `albw` in the package is the Linux
32-bit build (ELF), and `ALBW.exe` (`windows/loader.c`) loads and starts it, like Linux's own
program loader would. Nothing in the game is compiled twice, so Windows gets every fix as soon
as Linux does.

Why not compile the game for Windows directly: the 26 000 decompiled game objects are built as
Linux position-independent code (GOT / PLT relocations that Windows object files cannot express),
and the build tools (`tools/link.sh`: symbol renames, wraps, the x87 and fall-through checks, the
save-state map) all work on ELF files. Porting that pipeline would take weeks; the loader is about
a thousand lines.

What `ALBW.exe` does at start-up:

1. **Reserves the fixed addresses** before any DLL loads: the program image (0x08048000), VRAM
   (0x1F000000), the game data (0x30000000) and the game memory (0x40000000 - 0x5C000000). The game
   relies on these addresses (save states store pointers).
2. **Copies the program's segments** to their addresses.
3. **Patches the stack-protector reads.** Linux code reads its stack canary from the thread pointer
   (`mov %gs:0x14, reg`); Windows has no usable `%gs`. The ~12 000 reads are rewritten to read a
   constant from Windows' shared user page (0x7FFE026C); the one write becomes no-ops.
4. **Fills the program's imports** (its PLT / GOT slots) with Windows implementations:
   - `SDL_*` from `SDL3.dll` (the official 32-bit MinGW build);
   - zlib, linked into `ALBW.exe`;
   - the C library, pthread and POSIX functions: the `lx_*` functions in `loader.c`, which keep
     the Linux structure layouts and constants (glibc's `struct stat`, `O_CREAT = 0x40`, a 24-byte
     `pthread_mutex_t`, 32-bit `time_t`, ...).
5. **Runs the program's constructors and `main`.**

Differences between Linux and Windows code that the loader bridges:

- **OpenGL calling convention**: Windows GL functions are `__stdcall` (they pop their own
  arguments); the game calls them as `cdecl`. `SDL_GL_GetProcAddress` returns a small thunk per
  function that restores the stack pointer after the call (`gl_thunk`).
- **Struct returns**: Linux code expects a function returning a struct to pop the hidden result
  pointer; MinGW code does not. `SDL_GetGamepadGUIDForID` / `SDL_GetJoystickGUID` go through
  adapters (`SRET1`).
- **Stack alignment**: Linux code may assume a 16-byte aligned stack; every call from Windows code
  into the game (thread starts, the audio callback, `qsort`, constructors, `main`) goes through
  `call_elf`, which aligns it.
- **Thread-local variables**: the native layer of the Windows variant is built with
  `-femulated-tls` (`native/runtime/emutls.c`), so it never touches `%gs`.
- **Own stacks**: game threads run on fixed stacks (`pmem.c`); when a thread switches to one, the
  loader updates the thread's stack limits in its TEB so stack probes and exception dispatch in
  Windows DLLs accept it (`run_on_stack`).

The game program for Windows is linked by `tools/link.sh` with
`ALBW_EXTRA_CFLAGS="-femulated-tls -fno-stack-protector -DALBW_WINDOWS"` into `build/win/albw`
(objects in `build/nobj-win`). `-DALBW_WINDOWS` switches off Linux-only code in the native layer
(the NVIDIA / Wayland driver choice in `platform.c`).

## OpenGL

At start-up the loader asks Windows' OpenGL for its version on a hidden window. Microsoft's built-in
"GDI Generic" renderer (OpenGL 1.1: no GPU driver, virtual machines, Remote Desktop) cannot run the
game; then SDL is pointed at the bundled software renderer (`mesa/opengl32.dll`, Mesa llvmpipe from
mesa-dist-win; slow, but it runs). `ALBW_SOFTWARE_GL=1` forces the software renderer, `=0` the
system driver.

## Files and folders on Windows

- ROM choice: `%USERPROFILE%\.config\albw-port\rom_path` (a file dialog asks on the first start;
  `ALBW_ROM=<path>` overrides).
- Saves, save states, settings, screenshots: `%USERPROFILE%\.local\share\albw-port\` and
  `%USERPROFILE%\.config\albw-port\` (the same layout as on Linux).
- Log: `albw.log` next to `ALBW.exe` (or `%USERPROFILE%\.local\share\albw-port\albw.log` when that folder is not writable), not written when started from a console
  (`ALBW_CONSOLE=1` keeps the console).
- Crashes: the loader logs the faulting address and the game functions on the stack.

## Limits

- Save states made by the Linux build do not load in the Windows build and the other way round
  (the native layer is compiled differently). In-game saves (the game's own save files) are
  shared: copy `saves` between the two.
- 32-bit program: up to 4 GB of address space on 64-bit Windows (`--large-address-aware`).

## Testing on Linux

With Wine (32-bit support) and a virtual display:

    WINEPREFIX=/tmp/wp xvfb-run -a wine build/windows-release/ALBW.exe

`ALBW_ROUTE`, `ALBW_SHOT` and the other debug variables work as on Linux (paths as `Z:/...`).
