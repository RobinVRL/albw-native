/* USA 004AAF44 <- EU 004AAF1C: collision manager, sphere query: for every collider entry of
 * the selected layers whose shape overlaps the sphere (pos, radius), reports it to a callback.
 *     void f(CollisionMgr *mgr, const float pos[3], Callback *cb, u32 attrMask,
 *            u32 layerMask (stack), float radius (s0));
 *   builds a sphere shape on the stack (00432F74, type 6: centre +4, radius +0x58); gathers the
 *   grid cells overlapping [pos - r, pos + r] per layer (004A97F8 into the static list
 *   data_00734634), then walks the cells' lists and the large-object chain (mgr+0xBF3C, lists
 *   at obj+0xB4 + layer*12). Entry e = node+8 is tested when e+0x44 != 0, shape = e+0x18 != 0,
 *   attrMask has bit (shape+0x28 & 31), and the sphere box overlaps the shape AABB
 *   (+0x34 min, +0x40 max; x, z, then y); then data_00709D28+8 = e,
 *   if 0042DD38(&sphere, shape, NULL) -> cb->vt[0](cb, shape, e + 0x20); data_00709D28+8 = 0.
 * Callers: 001E9098, 001EA96C.
 *
 * What was wrong in the Ghidra C: the radius arrives in s0 (`vmov.f32 s16, s0`); Ghidra lost it
 * (`in_s0`) and also never wrote the {r,r,r} Vec3 at sp+0x60 used for the gather box, so the
 * sphere radius and the queried cells were garbage natively.
 * NaN: AABB rejects are bhi/blt (taken when unordered); the y-max test is
 * `vcmpe (pos.y - r), max.y; bhi`, not the mirrored form of the others (kept).
 *
 * Verified against EU 004AAF1C-004AB314 instruction by instruction (both entry loops share the
 * same test, factored into entry_test()). Confidence: high (flow), medium (callback naming). */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern char data_00709D28[];
extern char data_00734634[];
int func_00100174(void *guard);   /* static-local guard acquire */
int func_0010B3EC(void *buf, int cap, void *storage);
void func_00432F74(void *shape);  /* sphere shape ctor (type 6) */
int func_004A97F8(void *mgr, float *mn, float *mx, void *buf, uint32_t layer);
int func_0042DD38(void *a, void *b, void *hit);

typedef void (*hit_cb_fn)(void *cb, void *shape, void *info);

static void entry_test(char *e, char *sphere, char *cb, uint32_t attrMask) {
    if (FLD(e, 0x44, uint8_t) == 0) return;
    char *sh = GPTR(e, 0x18, char);
    if (!sh) return;
    if ((attrMask & (1u << (FLD(sh, 0x28, uint16_t) & 0x1F))) == 0) return;
    float r = FLD(sphere, 0x58, float);
    float px = FLD(sphere, 4, float), py = FLD(sphere, 8, float), pz = FLD(sphere, 0xC, float);
    if (VCMP_HI(FLD(sh, 0x34, float), px + r)) return;
    if (VCMP_HI(FLD(sh, 0x3C, float), pz + r)) return;
    if (VCMP_LT(FLD(sh, 0x40, float), px - r)) return;
    if (VCMP_LT(FLD(sh, 0x48, float), pz - r)) return;
    if (VCMP_HI(FLD(sh, 0x38, float), py + r)) return;
    if (VCMP_HI(py - r, FLD(sh, 0x44, float))) return;
    FLD(data_00709D28, 8, uint32_t) = gp_u32(e);
    if (func_0042DD38(sphere, sh, 0)) {
        hit_cb_fn fn = (hit_cb_fn)gp_ptr(FLD(GPTR(cb, 0, char), 0, uint32_t));
        fn(cb, GPTR(e, 0x18, char), e + 0x20);
    }
    FLD(data_00709D28, 8, uint32_t) = 0;
}

void func_004AAF44(char *mgr, const float *pos, char *cb, uint32_t attrMask, uint32_t layerMask,
                   float radius) {
    uint32_t shape_mem[0x5C / 4 + 1];   /* sp+4: shape object, 0x58 radius is its last word */
    char *sphere = (char *)shape_mem;
    func_00432F74(sphere);
    FLD(sphere, 4, uint32_t) = ((const uint32_t *)pos)[0];
    FLD(sphere, 8, uint32_t) = ((const uint32_t *)pos)[1];
    FLD(sphere, 0xC, uint32_t) = ((const uint32_t *)pos)[2];
    FLD(sphere, 0x58, float) = radius;

    char *buf = data_00734634;
    if ((FLD(data_00709D28, 0x28, uint32_t) & 1) == 0 && func_00100174(data_00709D28 + 0x28) != 0) {
        FLD(buf, 0, uint32_t) = 0;
        FLD(buf, 4, uint32_t) = 0;
        FLD(buf, 8, uint32_t) = 0;
        func_0010B3EC(buf, 100, buf + 0xC);
    }
    float mn[3] = {pos[0] - radius, pos[1] - radius, pos[2] - radius};
    float mx[3] = {pos[0] + radius, pos[1] + radius, pos[2] + radius};
    char *big = mgr + 0xBF3C;
    for (uint32_t layer = 0; layer < 6; layer++) {
        if ((layerMask & (1u << layer)) == 0)
            continue;
        FLD(buf, 0, uint32_t) = 0;
        func_004A97F8(mgr, mn, mx, buf, layer);
        int32_t n = FLD(buf, 0, int32_t);
        for (int32_t i = 0; i < n; i++) {
            char *head = 0;
            if (FLD(buf, 0, uint32_t) > (uint32_t)i)
                head = gp_ptr(FLD(GPTR(buf, 8, char), i * 4, uint32_t));
            for (char *node = GPTR(head, 4, char); node != head; node = GPTR(node, 4, char))
                entry_test(GPTR(node, 8, char), sphere, cb, attrMask);
        }
        int32_t off = FLD(big, 0xC, int32_t);
        for (char *obj = (char *)gp_ptr(FLD(big, 4, uint32_t) - (uint32_t)off);
             obj != (char *)gp_ptr(gp_u32(big) - FLD(big, 0xC, uint32_t));
             obj = (char *)gp_ptr(FLD(obj + off, 4, uint32_t) - (uint32_t)off)) {
            char *lst = obj + 0xB4 + (layer < 6 ? layer * 12 : 0);
            for (char *node = GPTR(lst, 4, char); node != lst; node = GPTR(node, 4, char))
                entry_test(GPTR(node, 8, char), sphere, cb, attrMask);
        }
    }
}
