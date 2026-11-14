/* compilefix: asm-verified rewrite taken from native/route/alt/func_002D4AA8.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 002D4AA8 (EU 002D4A84): per-frame update of a texture-scroll / material animator
 * (called by 003A7A14 with a float speed in s0): StateMgr::exec of its own StateMgr (at +0)
 * unless +0x38; then for the material entries 1 and 2 of **(*(+0x24)+0x20) adds
 * clamp(speed * 25, -1, 1) * (-0.003 / -0.0025) to the float at +0xF8 + 24*i, wrapping it into
 * (-5, 5], and marks the material dirty (u16 |= 0x6000); finally animates *(+0x28) against
 * *(+0x24) (00169A80, tail 00168E9C(.., .., 0)) when the state byte is non-zero.
 * Route: actor/object state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 002D4A84..002D4BEC: the clamps and the wrap
 * are integer compares of the float bit patterns (`cmp r2, #0xBF800000` unsigned `hi`, signed
 * `gt` against 1.0f / 5.0f bits, unsigned `hi` against -5.0f bits), reproduced on the bits;
 * unfused vmla.  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "../route/route.h"

void func_00169A80(int obj);
void func_00168E9C(int a, int b, int c);

static uint32_t fbits(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

void func_002D4AA8(char *self, float speed)
{
    if (RF(self, 0x38, uint8_t) == 0)
        route_statemgr_exec(self);
    char *base = RP(RP(RP(self, 0x24), 0x20), 0);
    float s2 = speed * 25.0f;
    for (int i = 1; i < 3; i++) {
        float s1 = s2;
        if (fbits(s1) > 0xBF800000u)
            s1 = -1.0f;
        else if ((int32_t)fbits(s1) > 0x3F800000)
            s1 = 1.0f;
        float k = i == 1 ? -0.003f : -0.0025f;
        float *v = (float *)(base + 0x54 + 24 * i + 0x94 + 0x10);
        float p = s1 * k;
        float s0 = *v + p;
        if ((int32_t)fbits(s0) > 0x40A00000)
            s0 = s0 - 5.0f;
        else if (fbits(s0) > 0xC0A00000u)
            s0 = s0 + 5.0f;
        *v = s0;
        RF(base, 0, uint16_t) |= 0x6000;
    }
    if (RF(self, 4, uint8_t) != 0) {
        func_00169A80((int)RF(self, 0x28, uint32_t));
        func_00168E9C((int)RF(self, 0x28, uint32_t), (int)RF(self, 0x24, uint32_t), 0);
    }
}
