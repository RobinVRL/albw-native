/* USA 004356B4 <- EU 00435694: Obj4::update() (_ZN4Obj46updateEv; 310 caller files: the
 * per-frame update of every collider / attention object, pos at +4, prev +0x1C, delta base +0x10)
 *   if (!self[0x30]) { self[0x30] = 1; self[0x1C..0x24] = self[4..0xC]; }   (first frame)
 *   self[0x10..0x18] = self[0x1C..0x24]; self->vt[0x10](self); self[0x1C..0x24] = self[4..0xC]
 * (12-byte word copies). Ghidra vs ARM: correct (EU 00435694-004356F0). Confidence: high. */
#include "hot.h"

typedef void (*vfn_t)(void *self);

int func_004356B4(uint32_t self_w)
{
    char *self = P(self_w);
    if (FLD(self, 0x30, uint8_t) == 0) {
        FLD(self, 0x30, uint8_t) = 1;
        memmove(self + 0x1C, self + 4, 12);
    }
    memmove(self + 0x10, self + 0x1C, 12);
    GFN(vfn_t, W(P(W(self, 0)), 0x10))(self);
    memmove(self + 0x1C, self + 4, 12);
    return (int)(self_w + 0x1C);   /* r0 left by the final `add r0, r4, #0x1c` */
}
