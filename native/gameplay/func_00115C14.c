/* USA 00115C14 <- EU 00115C14: Vec2 normalize in place, returns the length in s0.
 *   vldmia r0,{s2,s3}; s6 = s2*s2; vmla s6 += s3*s3; vsqrt s0 = s6
 *   vcmpe s0,#0; bxle lr; s6 = 1/s0; v *= s6; vstmia r0,{s4,s5}
 * Same defects as 00115DC8 (void in Ghidra: length lost; NaN length takes the early return).
 * Round 2 declares `extern float func_00115C14(float *)` in the 3 caller files: func_ returns
 * the float (= albw_vec2_normalize).
 * Verified against EU 00115C14-00115C50. Confidence: high. */
#include <math.h>
#include "gameplay.h"
#include "gp_math.h"

float albw_vec2_normalize(float *v) {
    float x = v[0], y = v[1];
    float sq = x * x;
    sq = sq + y * y;
    float len = sqrtf(sq);
    if (VCMP_LE(len, 0.0f))
        return len;
    float r = 1.0f / len;
    v[0] = x * r;
    v[1] = y * r;
    return len;
}

float func_00115C14(float *v) {
    return albw_vec2_normalize(v);
}
