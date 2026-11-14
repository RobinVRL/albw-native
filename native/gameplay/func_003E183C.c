/* USA 003E183C <- EU 003E181C: sin/cos of a float angle in table units (period 256.0 of the
 * 256-entry table, reduced modulo 65536.0 first), 8 callers (nn::math SinCosFIdx style).
 *   s1 = |a|; while (bits(s1) >= bits(65536.0f)) s1 -= 65536.0f;   (signed int compare of the
 *                                                                    float bit patterns)
 *   i = vcvt.u32(s1); i16 = i & 0xFFFF; e = &data_006A6D54[(i16 & 0xFF) * 4]
 *   f = s1 - (float)i16;  s = e[0] + f*e[2];  c = e[1] + f*e[3];  if (a < 0) s = -s;
 *   *out_s = s; *out_c = c
 * Bugs fixed: the Ghidra C compared the float with 65536 through an int VALUE cast of the float
 * (`(int)fVar < 0x47800000`; the round-1 converter now prints ALBW_AS_U32 there, so this one is
 * fixed in the current conversion); vcvt.u32 semantics via gp_vcvt_u32 (a C cast of a huge or
 * NaN float is undefined / 0x80000000 on x86); `vneglo` is taken only for an ordered a < 0.
 * s0 holds sin at return (Ghidra lost it; 2 sites read it), exposed as albw_sincos_fidx();
 * func_ keeps the callers' int prototype.
 * A NaN angle loops forever on the ARM too (NaN bits >= 0x47800000); kept.
 * Verified against EU 003E181C-003E18A8. Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

extern const float data_006A6D54[256 * 4];

float albw_sincos_fidx(float *out_s, float *out_c, float a) {
    float s1 = gp_u2f(gp_f2u(a) & 0x7FFFFFFFu);        /* vabs: clears the sign bit */
    while (gp_f2i_bits(s1) >= (int32_t)0x47800000)
        s1 = s1 - 65536.0f;
    uint32_t i16 = gp_vcvt_u32(s1) & 0xFFFFu;
    const float *e = &data_006A6D54[(i16 & 0xFFu) * 4];
    float f = s1 - (float)i16;
    float s = e[0] + f * e[2];
    float c = e[1] + f * e[3];
    if (VCMP_LO(a, 0.0f))
        s = -s;
    *out_s = s;
    *out_c = c;
    return s;
}

int func_003E183C(float *out_s, float *out_c, float a) {
    albw_sincos_fidx(out_s, out_c, a);
    return (int)gp_u32(out_s);
}
