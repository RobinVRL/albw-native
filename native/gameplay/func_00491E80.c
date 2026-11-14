/* USA 00491E80 <- EU 00491E58: Matrix34 from Euler angles (X, Y, Z as 32-bit angle indices,
 * r1..r3), zero translation. 78 static callers (actor model matrices every frame).
 *   sinCos(&sx,&cx,ax); sinCos(&sy,&cy,ay); sinCos(&sz,&cz,az)        (00115154)
 *   m = | cy*cz   (sx*sy)*cz - cx*sz   sx*sz + (cx*cz)*sy   0 |
 *       | cy*sz   cx*cz + (sx*sy)*sz   sy*(cx*sz) - sx*cz   0 |
 *       | -sy     sx*cy                cx*cy                0 |
 * (vnmls d = -d + n*m; vmls d = d - n*m; vmla d = d + n*m: every product rounded, operand
 * order as in the ARM; -d + p == p - d exactly in IEEE.) Returns 0 (r0 at exit
 * is the last sinCos's result, a dead stack address).
 * Ghidra's C matched; rewritten as the exact hot-path version.
 * Verified against EU 00491E58-00491F30 instruction by instruction. Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

int func_00491E80(float *m, uint32_t ax, uint32_t ay, uint32_t az) {
    float sx, cx, sy, cy, sz, cz;
    albw_sincos_idx(&sx, &cx, ax);
    albw_sincos_idx(&sy, &cy, ay);
    albw_sincos_idx(&sz, &cz, az);
    float cxsz = cx * sz;
    float sxsz = sx * sz;
    float cxcz = cx * cz;
    float sxsy = sx * sy;
    m[0] = cy * cz;
    m[1] = sxsy * cz - cxsz;
    m[2] = sxsz + cxcz * sy;
    m[3] = 0.0f;
    m[4] = cy * sz;
    m[5] = cxcz + sxsy * sz;
    m[6] = sy * cxsz - sx * cz;
    m[7] = 0.0f;
    m[8] = -sy;
    m[9] = sx * cy;
    m[10] = cx * cy;
    m[11] = 0.0f;
    return 0;
}
