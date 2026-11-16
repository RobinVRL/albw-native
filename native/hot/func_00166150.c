/* USA 00166150 <- EU 00166154: AnimCtl::reset()   (4 caller files)
 *   if (self[0x14]) self[0x14]->vt[0](self[0x14]); self[0xF8] = self[0xF9] = 0;
 *   self[0xFA] = self[0xFB]
 * Ghidra vs ARM: the virtual vt[0] is called with NO arguments (`this` dropped). Fixed.
 * Verified EU 00166154-00166188. Confidence: high. */
#include "hot.h"

typedef void (*vfn_t)(void *self);

int func_00166150(uint32_t self_w)
{
    char *self = P(self_w);
    uint32_t o = W(self, 0x14);
    if (o != 0)
        GFN(vfn_t, W(P(W(P(o), 0)), 0))(P(o));
    uint8_t b = FLD(self, 0xFB, uint8_t);
    FLD(self, 0xF8, uint8_t) = 0;
    FLD(self, 0xF9, uint8_t) = 0;
    FLD(self, 0xFA, uint8_t) = b;
    return 0;
}
