/* USA 0068C690 <- EU 0068C668: yaw angle of a Vec3 = atan2(v.x, v.z) as a 32-bit angle index
 * (0x40000000 = 90 deg). 333 static callers / 435 call sites (actor facing, player turning,
 * homing): the most used angle function of the gameplay code.
 * The ARM body is 004904CC (atan2) inlined with y = v[0] (s1) and x = v[2] (s2): same branch
 * tree, same quotients, same integer adds (checked branch by branch, EU 0068C668-0068C764),
 * including the ARM condition codes on NaN (blt / bhi taken when unordered).
 * Ghidra's C used C comparisons (NaN takes other branches); otherwise equivalent.
 * Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

int func_0068C690(float *v) {
    float z = v[2];
    float x = v[0];
    return albw_atan2_idx(x, z);
}
