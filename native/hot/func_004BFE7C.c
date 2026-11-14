/* USA 004BFE7C <- EU 004BFE54: Actor::moveOnPath(Vec3 *pos, s32 *angle, u32 *out, u32 flags,
 *     f32 speed) -> r0 of 001E5FC4   (54 caller files)
 *   r = 001E5FC4(self + 0x7C4, pos, angle, out, flags (stack), speed)
 *   max = (u8)self[0x852] == (s8)self[0x85C] ? self[0x8B8] : self[0x8B4];
 *   rate = self[0x834] / max * 1.2f;
 *   rate = bits(rate) > bits(1.2f) ? 1.2f : (bits(rate) < bits(0.75f) ? 0.75f : rate) (signed)
 *   anim(self[0x7AC]).layer0[0x10] = rate (playback rate)
 *   if (self[0x85D] || self[0x8AC] & 0x200) { self[0x3B8] = 1;
 *       0014F85C(self, 0, data_007A9260, 0xDDF, 0.1f); }
 *   return r
 * Ghidra vs ARM: correct (EU 004BFE54-004BFF08). Confidence: high (flow), medium (names). */
#include "hot.h"
#pragma STDC FP_CONTRACT OFF

extern char data_007A9260[];

int func_001E5FC4(uint32_t *path, float *pos, int *angle, uint32_t *out, uint32_t flags, float s);
int func_0014F85C(int self, uint32_t a, uint32_t *v, uint32_t b, float f);

int func_004BFE7C(uint32_t self_w, uint32_t pos, uint32_t angle, uint32_t out, uint32_t flags,
                  float speed)
{
    char *self = P(self_w);
    int r = func_001E5FC4((uint32_t *)(self + 0x7C4), (float *)P(pos), (int *)P(angle),
                          (uint32_t *)P(out), flags, speed);
    float max = (uint32_t)FLD(self, 0x852, uint8_t) == (uint32_t)(int32_t)FLD(self, 0x85C, int8_t)
                    ? F(self, 0x8B8) : F(self, 0x8B4);
    float q = F(self, 0x834) / max;
    float rate = q * gp_u2f(0x3F99999Au);
    if (gp_f2i_bits(rate) > 0x3F99999A)
        rate = gp_u2f(0x3F99999Au);
    else if (gp_f2i_bits(rate) < 0x3F400000)
        rate = 0.75f;
    F(P(W(P(W(self, 0x7AC)), 0x14)), 0x10) = rate;
    if (FLD(self, 0x85D, uint8_t) != 0 || (W(self, 0x8AC) & 0x200)) {
        W(self, 0x3B8) = 1;
        func_0014F85C((int)self_w, 0, (uint32_t *)data_007A9260, 0xDDF, gp_u2f(0x3DCCCCCDu));
    }
    return r;
}
