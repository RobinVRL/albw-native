/* USA 00491624 <- EU 004915FC: Matrix33 from Euler angles (X, Y, Z angle indices), 62 callers.
 * Same products and order as 00491E80 (Matrix34 version), stored as 3x3 (stride 12 bytes):
 *   | cy*cz   (sx*sy)*cz - cx*sz   sx*sz + (cx*cz)*sy |
 *   | cy*sz   cx*cz + (sx*sy)*sz   sy*(cx*sz) - sx*cz |
 *   | -sy     sx*cy                cx*cy              |
 * RETURN CLASS (round 2): `float` (systemic2/returns.json: 1 of 68 sites reads s0; all 63
 * converted caller files declare `extern float func_00491624(...)`). s0 at exit is the value
 * of m[1] (`vnmls.f32 s0, s6, s2; vstr s0, [r4, #4]`), returned here; r0 is dead.
 * Verified against EU 004915FC-004916C0 instruction by instruction. Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

float func_00491624(float *m, uint32_t ax, uint32_t ay, uint32_t az) {
    float sx, cx, sy, cy, sz, cz;
    albw_sincos_idx(&sx, &cx, ax);
    albw_sincos_idx(&sy, &cy, ay);
    albw_sincos_idx(&sz, &cz, az);
    float cxsz = cx * sz;
    float sxsz = sx * sz;
    float cxcz = cx * cz;
    float sxsy = sx * sy;
    m[0] = cy * cz;
    float m1 = sxsy * cz - cxsz;
    m[1] = m1;
    m[2] = sxsz + cxcz * sy;
    m[3] = cy * sz;
    m[4] = cxcz + sxsy * sz;
    m[5] = sy * cxsz - sx * cz;
    m[6] = -sy;
    m[7] = sx * cy;
    m[8] = cx * cy;
    return m1;
}
