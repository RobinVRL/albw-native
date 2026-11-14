# native/sdk/memory.c notes

## Boot memory flow (original, USA = EU addresses in 0x001xxxxx)

1. `0x00100E60`: `SetHeapSize(0x60000)` (`0x00100DA4`) -> ControlMemory COMMIT at the fixed
   address 0x08000000. Then the nn::os MemoryBlock manager is set up over that range
   (`0x00101390` -> `0x00103B8C`). A 0x40000-byte MemoryBlock (`0x00101D4C`) carries the nn
   allocator (`0x0010168C`).
2. `0x00100F68` (framework startup):
   `SetDeviceMemorySize((GetAppMemorySize() - GetUsingMemorySize() - 0x60000) & ~0xFFF)`, using
   `0x00102304`, `0x00102290` and `0x001022A0`. Then `sead::HeapMgr::initialize(Arena{size})`
   (`0x0010B47C` -> `0x0010CDB8` -> `0x0010D978`), whose arena is
   `{GetDeviceMemoryAddress(), size}` (`0x0010E0B8` -> `0x0010EE40`), followed by
   `ExpHeap::create` of the RootHeap and `sead::ThreadMgr`. Last comes
   `ExpHeap::create((void*)0x08040000, 0x20000, "RootHeapMemory")`.
3. From then on, every game heap is a sead heap (the decompiled code) inside that memory.

The svc 0x01 wrapper (`0x00101DC4`) has exactly two callers: `0x00100DA4` and `0x00102304`.
State struct at data `0x00714A30` = {device addr, device size, heap size}. Its only users are
`0x00100DA4`, `0x001022F4`, `0x00102304` and `0x0010EE40`. memory.c replaces all four and keeps
that state natively.

## Open items for other owners

- **0x00100F68 uses the literal 0x08040000** for "RootHeapMemory". The 32-bit native binary is
  linked at 0x08048000, so 0x08000000 cannot be mapped. The native decompilation of 0x00100F68
  must pass `albw_os_heap_address() + 0x40000` instead (exported from memory.c: `void
  *albw_os_heap_address(void)`, `uint32_t albw_os_heap_size(void)`). Until then, that call
  creates a heap on unmapped memory.
- **VA->PA translations assume the 3DS layout.** Examples: `0x001139F8` (cmp 0x08000000) and
  DSP/snd code at 0x003DB6FC/0x003DBC50/0x003DF50C/0x003DFAC8 (`cmp 0x14000000; add 0x0C000000`).
  Device memory is now a host pointer, so the graphics/snd replacements must not translate
  addresses this way.
- Decompiled callees that take addresses as `int`, such as `0x00101390`/`0x00103B8C` (MemoryBlock
  manager) and the sead heap internals, are 32-bit only. memory.c passes real pointers.
- `0x0010DB90`/`0x0010983C` reach the current heap through the TLS slot
  (`0x0010E294`, threads area) and `Thread+0x68`. Those offsets are the 32-bit object layouts and
  become field names once sead::Thread is typed.
- sdk_areas.json mislabels some functions:
  - `0x0010EE40` is GetDeviceMemoryAddress, not CriticalSection::unlock.
  - `0x0011629C` is strncmp, not memcmp.
  - `0x001022F4` is GetDeviceMemorySize.
- `0x00111A20` / `0x003E6AA8` (vsnprintf wrappers) are not replaced. The game's formatter
  `0x0010013C` reads ARM-style va_lists; that belongs to whoever owns printf.
