/* USA 004C0350 <- EU 004C0328: Actor::chaseMoveSpeed()   (55 caller files)
 *   tgt = (u8)self[0x852] == (s8)self[0x85C] ? self[0x8B8] : self[0x8B4];
 *   step = (tgt - 0.005f) * 0.05f; cur = self[0x834]; d = tgt - cur;
 *   self[0x834] = d > step ? cur + step : (d `lo` -step ? cur - step : tgt)
 * (NaN: neither compare holds -> tgt.) Ghidra vs ARM: correct (EU 004C0328-004C0384).
 * Confidence: high. */
#include "hot.h"
#pragma STDC FP_CONTRACT OFF

int func_004C0350(uint32_t self_w)
{
    char *self = P(self_w);
    float tgt = (uint32_t)FLD(self, 0x852, uint8_t) == (uint32_t)(int32_t)FLD(self, 0x85C, int8_t)
                    ? F(self, 0x8B8) : F(self, 0x8B4);
    float step = (tgt - gp_u2f(0x3BA3D70Au)) * gp_u2f(0x3D4CCCCDu);
    float cur = F(self, 0x834);
    float d = tgt - cur;
    if (VCMP_GT(d, step))
        tgt = cur + step;
    else if (VCMP_LO(d, -step))
        tgt = cur - step;
    F(self, 0x834) = tgt;
    return (int)(self_w + 0x834);
}
