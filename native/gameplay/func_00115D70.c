/* USA 00115D70 <- EU 00115D70: Vec3 scale, out = v * s  (s in s0; 362 static callers).
 *   vldmia r1,{s1-s3}; vmul s4=s1*s0, s5=s2*s0, s6=s3*s0; vstmia r0,{s4-s6}; bx lr
 * Prototype as the converted callers declare it: (float *out, float *v, float s) -> int.
 * Returns r0 (= out, untouched by the ARM code; Ghidra typed it float *, the callers int).
 * Verified against EU 00115D70-00115D84. Confidence: high. */
#include "gameplay.h"

int func_00115D70(float *out, float *v, float s) {
    float v0 = v[0], v1 = v[1], v2 = v[2];
    out[0] = v0 * s;
    out[1] = v1 * s;
    out[2] = v2 * s;
    return (int)gp_u32(out);
}
