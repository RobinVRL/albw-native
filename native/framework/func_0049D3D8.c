/* USA 0049D3D8 (EU 0049D3B0): sead::TaskMgr::createTask_(const TaskBase::CreateArg &arg,
 *   HeapArray &heaps)   (called by 0049D4A8 createTaskSync and 3 more; on the boot path:
 *   004ECA48 -> 0048E670 -> 0048E718 -> 0049D4A8 -> here)
 *   int f(TaskMgr *this, const CreateArg *arg, HeapArray *heaps);   returns the new task
 *   lock(this + 4) (0010C0B8: CriticalSection::lock);
 *   cls = arg->[0..7] (class id copied to the stack: {u8 kind, factory fn});  dbg = u8 arg->+0x78;
 *   heap = heaps->[heaps->+0x14] (word at heaps + idx * 4);
 *   prev = heap ? 0010983C(*data_00715210, heap) : 1      (HeapMgr::setCurrentHeap_, previous);
 *   TaskConstructArg ca = { heaps, this, arg->+0x60 };   task = 0057D87C(&cls, &ca) (factory);
 *   if (prev != 1) 0010983C(*data_00715210, prev);
 *   task->+0x64 = cls (8 bytes, from the stack copy); u8 task->+0x61 = dbg;
 *   if (arg->+0x5C) 0049FBC4(arg->+0x5C + 0x10, task ? task + 0x10 : NULL)  (tree insert);
 *   unlock(this + 4) (0010EEE0);  return task.
 * (The ARM stores a 0 into ca.+8 before overwriting it with arg->+0x60: no observable effect.)
 * Round-2 Ghidra C: correct (frame offsets checked). Native version for exactness on the boot
 * path and 64-bit cleanliness; the factory 0057D87C is native/game (boot agent).
 * Prototype = callers' `int func_0049D3D8(int, undefined4 *, int)`. Verified against
 * EU 0049D3B0-0049D470. Confidence: high. */
#include "framework.h"

extern uint32_t data_00715210; /* sead::HeapMgr instance */
int func_0010C0B8(void *cs);
int func_0010EEE0(void *cs);
uint32_t func_0010983C(void *heap_mgr, void *heap);
uint32_t func_0057D87C(const void *cls, void *construct_arg);
int func_0049FBC4(void *tree, void *node);

int func_0049D3D8(uint32_t self_w, uint32_t *arg, uint32_t heaps_w) {
    char *self = gp_ptr(self_w);
    char *heaps = gp_ptr(heaps_w);
    func_0010C0B8(self + 4);
    uint32_t cls[2] = { arg[0], arg[1] };
    uint8_t dbg = FLD(arg, 0x78, uint8_t);
    uint32_t heap = FLD(heaps, FLD(heaps, 0x14, int32_t) * 4, uint32_t);
    uint32_t prev = 1;
    if (heap != 0)
        prev = func_0010983C(gp_ptr(data_00715210), gp_ptr(heap));
    uint32_t ca[3] = { heaps_w, self_w, FLD(arg, 0x60, uint32_t) };
    uint32_t task = func_0057D87C(cls, ca);
    if (prev != 1)
        func_0010983C(gp_ptr(data_00715210), gp_ptr(prev));
    char *t = gp_ptr(task);
    FLD(t, 0x64, uint32_t) = cls[0];
    FLD(t, 0x68, uint32_t) = cls[1];
    FLD(t, 0x61, uint8_t) = dbg;
    uint32_t tree = FLD(arg, 0x5C, uint32_t);
    if (tree != 0)
        func_0049FBC4(gp_ptr(tree + 0x10), task ? gp_ptr(task + 0x10) : NULL);
    func_0010EEE0(self + 4);
    return (int)task;
}
