/* USA 00115D18 <- EU 00115D18: Matrix34 rotate Vec3 (3x3 part only, no translation), 13 callers.
 *   vldmia r1,{s0-s11}; then s3/s7/s11 are REPLACED by v.x/v.y/v.z (vldr s3,[r2] ...)
 *   s12 = m00*x; s13 = m10*x; s14 = m20*x; vmla += m01*y ...; vmla += m02*z ...; vstmia r0
 * Exact order ((m0*x) + m1*y) + m2*z. Loads before stores.
 * Verified against EU 00115D18-00115D50. Confidence: high. */
#include "gameplay.h"

int func_00115D18(float *out, float *m, float *v) {
    float x = v[0], y = v[1], z = v[2];
    float r0 = m[0] * x, r1 = m[4] * x, r2 = m[8] * x;
    r0 = r0 + m[1] * y;
    r1 = r1 + m[5] * y;
    r2 = r2 + m[9] * y;
    r0 = r0 + m[2] * z;
    r1 = r1 + m[6] * z;
    r2 = r2 + m[10] * z;
    out[0] = r0;
    out[1] = r1;
    out[2] = r2;
    return (int)gp_u32(out);
}
