/* USA 00115DC8 <- EU 00115DC8: Vec3 normalize in place, RETURNS THE LENGTH in s0
 * (241 static callers, 24 of them use the length: vcmp s0 / vmov rX, s0 right after the call).
 *   vldmia r0,{s2-s4}; s7 = s2*s2; vmla s7 += s3*s3; vmla s7 += s4*s4; vsqrt s0 = s7
 *   vcmpe s0, #0; bxle lr            ; length <= 0 OR NaN: vector unchanged, return length
 *   s6 = 1.0 / s0; v *= s6; vstmia r0
 *
 * Bugs fixed:
 *  - Ghidra typed it void: the length (s0) is lost. Callers that test it silently compare a
 *    stale value instead (e.g. 0013EA58: `if (fVar6 == fVar9)` where the ARM compares the
 *    length returned here with 0). The exact version is albw_vec3_normalize() (float).
 *  - NaN: `bxle` is taken for an unordered compare, so a NaN length leaves the vector as is;
 *    Ghidra's `if (len <= 0) return;` falls through for NaN and writes NaN * v.
 * func_00115DC8 itself keeps the callers' declared prototype `int (float *)` (a float return
 * here would leave a value on the i386 x87 stack at all 488 converted call sites, see
 * gameplay.h); it returns the length's bit pattern in the int. Once the signature table
 * declares `float func_00115DC8(float *)` consistently, define it as albw_vec3_normalize.
 * Verified against EU 00115DC8-00115E0C. Confidence: high. */
#include <math.h>
#include "gameplay.h"
#include "gp_math.h"

float albw_vec3_normalize(float *v) {
    float x = v[0], y = v[1], z = v[2];
    float sq = x * x;
    sq = sq + y * y;
    sq = sq + z * z;
    float len = sqrtf(sq);
    if (VCMP_LE(len, 0.0f))
        return len;
    float r = 1.0f / len;
    v[0] = x * r;
    v[1] = y * r;
    v[2] = z * r;
    return len;
}

int func_00115DC8(float *v) {
    return (int)gp_f2u(albw_vec3_normalize(v));
}
