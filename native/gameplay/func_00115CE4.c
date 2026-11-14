/* USA 00115CE4 <- EU 00115CE4: Matrix33 * Vec3 (m row-major 3x3, 9 floats), 44 callers.
 *   vldmia r1,{s0-s8}; vldmia r2,{s9-s11}
 *   s12 = m00*x; s13 = m10*x; s14 = m20*x; vmla += m01*y ...; vmla += m02*z ...; vstmia r0
 * Exact order ((m0*x) + m1*y) + m2*z, products rounded. Loads before stores.
 * Verified against EU 00115CE4-00115D14. Confidence: high. */
#include "gameplay.h"

int func_00115CE4(float *out, float *m, float *v) {
    float x = v[0], y = v[1], z = v[2];
    float r0 = m[0] * x, r1 = m[3] * x, r2 = m[6] * x;
    r0 = r0 + m[1] * y;
    r1 = r1 + m[4] * y;
    r2 = r2 + m[7] * y;
    r0 = r0 + m[2] * z;
    r1 = r1 + m[5] * z;
    r2 = r2 + m[8] * z;
    out[0] = r0;
    out[1] = r1;
    out[2] = r2;
    return (int)gp_u32(out);
}
