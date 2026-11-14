/* USA 0042D8F4 <- EU 0042D8D4: collision narrow phase, closest point of segment [a,b] to point p.
 *     float f(const float p[3], const float a[3], const float b[3], float *out_t, float *out_dir);
 * Returns the squared distance in s0; *out_t (if non-NULL) = clamped parameter in [0,1];
 * out_dir (5th arg, stack; if non-NULL) = the normalized segment direction.
 * Callers: 0042B9C8, 0042BD5C, 0042C7B8 (shape-pair tests).
 *
 * What was wrong in the Ghidra C: the segment length is the s0 RESULT of Vec3 normalize 00115DC8
 * (Ghidra types it void), so the C used an uninitialised `in_s0` for the length in the
 * "t <= len" test and in t = proj / len. Natively the clamp and t were garbage.
 *
 * Verified against EU 0042D8D4-0042DA6C: dir = b-a normalized (len kept in s17); v = p-a;
 * proj = dir.v (vmul/vmla order x,y,z); closest = a + dir*proj; d2 = |p-closest|^2;
 * `vcmpe proj,0; bhs` (unordered -> clamp-to-a branch not taken), `vcmpe proj,len; ble`
 * (unordered -> middle branch); end clamps use |p-a|^2 / |p-b|^2. The normalize is inlined here
 * (exact copy of 00115DC8: sqrt of x*x+y*y+z*z, `bxle` keeps the vector when len <= 0 or NaN).
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

float func_0042D8F4(const float *p, const float *a, const float *b, float *out_t, float *out_dir) {
    float dx = b[0] - a[0], dy = b[1] - a[1], dz = b[2] - a[2];
    float len = __builtin_sqrtf(dx * dx + dy * dy + dz * dz);
    if (!VCMP_LE(len, 0.0f)) {
        float inv = 1.0f / len;
        dx = dx * inv;
        dy = dy * inv;
        dz = dz * inv;
    }
    float vx = p[0] - a[0], vy = p[1] - a[1], vz = p[2] - a[2];
    float proj = dx * vx + dy * vy + dz * vz;
    float cx = a[0] + dx * proj, cy = a[1] + dy * proj, cz = a[2] + dz * proj;
    float wx = p[0] - cx, wy = p[1] - cy, wz = p[2] - cz;
    float d2 = wx * wx + wy * wy + wz * wz;

    if (!VCMP_HS(proj, 0.0f)) {          /* proj < 0: before a */
        if (out_t) *out_t = 0.0f;
        wx = p[0] - a[0]; wy = p[1] - a[1]; wz = p[2] - a[2];
        d2 = wx * wx + wy * wy + wz * wz;
    } else if (!VCMP_LE(proj, len)) {    /* proj > len: past b */
        if (out_t) *out_t = 1.0f;
        wx = p[0] - b[0]; wy = p[1] - b[1]; wz = p[2] - b[2];
        d2 = wx * wx + wy * wy + wz * wz;
    } else if (out_t) {
        *out_t = proj / len;
    }
    if (out_dir) {
        out_dir[0] = dx;
        out_dir[1] = dy;
        out_dir[2] = dz;
    }
    return d2;
}
