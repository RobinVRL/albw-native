/* USA 0017222C <- EU 0017222C: StateCtl::change(u32 state, a, b)   (4 caller files)
 *   if (state >= 9) return (r0 untouched: self);
 *   if (self[0x70] != 9) 00172018(self, 4);
 *   self[0x2C8] = 0; self[0x2C0] = a; self[0x2C4] = b; self[0x2E0] = 0; self[0x2D8] = 0;
 *   self[0x2DC] = -1; self[0x2CC] = 0; self[0x70] = state; self[0x2B4] &= ~6;
 *   s = self + 0x74 + state * 0x10; return s->vt[0](s)   (tail call through the state's
 *   delegate object, r0 = s)
 * Ghidra vs ARM: the tail call drops `this` (s) - "could not recover jumptable" - and the
 * state >= 9 exit returns 0 instead of r0 = self. Fixed. Verified EU 0017222C-001722A0.
 * Confidence: high (flow), medium (names). */
#include "hot.h"

int func_00172018(int self, int x);

typedef int (*vfn_t)(void *self);

int func_0017222C(uint32_t self_w, uint32_t state, uint32_t a, uint32_t b)
{
    char *self = P(self_w);
    if (state >= 9)
        return (int)self_w;
    if (FLD(self, 0x70, uint8_t) != 9)
        func_00172018((int)self_w, 4);
    W(self, 0x2C8) = 0;
    W(self, 0x2C0) = a;
    W(self, 0x2C4) = b;
    FLD(self, 0x2E0, uint8_t) = 0;
    W(self, 0x2D8) = 0;
    W(self, 0x2DC) = 0xFFFFFFFFu;
    W(self, 0x2CC) = 0;
    FLD(self, 0x70, uint8_t) = (uint8_t)state;
    W(self, 0x2B4) &= ~6u;
    char *s = self + 0x74 + state * 0x10;
    return GFN(vfn_t, W(P(W(s, 0)), 0))(s);
}
