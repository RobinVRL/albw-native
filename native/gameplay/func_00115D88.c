/* USA 00115D88 <- EU 00115D88: Vec3 divide by scalar, out = v * (1 / s).
 *   vldr s1,=1.0; vdiv s2 = s1 / s0; vldmia r1,{s3-s5}; vmul s6..s8 = v * s2; vstmia r0
 * Exactness: the ARM code takes the reciprocal ONCE and multiplies (not x/s per component:
 * that rounds differently). s = 0 gives inf * v (NaN for a 0 component), like the ARM.
 * Verified against EU 00115D88-00115DA8. Confidence: high. */
#include "gameplay.h"

int func_00115D88(float *out, float *v, float s) {
    float r = 1.0f / s;
    float v0 = v[0], v1 = v[1], v2 = v[2];
    out[0] = v0 * r;
    out[1] = v1 * r;
    out[2] = v2 * r;
    return (int)gp_u32(out);
}
