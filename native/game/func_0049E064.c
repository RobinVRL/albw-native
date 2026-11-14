/* USA 0049E064 (EU 0049E03C): sead framework: create the "Prepare Thread" and the NullFader.
 *   heap = this->heaps[this+0x88] (array at +0x74)
 *   delegate = new(0x10) {vtable 006F7D28, this, PMF from 006A8B1C}
 *   thread = 0048FAB0(new(0x90), SafeString "Prepare Thread", delegate, heap,
 *                     prio = this+0x120 (-1 -> 0x11), 0, 0x7FFFFFFF, this+0x11C, 0x20)
 *   this+0x24 = thread; thread->vtbl[0x14](thread)          (start)
 *   fader = 0048E8DC(new(0x1EC), &arg) with arg = {&{heap, 0, 0, 0, 0, 0}, this, 0}
 *   this+0x28 = fader; fader+0x28 = "NullFader"; fader+0x60 = 4
 *   this+0x8C = a free-list pool of this+0x90 elements of 0x9C bytes (or NULL)
 * Rewritten from the EU disassembly: Ghidra lost the stack argument blocks (the fader's
 * argument was "&stack0xffffffa0", converted to a zeroed static), so 00109868 dereferenced
 * NULL. The words at arg[0]+4..+0xC are not written by the original (stale stack); they are
 * zero here. 32-bit object layout as on the 3DS. Confidence: high. */
#include <stdint.h>

extern uint32_t data_006F5988[];   /* sead::SafeString vtable */
extern uint32_t data_006F7D28[];   /* delegate vtable */
extern uint32_t data_006A8B1C[];   /* PMF {ptr, adj} of the thread body */

void *func_0010CF28(uint32_t size, void *heap, int32_t align);
void *func_0010CEE0(uint32_t size, void *heap, int32_t align);
void *func_0048FAB0(void *mem, void *name, void *delegate, void *heap, int32_t prio,
                    uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8);
void *func_0048E8DC(void *mem, void *arg);

#define U32(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define P32(x) ((uint32_t)(uintptr_t)(x))

void func_0049E064(uint8_t *self)
{
    void *heap = (void *)(uintptr_t)U32(self, 0x74 + 4 * U32(self, 0x88));
    void *thread = func_0010CF28(0x90, heap, 4);
    if (thread) {
        uint32_t *dg = func_0010CF28(0x10, heap, 4);
        if (dg) {
            dg[2] = data_006A8B1C[0];
            dg[3] = data_006A8B1C[1];
            dg[0] = P32(data_006F7D28);
            dg[1] = P32(self);
        }
        uint32_t name[2] = { P32(data_006F5988), P32("Prepare Thread") };
        int32_t prio = (int32_t)U32(self, 0x120);
        if (prio == -1)
            prio = 0x11;
        thread = func_0048FAB0(thread, name, dg, heap, prio, 0, 0x7FFFFFFF, U32(self, 0x11C), 0x20);
    }
    U32(self, 0x24) = P32(thread);
    {
        uint32_t *t = thread;
        ((void (*)(void *))(uintptr_t)U32((void *)(uintptr_t)t[0], 0x14))(t);
    }

    uint32_t heapblk[6] = { P32(heap), 0, 0, 0, 0, 0 };
    uint32_t arg[3] = { P32(heapblk), P32(self), 0 };
    uint8_t *fader = func_0010CF28(0x1EC, heap, 4);
    if (fader)
        fader = func_0048E8DC(fader, arg);
    U32(self, 0x28) = P32(fader);
    U32(fader, 0x28) = P32("NullFader");
    ((uint8_t *)(uintptr_t)U32(self, 0x28))[0x60] = 4;

    uint32_t *pool = func_0010CF28(0x18, heap, 4);
    if (pool) {
        int32_t n = (int32_t)U32(self, 0x90);
        pool[1] = P32(pool);
        pool[2] = 0;
        pool[3] = 0;
        pool[0] = P32(pool);
        pool[4] = 0;
        pool[5] = 0;
        if (n > 0) {
            uint32_t *buf = func_0010CEE0((uint32_t)n * 0x9C, heap, 4);
            if (buf) {
                pool[3] = P32(buf);
                for (int32_t i = 0; i < n - 1; i++)
                    buf[i * 0x27] = P32(&buf[(i + 1) * 0x27]);
                buf[(n - 1) * 0x27] = 0;
                pool[4] = P32(buf);
                pool[5] = (uint32_t)n;
            }
        }
    }
    U32(self, 0x8C) = P32(pool);
}
