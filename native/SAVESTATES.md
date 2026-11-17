# Save states

Keys: F6 save, F7 load, F8 / Shift+F8 next / previous slot (10 slots). Esc menu: File > State slot,
Save state, Load state. The outcome shows in the window title for ~3 s and on stderr.
Headless test: `ALBW_SS_AT=<frame>:save|load:<slot>[,...]`.

States are files: ~/.local/share/albw-port/states/slot<N>.state (ALBW_STATE_DIR overrides), zlib
compressed (~17 MB), loadable by any later run of the same binary AND by later builds: a state of
another build is converted on load (section "Other builds" below). The slot list shows
"(older build)" for those.

Why that works across runs (runtime/pmem.c): everything a state points into is at a fixed address
in every run - the non-PIE binary, VRAM at its 3DS address, and areas reserved first thing in main:
game heap 0x40000000, device memory 0x44000000, an arena 0x48000000 for the native objects the game
state refers to (kernel objects, scheduler records, command lists / buffers, display buffers, model
vertex layouts and blob ops, decoder tables), thread stack slots 0x58000000 (slot 0 the main thread;
each slot also holds the thread's SDK TLS block and wait record). Saved stacks end at each thread's
entry frame, so libc's thread-start frames (different per run) are never part of a state; game
threads end with pthread_exit, never returning into them. The renderer's op pool, lighting LUT /
material registries and the light side table are saved by value. Loading a slot with no live
thread starts one on that slot ("vessel") which restores itself. The stack-protector canary of the
saving run is carried over (restored frames hold it).

What a state holds (native/runtime/savestate.c):
- game memory: heap + device memory (sdk/memory.c), VRAM, the game's data/bss and the static data
  of every native module that holds game state (`build/albw.ssmap`, from the link map by
  tools/gen_ssmap.py: host-side modules - platform, renderer, audio output, profiler - excluded);
- the kernel (sdk/os.c): objects by value, handle slots, scheduler lists, address wait queues, the
  game clock (tick offset), and per game thread its registers, live host stack and thread-locals;
- nngx command lists and display-buffer records (sdk/gfx.c), file handles (sdk/fs.c), the
  nn::snd / mixer voices (registered ranges);
- the main thread's registers and stack at the frame end.

How: requests run at the start of plat_end_frame on the main game thread (it holds the app core).
Every other game thread is parked at its next wait (os.c ss_park: scheduler turn, address wait,
handle wait), capturing its stack; the sound thread is held between frames (albw_ss_host_*). Load
writes everything back, each thread jumps back into its saved park (side stack, stack bytes copied
back, ss_ctx.c), the main thread returns from its saved frame end, the renderer re-reads textures.
Kernel objects / scheduler records are never freed so saved pointers stay valid. A load fails
cleanly (nothing changed) if a saved game thread has ended or the command lists changed.

## Debug switches and saved statics (2026-11-17)
Statics of every module that is not excluded in tools/gen_ssmap.py (game code, sdk/eft.c, sdk/h3d.c, ...) are
restored with a state, including `static int x = -1; if (x < 0) x = getenv(...)` debug caches: after a load such a
switch has the value it had when the state was SAVED (usually off). Read the environment on each call in those
modules (sdk/eft.c ALBW_EFT_SETLOG does), put the switch in an excluded module (render/*: ALBW_EFT_FRAG, ALBW_RENDER_DUMP
work after a load), or set the static from gdb after `render_ss_loaded`.
States of other builds are converted on load (below); only states saved before 2026-11-17 (no
trailer) and states whose saved stacks run code that changed still need a new route run
(tools/route_vane.sh makes one at the weather-vane save prompt in ~1 min).

## Other builds (runtime/ss_convert.c, 2026-11-17)

A relink moves code and native statics. Loading a state of another build rewrites it in memory first:
- The game's generated data (vtables, tables, strings, globals) is at fixed addresses (tools/gen_data.py
  sections .albw_ro / .albw_rw / .albw_zi, tools/link.sh --section-start 0x30000000 / 0x30100000 /
  0x30200000): pointers into it never change.
- Saving appends a trailer: the record layout, the saved ranges (address, size, name), the binary's
  section list and symbol table, its .rodata, and the code of every function with a return address on
  a saved stack (~2 MB compressed).
- Words pointing into the old binary are mapped to the same symbol + offset here (locals by source
  file + name). Heap-like parts (game heap, arena, renderer pools, statics) hold asset bytes that hit
  the binary's range by chance, so there only exact function starts, saved statics and .rodata
  objects / string starts count; stacks and register contexts also map return addresses, when the
  function is unchanged (same size; differences only in relocated operands). String literals are
  matched by their bytes.
- Static data moves symbol by symbol into this build's ranges; the fixed game data and the named
  ranges (sound voices) move whole.
Refused (with the reason in the title bar / stderr): states without a trailer, a changed function on a
saved stack ("<name> was running and changed in this build"), a changed record layout. Debug:
ALBW_SS_CONVERT_LOG=<file> lists every rewritten word (part, offset, old -> new, kind, symbol).
Checked: a state at the vane save prompt from build A loaded in build B (new code in platform.c, new
statics in sdk/eft.c) and build C (both reverted): 6,579 pointers, 120 return addresses, 6,179 strings
remapped, 831 KB statics moved; Save -> "Saving complete." in both.
Note: the fs archive root is saved by value, so "Save" after loading writes into the ALBW_SAVE_DIR of the
run that made the state.
