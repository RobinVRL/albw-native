/* USA 00490628 <- EU 00490600: exp(x) approximation (table + exponent add), result in s0.
 * 3 callers (all read s0 right after the call).
 *   n = vcvt.s32(x * log2(e)); k = (int16)n; r = x - (float)k * ln2  (vmls: product rounded)
 *   r = ln2 + r; t = r * (16/ln2); i = vcvt.u32(t) & 0xFFFF; e = &data_006C4AC8[i * 2]
 *   y = e[0] + (t - (float)i) * e[1];  return bits(y) + (k << 23), sign bit cleared
 * Bugs fixed: Ghidra typed the result `uint` (callers declare `int func_00490628(float)`), so
 * the float in s0 is lost at all 3 call sites; the conversions were C casts (cvttss2si:
 * 0x80000000 for NaN/huge x where vcvt saturates) and the final exponent add was printed as a
 * float VALUE conversion of the bit pattern (2 bit-cast sites).
 * albw_exp_approx() is the exact float version; func_ keeps the callers' int prototype and
 * returns the result's bit pattern.
 * Verified against EU 00490600-0049067C. Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

extern const float data_006C4AC8[];

float albw_exp_approx(float x) {
    float l = 1.44269502162933349609375f * x;           /* 0x3FB8AA3B */
    const float ln2 = 0.693147182464599609375f;         /* 0x3F317218 */
    int32_t k = (int16_t)gp_vcvt_s32(l);                /* sxth */
    float r = x - (float)k * ln2;
    r = ln2 + r;
    float t = r * 23.0831203460693359375f;              /* 0x41B8AA3B */
    uint32_t i = gp_vcvt_u32(t) & 0xFFFFu;
    const float *e = &data_006C4AC8[i * 2];
    float a = e[0], slope = e[1];
    float y = a + (t - (float)i) * slope;
    uint32_t bits = (gp_f2u(y) + ((uint32_t)k << 23)) & 0x7FFFFFFFu;
    return gp_u2f(bits);
}

int func_00490628(float x) {
    return (int)gp_f2u(albw_exp_approx(x));
}
