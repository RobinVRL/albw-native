/* USA 00115B68 <- EU 00115B68: quaternion of the shortest rotation taking unit vector a to b
 * (out = {x,y,z,w}); returns 1, or 0 with the identity quaternion when a ~ -b. 6 callers
 * (actor/turn alignment).
 *   d = ((1 + a0*b0) + a1*b1) + a2*b2;  c = a x b (vmul + vmls, products rounded)
 *   if (2^-23 >= d)  { out = {0,0,0,1}; return 0; }        (vcmpe eps, d; ge: ordered only)
 *   s = sqrt(d * 2); r = 1 / s; out = {c.x*r, c.y*r, c.z*r, s*0.5}; return 1
 * Bugs fixed:
 *  - the identity quaternion is a constant embedded in the CODE (EU 00115BF8, reached through
 *    the pool word 00115C10). The Ghidra C dereferences DAT_00115c10, which gen_data emits as
 *    the raw number 0x00115BF8 (not a function, not data): natively a read of unmapped memory
 *    (crash) whenever the vectors are opposite. The constant is written here directly.
 *  - NaN: a NaN d takes the computing path on ARM (ge is false), the identity path in Ghidra's
 *    `if (eps < d)`.
 * Verified against EU 00115B68-00115C10 instruction by instruction. Confidence: high. */
#include <math.h>
#include "gameplay.h"

int func_00115B68(float *out, float *a, float *b) {
    float a0 = a[0], b0 = b[0];
    float d = 1.0f + a0 * b0;
    float a1 = a[1], a2 = a[2], b1 = b[1], b2 = b[2];
    d = d + a1 * b1;
    float cx = a1 * b2, cy = a2 * b0, cz = a0 * b1;
    d = d + a2 * b2;
    cx = cx - a2 * b1;
    cy = cy - a0 * b2;
    cz = cz - a1 * b0;
    if (VCMP_GE(1.1920928955078125e-07f, d)) {
        static const uint32_t ident[4] = {0, 0, 0, 0x3F800000u};
        memcpy(out, ident, sizeof ident);
        return 0;
    }
    float s = sqrtf(d * 2.0f);
    float r = 1.0f / s;
    float w = s * 0.5f;
    out[0] = cx * r;
    out[1] = cy * r;
    out[2] = cz * r;
    out[3] = w;
    return 1;
}
