/* USA 0016773C <- EU 00167740: AnimSet::allocSlots(int n)   (115 caller files)
 * The slot array used by 001672F8 / 002317C0 (0x38-byte slots, +8 count, +0xC array):
 *   if (n > 0) { m = new[](n*0x38, heap 0, align 4) (0010CEE0);
 *                a = m ? vec_ctor(m, 00168204, 0x38, n) : 0;  if (a) { +0xC = a; +8 = n; } }
 *   for (i = 0; i < n; i++) slot(i)[0x10] = 0   (slot(i): i >= count -> slot 0, `hi`)
 * Return (r0, unused): n when the loop ran (r0 = loop index), else 0 / the vec-ctor result.
 *
 * Ghidra vs ARM: correct (EU 00167740-001677C8). Confidence: high (flow), medium (name). */
#include "hot.h"

int func_00168204(int *);
void *func_0010CEE0(uint32_t size, void *heap, int32_t align);
void *func_00100118(void *array, void *ctor, uint32_t size, uint32_t count);

int func_0016773C(uint32_t self_w, int32_t n)
{
    char *self = P(self_w);
    if (n > 0) {
        void *m = func_0010CEE0((uint32_t)n * 0x38, 0, 4);
        void *a = 0;
        if (m)
            a = func_00100118(m, (void *)func_00168204, 0x38, (uint32_t)n);
        if (a) {
            W(self, 0xC) = gp_u32(a);
            W(self, 8) = (uint32_t)n;
        }
    }
    if (n <= 0)
        return 0;
    int32_t i = 0;
    do {
        char *e = P(W(self, 0xC));
        if (W(self, 8) > (uint32_t)i)
            e += (uint32_t)i * 0x38;
        W(e, 0x10) = 0;
        i++;
    } while (i < n);
    return i;
}
