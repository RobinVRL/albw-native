/* USA 00115C8C <- EU 00115C8C: Vec3 component-wise multiply, out = a * b.
 *   vldmia r1,{s0-s2}; vldmia r2,{s3-s5}; vmul s6=s0*s3, s7=s1*s4, s8=s2*s5; vstmia r0
 * Exact native version (loads before stores). Returns r0 (= out).
 * Verified against EU 00115C8C-00115CA4. Confidence: high. */
#include "gameplay.h"

int func_00115C8C(float *out, float *a, float *b) {
    float a0 = a[0], a1 = a[1], a2 = a[2];
    float b0 = b[0], b1 = b[1], b2 = b[2];
    out[0] = a0 * b0;
    out[1] = a1 * b1;
    out[2] = a2 * b2;
    return (int)gp_u32(out);
}
