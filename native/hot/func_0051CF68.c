/* USA 0051CF68 <- EU 0051CF40: f32 easeStep(f32 *t, f32 a, f32 b, f32 dt)   (22 caller files)
 * Advances a 0..1 parameter and returns a cosine-eased interpolation between a and b:
 *   *t = *t + dt; v = clamp(*t) with `lo` 0 -> 0, else `gt` 1 -> 1 (NaN stays NaN); *t = v;
 *   v is clamped the same way again (dead on ARM too); 
 *   i = vcvt.s32(v * 2^30 + (-2^30))  (vmla: product rounded, then added)  -> -2^30 .. 0
 *   e = data_006C3AB8 + (u32)i >> 24 entries of 16 bytes (256-entry sin/cos table, cos part
 *       at +8 / slope at +0xC); frac = (float)(u32)(i & 0xFFFFFF) * 2^-24;
 *   k = e[8] + e[0xC] * frac; return a + (b - a) * k        (vmla chains, unfused)
 *
 * Ghidra vs ARM: the conversion is the SIGNED vcvt of a value in [-2^30, 0]; Ghidra writes
 * `(uint)(...)`: a negative float -> unsigned C conversion is undefined (i386: wrong table
 * index; NaN: x86 0x80000000 vs ARM 0); the clamps are rebuilt from an undefined in_fpscr and
 * send NaN to 0 (ARM keeps it, then vcvt gives 0). Fixed. Verified EU 0051CF40-0051CFDC.
 * Confidence: high (flow), medium (name). */
#include "hot.h"
#pragma STDC FP_CONTRACT OFF

extern char data_006C3AB8[];

static float clamp01(float v)
{
    if (VCMP_LO(v, 0.0f))
        return 0.0f;
    if (VCMP_GT(v, 1.0f))
        return 1.0f;
    return v;
}

float func_0051CF68(uint32_t t_w, float a, float b, float dt)
{
    float *t = (float *)P(t_w);
    float v = *t + dt;
    *t = v;
    v = clamp01(v);
    float d = b - a;
    *t = v;
    v = clamp01(v);
    float m = v * gp_u2f(0x4E800000u);
    int32_t i = gp_vcvt_s32(gp_u2f(0xCE800000u) + m);
    char *e = data_006C3AB8 + (((uint32_t)i >> 24) << 4);
    float frac = (float)((uint32_t)i & 0x00FFFFFFu) * gp_u2f(0x33800000u);
    float p = F(e, 0xC) * frac;
    float k = F(e, 8) + p;
    float q = d * k;
    return a + q;
}
