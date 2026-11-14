# Boot log

One entry per boot-loop stop: where it stopped, cause, fix. USA addresses (EU in parentheses).

| # | stop | cause | fix |
|---|------|-------|-----|
| 1 | HeapMgr::initialize 0010B47C: FileDeviceMgr heap NULL, crash | ExpHeap::adjust (0049C924) was correct; the parent's resizeBack 0049C208 (EU 0049C1E0) calls isInclude(ptr) via vtable +0x40 with ptr left in r1, Ghidra dropped the argument -> isInclude read garbage -> 0 | native/game/func_0049C208.c, func_0049C334.c (resizeFront, same bug): pass ptr |
| 2 | svc 0x23 tripwire in 0010DC6C (RomFS work-size query, from FileDeviceMgr -> 0010D0F4) | Ghidra 0010DC6C passed 6 of 12 OpenFileDirectly args and read the header from wrong slots; pool alloc 0010FB48 lost its lock argument; file-object vtable wrappers (read/write/flush/getSize/setPriority/openLink) typed void, losing the Result | native/game/func_0010DC6C.c (rewritten from asm), func_0010FB48.c, func_003C90F8/003C91C0/003C9138/00561334/003C9038/003C9018.c (return the Result) |
| 3 | (nondeterministic) fatal in RomFS archive setup 0010F240 | 0010FC68 (fs GetPriority wrapper) typed void by Ghidra, Result lost -> garbage negative -> ThrowFatalErr | native/game/func_0010FC68.c; native/sdk/boot_extra.c: 0010AC24 ThrowFatalErr = report result/pc + abort (was: err:f port connect -> svc 0x2D tripwire) |
| 4 | SIGSEGV in IDisposer ctor 0010DA7C creating "RootHeapMemory" at address 0x40000 | albw_os_heap_address() was NULL: native entry skipped 00100E60 (nninitStartUp: SetHeapSize(0x60000) + nn allocator) as if it were C-library start-up | native/runtime/entry.c calls func_00100E60 |
| 5 | SIGSEGV in 00101D4C (MemoryBlock init) from 00100E78 | tooling: matched source 00100E78_1.cpp references generic `g`; build_decomp fell back to Ghidra for it but kept the matched object in the link list too, and ld took the matched one (`g` = tripwire stub in .text) | tools/build_decomp.py: drop a matched object from the link once its address has a working Ghidra fallback |
