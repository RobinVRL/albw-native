/* USA 004A9178 <- EU 004A9150: collision manager, per-entry KCL query: tests the KCL mesh of
 * one collider entry against a query point with radius r (and AABB margin h).
 *     void f(CollisionMgr *mgr, ColEntry *e, const float p[3], Callback *cb, u32 attrMask,
 *            u32 flag, float r (s0), float h (s1));
 *   only when e+0x44 != 0 and 00589A64(e); mesh = e+0x10; the AABB of mesh (+0x34 min / +0x40
 *   max) must overlap [p - h, p + h] (x, z, then y); data_00709D28+8 = e during the query;
 *   flag != 0: if the mesh has hits (u16 mesh+0x88) -> 0042E8C8(mesh, cb, attrMask);
 *   flag == 0: R = mesh's KCL bounding radius ((mesh+0x5C)->[0x38], getter 005706B0);
 *     static mesh (e+0x14 == 0): R > r -> point query 0042E990(mesh, p - mesh->pos, ...);
 *       otherwise box query 0042EFB0 on the box spanning p.x +- r and p.z +- r (at p.y),
 *       made relative to mesh->pos (+4);
 *     moving mesh: r' = 00434418(mesh, &r', r) (transformed radius), local = 004342CC(mesh, p);
 *       R > r' -> 0042E990(mesh, local, ...); otherwise box around local (+- r, untransformed)
 *       -> 0042EFB0(mesh, min, max, attrMask, cb).
 * Callers: 004AAD4C (grid box query).
 *
 * What was wrong in the Ghidra C: 005706B0 returns the radius in s0 but was decompiled as
 * `void f(void)` (callers lose both its argument and its result); the C compared a stale field
 * (mesh+0x44) instead, so the point/box choice was random. The box-corner copies were printed
 * `fStack_80 = (float)uStack_40` (int VALUE -> float). Box edges use vmls (x - r*2.0f, product
 * rounded first: no fused multiply-add).
 *
 * Verified against EU 004A9150-004A94D4 instruction by instruction. Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern char data_00709D28[];
int func_00589A64(void *e);
int func_0042E8C8(void *mesh, void *cb, uint32_t mask);
void func_0042E990(void *mesh, const float *p, uint32_t mask, void *cb);
int func_0042EFB0(uint32_t obj_w, const float *mn, const float *mx, uint32_t mask, void *cb);
int func_00434418(void *mesh, float *out, float r);
int func_004342CC(void *mesh, float *out, const float *p);
void func_0068B200(float *box, const float *p);

/* box {min[3], max[3]} spanning c.x +- r and c.z +- r at c.y (the four 0068B200 extends) */
static void xz_box(float *box, const float *c, float r) {
    uint32_t fmax = 0x7F7FFFFFu, fmin = 0xFF7FFFFFu;
    for (int i = 0; i < 3; i++) {
        memcpy(&box[i], &fmax, 4);
        memcpy(&box[3 + i], &fmin, 4);
    }
    float t[3];
    memcpy(t, c, 12);
    t[0] = t[0] + r;
    func_0068B200(box, t);
    t[0] = t[0] - r * 2.0f;
    func_0068B200(box, t);
    memcpy(t, c, 12);
    t[2] = t[2] + r;
    func_0068B200(box, t);
    t[2] = t[2] - r * 2.0f;
    func_0068B200(box, t);
}

void func_004A9178(uint32_t mgr_w, uint32_t e_w, const float *p, void *cb, uint32_t attrMask, uint32_t flag, float r, float h) {
    (void)mgr_w;   /* unused on ARM too */
    char *e = (char *)gp_ptr(e_w);
    if (FLD(e, 0x44, uint8_t) == 0 || !func_00589A64(e))
        return;
    char *mesh = GPTR(e, 0x10, char);
    if (VCMP_HI(FLD(mesh, 0x34, float), p[0] + h)) return;
    if (VCMP_HI(FLD(mesh, 0x3C, float), p[2] + h)) return;
    if (VCMP_LT(FLD(mesh, 0x40, float), p[0] - h)) return;
    if (VCMP_LT(FLD(mesh, 0x48, float), p[2] - h)) return;
    if (VCMP_HI(FLD(mesh, 0x38, float), p[1] + h)) return;
    if (VCMP_HI(p[1] - h, FLD(mesh, 0x44, float))) return;

    FLD(data_00709D28, 8, uint32_t) = gp_u32(e);
    if (flag != 0) {
        if (FLD(mesh, 0x88, uint16_t) != 0)
            func_0042E8C8(mesh, cb, attrMask);
    } else if (FLD(e, 0x14, uint32_t) != 0) {               /* moving mesh */
        float rt = r;
        func_00434418(mesh, &rt, r);
        float R = FLD(GPTR(mesh, 0x5C, char), 0x38, float);  /* 005706B0 */
        float local[3];
        if (!VCMP_LE(R, rt)) {
            func_004342CC(mesh, local, p);
            func_0042E990(mesh, local, attrMask, cb);
        } else {
            func_004342CC(mesh, local, p);
            float box[6];
            xz_box(box, local, r);
            func_0042EFB0(gp_u32(mesh), &box[0], &box[3], attrMask, cb);
        }
    } else {                                                 /* static mesh */
        float R = FLD(GPTR(mesh, 0x5C, char), 0x38, float);  /* 005706B0 */
        const float *mp = (const float *)AT(mesh, 4);
        if (!VCMP_LE(R, r)) {
            float d[3] = {p[0] - mp[0], p[1] - mp[1], p[2] - mp[2]};
            func_0042E990(mesh, d, attrMask, cb);
        } else {
            float box[6];
            xz_box(box, p, r);
            float mn[3] = {box[0] - mp[0], box[1] - mp[1], box[2] - mp[2]};
            float mx[3] = {box[3] - mp[0], box[4] - mp[1], box[5] - mp[2]};
            func_0042EFB0(gp_u32(mesh), mn, mx, attrMask, cb);
        }
    }
    FLD(data_00709D28, 8, uint32_t) = 0;
}
