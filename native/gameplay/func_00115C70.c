/* USA 00115C70 <- EU 00115C70: Vec3 sub, out = a - b  (851 static callers).
 *   vldmia r1,{s0-s2}; vldmia r2,{s3-s5}; vsub s6=s0-s3, s7=s1-s4, s8=s2-s5; vstmia r0
 * Exact native version: loads before stores (aliasing-safe), single precision. Returns r0
 * (= out) like the ARM code; callers are declared returning int.
 * Verified against EU 00115C70-00115C88. Confidence: high. */
#include "gameplay.h"

int func_00115C70(float *out, float *a, float *b) {
    float a0 = a[0], a1 = a[1], a2 = a[2];
    float b0 = b[0], b1 = b[1], b2 = b[2];
    out[0] = a0 - b0;
    out[1] = a1 - b1;
    out[2] = a2 - b2;
    return (int)gp_u32(out);
}
