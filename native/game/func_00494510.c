/* USA 00494510 (EU 004944E8): constructor (this, u32 size, sead::Heap *heap): base ctor
 * 0041E1F4(this), vtable 006F6960 (+0x14 at +0x20), +0x24..+0x2C cleared; heap NULL -> current
 * heap (0010DB90); size 0 -> heap->getFreeSize(0x20) (vtable +0x3C) - 0x20; buffer =
 * new[](size, heap, 0x20) stored at +0x24; 0041E0C0(this, buffer, size). Returns this.
 * Native fix of the "matched" auto-converted source (src/work8/sol2/session6/00494510_dh.c):
 * the base ctor was called without `this` (r0 pass-through on ARM). Confidence: high. */
#include <stdint.h>

extern char data_006F6960[];
extern uint32_t data_00715210;
uint32_t *func_0041E1F4(uint32_t *self);
void *func_0010DB90(uint32_t heap_mgr);
void *func_0010CEE0(uint32_t size, void *heap, int32_t align);
void func_0041E0C0(uint32_t *self, void *buf, uint32_t size);

uint32_t *func_00494510(uint32_t *self, uint32_t size, uint32_t *heap)
{
    uint32_t *t = func_0041E1F4(self);
    uint32_t vt = (uint32_t)(uintptr_t)data_006F6960;
    t[0] = vt;
    t[9] = 0;
    t[8] = vt + 0x14;
    t[10] = 0;
    t[11] = 0;
    if (!heap)
        heap = func_0010DB90(data_00715210);
    if (!size) {
        typedef uint32_t (*FreeFn)(uint32_t *, int32_t);
        size = ((FreeFn)(uintptr_t)((uint32_t *)(uintptr_t)heap[0])[0x3C / 4])(heap, 0x20) - 0x20;
    }
    void *buf = func_0010CEE0(size, heap, 0x20);
    t[9] = (uint32_t)(uintptr_t)buf;
    func_0041E0C0(t, buf, size);
    return t;
}
