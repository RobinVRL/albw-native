/* USA 00115C54 <- EU 00115C54: Vec3 add, out = a + b  (sead::Vector3f add; 735 static callers,
 * the hottest vector op with 00115C70).
 *   vldmia r1,{s0-s2}; vldmia r2,{s3-s5}; vadd s6..s8; vstmia r0,{s6-s8}; bx lr
 * Ghidra C was right for the floats. Rewritten as the exact native version: all loads before
 * the stores (out may alias a or b), single-precision adds in x,y,z order. Returns r0 as left
 * by the ARM code (= out; callers are declared `int f(float*,float*,float*)`, 36 tail uses of
 * r0 by the callers' own returns).
 * Verified against EU 00115C54-00115C6C. Confidence: high. */
#include "gameplay.h"

int func_00115C54(float *out, float *a, float *b) {
    float a0 = a[0], a1 = a[1], a2 = a[2];
    float b0 = b[0], b1 = b[1], b2 = b[2];
    out[0] = a0 + b0;
    out[1] = a1 + b1;
    out[2] = a2 + b2;
    return (int)gp_u32(out);
}
