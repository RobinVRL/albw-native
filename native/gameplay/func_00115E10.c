/* USA 00115E10 <- EU 00115E10: Vec3 cross product, out = a x b  (46 static callers).
 *   s6 = a1*b2; s7 = a2*b0; s8 = a0*b1;  vmls s6 -= a2*b1; s7 -= a0*b2; s8 -= a1*b0
 * (vmls: product rounded, then subtracted.) All loads precede the store (out may alias).
 * Verified against EU 00115E10-00115E34. Confidence: high. */
#include "gameplay.h"

int func_00115E10(float *out, float *a, float *b) {
    float a0 = a[0], a1 = a[1], a2 = a[2];
    float b0 = b[0], b1 = b[1], b2 = b[2];
    float x = a1 * b2, y = a2 * b0, z = a0 * b1;
    float px = a2 * b1, py = a0 * b2, pz = a1 * b0;
    out[0] = x - px;
    out[1] = y - py;
    out[2] = z - pz;
    return (int)gp_u32(out);
}
