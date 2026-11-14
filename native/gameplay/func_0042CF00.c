/* USA 0042CF00 <- EU 0042CEE0: collision narrow phase, ray/segment vs. plane shape
 * (shape+0x58 normal, shape+0x64 distance).
 *     int f(PlaneShape *pl, const float p[3], const float dir[3], HitInfo *hit, float maxT);
 *   nd = n.dir; if |nd| is "zero" (bit pattern < 0x34000000, i.e. < 2^-23): hit only when
 *   |n.p| - d is also "zero" (point on the plane), hit point = p; otherwise
 *   t = (d - n.p) / nd, hit when 0 <= t <= maxT, hit point = p + dir*t.
 *   hit (if non-NULL): +0x1C = 0.0, +4..+0xC = plane normal (word copies), +0x10..+0x18 = point.
 * Callers: 0042AFC4, 003A16F0, 00553EC4.
 *
 * What was wrong in the Ghidra C: both "near zero" tests are `vnegle` + `vmov r0, sN;
 * cmp r0, #0x34000000` (signed compare of the float bits). Ghidra printed `(int)fVar2 <
 * 0x34000000` (a value conversion: true for every |x| < 8.9e8), so natively every ray was
 * treated as parallel to the plane and hit only when its origin lay on it.
 * NaN: |x| uses vnegle (negates when x <= 0 or unordered); t < 0 rejects with `blo` (ordered),
 * t <= maxT accepts with `ble` (unordered accepted).
 *
 * Verified against EU 0042CEE0-0042D03C instruction by instruction (dot products vmul/vmla in
 * x,y,z order with the plane normal as second factor; hit point p + (dir*t) via 00115D70 /
 * 00115C54 order). Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

int func_0042CF00(uint32_t pl_w, const float *p, const float *dir, uint32_t hit_w, float maxT) {
    char *pl = (char *)gp_ptr(pl_w);
    char *hit = (char *)gp_ptr(hit_w);
    float nx = FLD(pl, 0x58, float), ny = FLD(pl, 0x5C, float), nz = FLD(pl, 0x60, float);
    float d = FLD(pl, 0x64, float);
    float nd = dir[0] * nx + dir[1] * ny + dir[2] * nz;
    float a = nd;
    if (VCMP_LE(a, 0.0f)) a = -a;
    float hx, hy, hz;
    if (gp_f2i_bits(a) < 0x34000000) {
        float np = p[0] * nx + p[1] * ny + p[2] * nz;
        if (VCMP_LE(np, 0.0f)) np = -np;
        if (!(gp_f2i_bits(np - d) < 0x34000000))
            return 0;
        hx = p[0];
        hy = p[1];
        hz = p[2];
    } else {
        float np = p[0] * nx + p[1] * ny + p[2] * nz;
        float t = (d - np) / nd;
        if (VCMP_LO(t, 0.0f))
            return 0;
        if (!VCMP_LE(t, maxT))
            return 0;
        float sx = dir[0] * t, sy = dir[1] * t, sz = dir[2] * t;
        hx = p[0] + sx;
        hy = p[1] + sy;
        hz = p[2] + sz;
    }
    if (hit) {
        FLD(hit, 0x1C, float) = 0.0f;
        FLD(hit, 0x04, uint32_t) = FLD(pl, 0x58, uint32_t);
        FLD(hit, 0x08, uint32_t) = FLD(pl, 0x5C, uint32_t);
        FLD(hit, 0x0C, uint32_t) = FLD(pl, 0x60, uint32_t);
        FLD(hit, 0x10, float) = hx;
        FLD(hit, 0x14, float) = hy;
        FLD(hit, 0x18, float) = hz;
    }
    return 1;
}
