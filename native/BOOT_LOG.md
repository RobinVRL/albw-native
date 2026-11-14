# Boot log

One entry per boot-loop stop: where it stopped, cause, fix. USA addresses (EU in parentheses).

| # | stop | cause | fix |
|---|------|-------|-----|
| 1 | HeapMgr::initialize 0010B47C: FileDeviceMgr heap NULL, crash | ExpHeap::adjust (0049C924) was correct; the parent's resizeBack 0049C208 (EU 0049C1E0) calls isInclude(ptr) via vtable +0x40 with ptr left in r1, Ghidra dropped the argument -> isInclude read garbage -> 0 | native/game/func_0049C208.c, func_0049C334.c (resizeFront, same bug): pass ptr |
