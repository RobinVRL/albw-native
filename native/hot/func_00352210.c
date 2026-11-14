/* USA 00352210 <- EU 003521EC: EffectSlot::setParam(u32 arg, f32 value)   (390 caller files;
 * same EffectSlot as 00352A28: effect handle +0x20 with enable byte +0x3B, second handle +0x24
 * with enable byte +0x3C)
 *   if (self[0x20] && self[0x3B]) 004A1CC8(self[0x20], vcvt.s32(value), arg);
 *   if (self[0x24] && self[0x3C]) return 004A66FC(self[0x24], vcvt.s32(value), arg);  (tail)
 * Early-return r0: `ldr r0, [r4, #0x24]; cmp; ldrbne r1` leaves r0 = self[0x24] (0 when no
 * second handle; the handle itself when its enable byte is 0). 281 sites, none reads r0.
 *
 * Why it is here: the matched source (src/work8/sol2/variants/00352210_2.c) is rejected by the
 * matched-ABI check (definition fii vs Ghidra iif), so the Ghidra C runs. Ghidra vs ARM: the
 * float -> int argument is a C `(int)` cast (x86: 0x80000000 for NaN / |v| >= 2^31, ARM vcvt
 * saturates and gives 0 for NaN): fixed; the early return is 0 instead of self[0x24].
 * Verified EU 003521EC-00352254. Confidence: high (flow), medium (names). */
#include "hot.h"

int func_004A1CC8(int h, uint32_t v, int arg);
int func_004A66FC(int h, uint32_t v, int arg);

int func_00352210(uint32_t self_w, uint32_t arg, float value)
{
    char *self = P(self_w);
    if (W(self, 0x20) != 0 && FLD(self, 0x3B, uint8_t) != 0)
        func_004A1CC8((int)W(self, 0x20), (uint32_t)gp_vcvt_s32(value), (int)arg);
    uint32_t h = W(self, 0x24);
    if (h != 0 && FLD(self, 0x3C, uint8_t) != 0)
        return func_004A66FC((int)h, (uint32_t)gp_vcvt_s32(value), (int)arg);
    return (int)h;
}
