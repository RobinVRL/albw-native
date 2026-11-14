/* USA 00115DAC <- EU 00115DAC: Vec3 multiply-add, out = b + a * s  (s in s0; 54 callers).
 *   vldmia r1,{s1-s3} (a); vldmia r2,{s4-s6} (b); vmla s4 += s1*s0 ...; vstmia r0,{s4-s6}
 * VFPv2 vmla is NOT fused: the product is rounded, then added (plain C below, no FMA: the
 * build must not contract, see fpmath.patch -ffp-contract=off).
 * Prototype as the converted callers declare it: (out, a, b, s).
 * Verified against EU 00115DAC-00115DC4. Confidence: high. */
#include "gameplay.h"

int func_00115DAC(float *out, float *a, float *b, float s) {
    float a0 = a[0], a1 = a[1], a2 = a[2];
    float b0 = b[0], b1 = b[1], b2 = b[2];
    float p0 = a0 * s, p1 = a1 * s, p2 = a2 * s;
    out[0] = b0 + p0;
    out[1] = b1 + p1;
    out[2] = b2 + p2;
    return (int)gp_u32(out);
}
