/* USA 004C03B8 <- EU 004C0390: Actor::applyModelParam(const ModelParam *p) -> this
 * (101 caller files; p = a per-class constant table of scale / radii / angles in degrees)
 *   if (!self[0x7A0] || !p) return self;
 *   self[0x8B4] = p[0]; s = p[1]: self[0x830] = s; model[0x74] = s; model[0x164] |= 0x40000000;
 *   model[0x78] = model[0x7C] = s (uniform model scale, word copies);
 *   self[0x8EC] = p[0x18];
 *   self[0x8C4] = vcvt.s32(p.f[8]  * 11930464.0f)    (degrees -> angle index, 2^32/360)
 *   self[0x8C8] = vcvt.s32(p.f[0xC] * 11930464.0f)
 *   self[0x8CC..0x8DC] = (s8)p[0x20..0x24] * 0xB60B60 (int multiply, wraps)
 *   self[0x8E8] = p[0x10]; self[0x8F0] = (s16)p[0x1C] * 0xB60B60
 *   if ((c = self[0x40C])) { if ((u16)c[0x54] == 6) c[0x58] = p.f[0x14];
 *                            else if (== 7) c[0x58] = c[0x60] = p.f[0x14] * 2.0f; }
 *   self[0x8F4] = (s16)p[0x1E] * 0xB60B60;  return self (r0 never changes)
 *
 * Ghidra vs ARM: the two degree->index conversions are C `(int)` casts: x86 cvttss2si gives
 * 0x80000000 for |angle| > ~180 deg (product >= 2^31) and NaN, ARM vcvt saturates to
 * 0x7FFFFFFF / 0x80000000 and gives 0 for NaN (a 190 deg parameter turns into -180 deg
 * natively). Fixed with gp_vcvt_s32. Verified EU 004C0390-004C04B8. Confidence: high (flow),
 * medium (names). */
#include "hot.h"

int func_004C03B8(uint32_t self_w, uint32_t p_w)
{
    char *self = P(self_w);
    char *p = P(p_w);
    char *model = P(W(self, 0x7A0));
    if (W(self, 0x7A0) == 0 || p == 0)
        return (int)self_w;
    const float deg2idx = gp_u2f(0x4B360B60u);   /* 11930464.0f */
    const int32_t k = 0x00B60B60;

    W(self, 0x8B4) = W(p, 0);
    uint32_t s = W(p, 4);
    W(self, 0x830) = s;
    W(model, 0x74) = s;
    W(model, 0x164) |= 0x40000000u;
    W(model, 0x78) = s;
    W(model, 0x7C) = s;
    W(self, 0x8EC) = W(p, 0x18);
    FLD(self, 0x8C4, int32_t) = gp_vcvt_s32(F(p, 8) * deg2idx);
    FLD(self, 0x8C8, int32_t) = gp_vcvt_s32(F(p, 0xC) * deg2idx);
    for (int i = 0; i < 5; i++)
        W(self, 0x8CC + 4 * i) = (uint32_t)(int32_t)FLD(p, 0x20 + i, int8_t) * (uint32_t)k;
    W(self, 0x8E8) = W(p, 0x10);
    W(self, 0x8F0) = (uint32_t)(int32_t)FLD(p, 0x1C, int16_t) * (uint32_t)k;
    uint32_t c_w = W(self, 0x40C);
    float r = F(p, 0x14);
    if (c_w != 0) {
        char *c = P(c_w);
        uint16_t t = FLD(c, 0x54, uint16_t);
        if (t == 6) {
            F(c, 0x58) = r;
        } else if (t == 7) {
            float d = r * 2.0f;
            F(c, 0x58) = d;
            F(c, 0x60) = d;
        }
    }
    W(self, 0x8F4) = (uint32_t)(int32_t)FLD(p, 0x1E, int16_t) * (uint32_t)k;
    return (int)self_w;
}
