/* USA 00115CA8 <- EU 00115CA8: Matrix34 * Vec3 (point: rotation + translation), 30 callers.
 *   vldmia r1,{s0-s11} (m, row-major 3x4); vldmia r2,{s12-s14} (v)
 *   s3 += m00*x; s7 += m10*x; s11 += m20*x;   (accumulators start at the TRANSLATION m03/m13/m23)
 *   s3 += m01*y; ...; s3 += m02*z; ...;  vstr s3,[r0]; s7,[r0+4]; s11,[r0+8]
 * Exact order: ((t + m0*x) + m1*y) + m2*z, each product rounded (vmla is not fused).
 * Loads before stores (out may alias v).
 * Verified against EU 00115CA8-00115CE0. Confidence: high. */
#include "gameplay.h"

int func_00115CA8(float *out, float *m, float *v) {
    float x = v[0], y = v[1], z = v[2];
    float r0 = m[3], r1 = m[7], r2 = m[11];
    r0 = r0 + m[0] * x;
    r1 = r1 + m[4] * x;
    r2 = r2 + m[8] * x;
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
