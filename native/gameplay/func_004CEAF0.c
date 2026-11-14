/* USA 004CEAF0 <- EU 004CEAC8: model-instance world matrix update (called by every actor's
 * per-frame update/draw: 375 static callers, 668 caller declarations).
 *   S [0xB0] (Mtx34) = base [0x80] (Mtx34) with columns scaled by [0x74],[0x78],[0x7C]
 *                     (recomputed only when flags [0x164] & 0x40000000, which is then cleared);
 *   if ([0x134] > 0)  (an animated rotation is active)
 *       0051E5F8(*data_0070B960, R = self+0xE0, &{base[0][2], base[1][2], base[2][2]} (the base z column), [0x134], [0x138]);
 *       W [0x104] = R (Mtx33) * S (3x3), translation of W = translation of S
 *   else W = S (001151EC Mtx34 copy);
 *   if ([0x16B]) { if (!(flags & 0x1000000)) *(u32 *)([0x24]->[0x0C]) |= 2;
 *                  [0x16C] ? 00676F18([0x24], &W, [0x16C]) : 00676BF4([0x24], &W, 0); }
 *   flags |= 0x8000000;
 *
 * What was wrong: the call to 0051E5F8 lost r2 (a stack Vec3 = the base matrix z column
 * [0x88],[0x98],[0xA8]: a lost stack object) and s1 ([0x138]); its callee then read garbage for both
 * (see func_0051E5F8.c). Also `ble` (taken when [0x134] is NaN) vs the C `<=`.
 * Float order: every W element is ((R[i][0]*S[0][j]) + R[i][1]*S[1][j]) + R[i][2]*S[2][j]
 * (vmul then two non-fused vmla, single precision), as here.
 * Verified against EU 004CEAC8-004CEF20 instruction by instruction (incl. the second, dead
 * "rescale" block after the multiply, kept for exactness: the flag was cleared just before).
 * Prototype = the round-2 callers' `extern int func_004CEAF0(int)` (344 files): `this` as an int
 * word + gp_ptr (-m64), r0 at exit (the new flags word) returned. Calls 0051E5F8 through its
 * exact pointer version albw_anim_rotation (the stack Vec3's address is a native pointer).
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern uint32_t data_0070B960;
int albw_anim_rotation(char *self, float *out, float *a, float f0, float f1);   /* = 0051E5F8 */
int func_001151EC(uint32_t *dst, uint32_t *src);
int func_00676F18(int a, float *m, uint32_t *b);
int func_00676BF4(int a, float *m, uint32_t b);

static void rescale(char *self) {
    float sx = FLD(self, 0x74, float), sy = FLD(self, 0x78, float), sz = FLD(self, 0x7C, float);
    for (int r = 0; r < 3; r++) {
        FLD(self, 0xB0 + 16 * r + 0x0, float) = FLD(self, 0x80 + 16 * r + 0x0, float) * sx;
        FLD(self, 0xB0 + 16 * r + 0x4, float) = FLD(self, 0x80 + 16 * r + 0x4, float) * sy;
        FLD(self, 0xB0 + 16 * r + 0x8, float) = FLD(self, 0x80 + 16 * r + 0x8, float) * sz;
        FLD(self, 0xB0 + 16 * r + 0xC, uint32_t) = FLD(self, 0x80 + 16 * r + 0xC, uint32_t);
    }
    FLD(self, 0x164, uint32_t) &= ~0x40000000u;
}

int func_004CEAF0(int obj) {
    char *self = (char *)gp_ptr((uint32_t)obj);
    float *S = (float *)AT(self, 0xB0);
    float *W = (float *)AT(self, 0x104);
    if (VCMP_GT(FLD(self, 0x134, float), 0.0f)) {
        uint32_t t[4];
        t[0] = FLD(self, 0x88, uint32_t);
        t[1] = FLD(self, 0x98, uint32_t);
        t[2] = FLD(self, 0xA8, uint32_t);
        t[3] = 0;   /* unused stack word */
        albw_anim_rotation((char *)gp_ptr(data_0070B960), (float *)AT(self, 0xE0), (float *)t,
                      FLD(self, 0x134, float), FLD(self, 0x138, float));
        if (FLD(self, 0x164, uint32_t) & 0x40000000u)
            rescale(self);
        const float *R = (const float *)AT(self, 0xE0);
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                float v = R[3 * i + 0] * S[4 * 0 + j];
                v = v + R[3 * i + 1] * S[4 * 1 + j];
                v = v + R[3 * i + 2] * S[4 * 2 + j];
                W[4 * i + j] = v;
            }
        if (FLD(self, 0x164, uint32_t) & 0x40000000u)   /* dead on ARM too (flag just cleared) */
            rescale(self);
        FLD(self, 0x104 + 0x0C, uint32_t) = FLD(self, 0xB0 + 0x0C, uint32_t);
        FLD(self, 0x104 + 0x1C, uint32_t) = FLD(self, 0xB0 + 0x1C, uint32_t);
        FLD(self, 0x104 + 0x2C, uint32_t) = FLD(self, 0xB0 + 0x2C, uint32_t);
    } else {
        if (FLD(self, 0x164, uint32_t) & 0x40000000u)
            rescale(self);
        func_001151EC((uint32_t *)W, (uint32_t *)S);
    }
    if (FLD(self, 0x16B, uint8_t) != 0) {
        if ((FLD(self, 0x164, uint32_t) & 0x1000000u) == 0) {
            uint32_t *p = GPTR(GPTR(self, 0x24, void), 0x0C, uint32_t);
            *p |= 2;
        }
        uint32_t b = FLD(self, 0x16C, uint32_t);
        int a = (int)FLD(self, 0x24, uint32_t);
        if (b != 0)
            func_00676F18(a, W, (uint32_t *)gp_ptr(b));
        else
            func_00676BF4(a, W, 0);
    }
    FLD(self, 0x164, uint32_t) |= 0x8000000u;
    return (int)FLD(self, 0x164, uint32_t);   /* r0 at exit: the new flags word */
}
