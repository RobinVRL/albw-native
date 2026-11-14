/* USA 004CEA18 <- EU 004CE9F0: ModelInst::setShapeVisible(bool on, u32 idx)   (77 caller files)
 *   m = idx < self[0x5C] ? self[0x64][idx] : 0;  bit = *(u16 *)(m[0x90] + 4)  (visibility bit)
 *   if (on && !(self[0x28][bit >> 3] & (1 << (bit & 7)))) {         (becoming visible)
 *       m = (same lookup again); e = *self[0x20] + *(u16 *)m[0x90] * 0x154;
 *       if (*(u16 *)e & 1) *(u16 *)e |= 0x100; }                     (material: mark dirty)
 *   set / clear bit (bit & 7) of self[0x28][bit >> 3]; return self[0x28]
 *
 * Ghidra vs ARM: correct (EU 004CE9F0-004CEA94). Confidence: high (flow), medium (names). */
#include "hot.h"

int func_004CEA18(uint32_t self_w, int on, uint32_t idx)
{
    char *self = P(self_w);
    uint32_t m = idx < W(self, 0x5C) ? W(P(W(self, 0x64)), 4 * idx) : 0;
    uint32_t bit = FLD(P(W(P(m), 0x90)), 4, uint16_t);
    if (on != 0 && !(FLD(P(W(self, 0x28)), bit >> 3, uint8_t) & (1u << (bit & 7)))) {
        uint32_t tbl = W(P(W(self, 0x20)), 0);
        uint32_t m2 = idx < W(self, 0x5C) ? W(P(W(self, 0x64)), 4 * idx) : 0;
        char *e = P(tbl + (uint32_t)FLD(P(W(P(m2), 0x90)), 0, uint16_t) * 0x154);
        uint16_t f = FLD(e, 0, uint16_t);
        if (f & 1)
            FLD(e, 0, uint16_t) = f | 0x100;
    }
    uint32_t bits = W(self, 0x28);
    uint8_t b = FLD(P(bits), bit >> 3, uint8_t);
    uint8_t mask = (uint8_t)(1u << (bit & 7));
    FLD(P(bits), bit >> 3, uint8_t) = on != 0 ? (uint8_t)(b | mask) : (uint8_t)(b & ~mask);
    return (int)bits;
}
