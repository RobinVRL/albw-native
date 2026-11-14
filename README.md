# ALBW native port (work in progress)

A native Linux build of *The Legend of Zelda: A Link Between Worlds* in C with SDL2 + OpenGL,
built **only from decompiled source**.

## Rule: decompilation, no emulation

- Every game function runs as real decompiled C compiled natively. No interpreter, no
  machine-code recompilation, no simulated CPU state.
- No emulation of the 3DS hardware or OS: no PICA200 GPU emulation, no kernel/svc or service
  IPC emulation. The Nintendo SDK libraries linked into the game (`nn::fs`, `nn::hid`,
  `nn::gx`/graphics, `nn::snd`, `nn::os`...) are **replaced at the function level** by native
  implementations on Linux, SDL2 and OpenGL.
- The game's data and assets come from your own ROM at build/run time and are never committed.

The matching decompilation in [`../albw-decomp-ai`](../albw-decomp-ai) is the source of the
game code and stays a separate project; this repository holds the native build, the platform
layer and the SDK replacements.

An earlier experiment (static ARM->C recompilation + 3DS OS emulation) was removed because it
breaks this rule; it is in git history only.

## Road to a running build

1. **Native compile**: every decomp source (matched + Ghidra-derived) builds with a native
   compiler. Target: 32-bit x86 (`-m32`), so pointer sizes and struct layouts match the 3DS.
2. **Native link**: one definition per function, consistent names/signatures (C and C++),
   the ~130 functions without source written.
3. **Data**: the game's `.rodata`/`.data`/`.bss`, vtables and pointer tables as linkable data,
   generated locally from the ROM, with pointers turned into symbol references.
4. **SDK replacement**: identify the `nn::` library functions and reimplement them natively
   (file system -> RomFS from the ROM + host save dir, input -> SDL2, graphics -> OpenGL,
   audio -> SDL2 audio, threads -> pthreads).
5. **Boot to gameplay**, then clean up the Ghidra-derived functions into readable C.
