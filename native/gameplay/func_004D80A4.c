/* USA 004D80A4 <- EU 004D807C: polar -> XZ offset: out.x = sin(a) * r, out.z = cos(a) * r
 * (out.y untouched), a = 32-bit angle index (r1), r = radius (s0). 235 static callers
 * (movement direction from facing, spawn rings, circling).
 *   vmov s16, s0; 00115154(sp+0, sp+4, a); s0 = [sp]*s16; s1 = [sp+4]*s16; vstr s0,[r4]; vstr s1,[r4+8]
 * Exact native version; r0 at return is a dead stack address on ARM (callers do not use it:
 * 2 reads in 319 sites, both reload r0 first), returned as 0.
 * Verified against EU 004D807C-004D80C0. Confidence: high. */
#include "gameplay.h"
#include "gp_math.h"

int func_004D80A4(float *out, uint32_t angle, float radius) {
    float s, c;
    albw_sincos_idx(&s, &c, angle);
    out[0] = s * radius;
    out[2] = c * radius;
    return 0;
}
