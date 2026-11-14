/* USA 004ED9F4 <- EU 004ED9CC: actor collision component vs. its KCL mesh, sphere/AABB
 * prefilter, then the mesh query.
 *     int f(ColComp *comp, Query *q, int count, Shape *sphere, u32 passthrough);
 *   mesh = comp+0x10 (KCL collision object, AABB min +0x34 / max +0x40); r = sphere->radius
 *   (+0x58) + q->margin (+0x24); if the sphere box [pos-r, pos+r] (pos = sphere+4) overlaps the
 *   mesh AABB on x, z, y (that test order) -> tail call 0042E7F4(mesh, q, count, passthrough);
 *   otherwise returns r0 = mesh (NULL when the component has no mesh).
 * Callers: 004A8334 / 004AA9FC (collision manager per-cell loops).
 *
 * What was wrong in the Ghidra C: the AABB words were read through an int pointer and printed as
 * `(float)piVar2[0xd]` value conversions (integer bits -> float value: ~1e9 instead of the
 * coordinate), so the prefilter accepted/rejected at random. The 5th argument (stack, forwarded
 * as r3 to the tail call) was dropped; 0042E7F4 does not read it, so it is accepted and ignored.
 * NaN: the rejects are `bhi`/`blt` (taken when unordered) -> VCMP_HI/VCMP_LT.
 *
 * Verified against EU 004ED9CC-004EDA84 instruction by instruction (add operand order
 * radius + margin, pos + r, pos - r). Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

int func_0042E7F4(char *obj, char *q, int count);

int func_004ED9F4(char *comp, char *q, int count, char *sphere, uint32_t passthrough) {
    (void)passthrough;
    char *mesh = GPTR(comp, 0x10, char);
    if (!mesh)
        return 0;
    float r = FLD(sphere, 0x58, float) + FLD(q, 0x24, float);
    float px = FLD(sphere, 4, float), py = FLD(sphere, 8, float), pz = FLD(sphere, 0xC, float);
    if (VCMP_HI(FLD(mesh, 0x34, float), px + r)) return (int)gp_u32(mesh);
    if (VCMP_HI(FLD(mesh, 0x3C, float), pz + r)) return (int)gp_u32(mesh);
    if (VCMP_LT(FLD(mesh, 0x40, float), px - r)) return (int)gp_u32(mesh);
    if (VCMP_LT(FLD(mesh, 0x48, float), pz - r)) return (int)gp_u32(mesh);
    if (VCMP_HI(FLD(mesh, 0x38, float), py + r)) return (int)gp_u32(mesh);
    if (VCMP_LT(FLD(mesh, 0x44, float), py - r)) return (int)gp_u32(mesh);
    return func_0042E7F4(mesh, q, count);
}
