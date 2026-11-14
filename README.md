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
- Graphics: the game's GPU-command producers are replaced by native OpenGL code. Model files whose
  material state is stored as prebuilt GPU command blobs are decoded **once, at load time**, into
  OpenGL state (asset conversion); GPU commands are never interpreted at runtime.
- Shaders are hand-written GLSL translations of the game's GPU shader programs; shader bytecode is
  never machine-translated (neither at load time nor at runtime).
- The game's data and assets come from your own ROM at build/run time and are never committed.

## Rule: the finished game is 64-bit

The released build targets x86-64. A 32-bit x86 build is only an intermediate step while the
decompiled code still assumes 4-byte pointers. Every cleanup must be 64-bit clean: real pointer
types, no pointers stored in 32-bit integers, no pointer-size-dependent offsets, and resource
files converted to native structures instead of having 32-bit offsets patched into pointers.
The tooling builds both targets so 64-bit health is tracked from the start.

The matching decompilation in [`../albw-decomp-ai`](../albw-decomp-ai) is the source of the
game code and stays a separate project; this repository holds the native build, the platform
layer and the SDK replacements.

An earlier experiment (static ARM->C recompilation + 3DS OS emulation) was removed because it
breaks the no-emulation rule; it is in git history only.

## Road to a running build

1. **Native compile**: every decomp source (matched + Ghidra-derived) builds with a native
   compiler, first for 32-bit x86 (pointer size and struct layouts as on the 3DS), tracked for
   x86-64 at the same time.
2. **Native link**: one definition per function, consistent names/signatures (C and C++),
   the ~130 functions without source written.
3. **Data**: the game's `.rodata`/`.data`/`.bss`, vtables and pointer tables as linkable data,
   generated locally from the ROM, with pointers turned into symbol references.
4. **SDK replacement**: identify the `nn::` library functions and reimplement them natively
   (file system -> RomFS from the ROM + host save dir, input -> SDL2, graphics -> OpenGL,
   audio -> SDL2 audio, threads -> pthreads).
5. **Boot to gameplay** (32-bit intermediate build).
6. **64-bit**: clean every function into typed, pointer-size-independent C; native resource
   structures; switch the release build to x86-64.
