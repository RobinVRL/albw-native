/* USA 0043081C <- EU 004307FC: KCL octree walk of the part of one octree child that lies inside
 * the query box (the recursive half of the box walker 0042EFB0).
 *     void f(KclObj *obj, u8 *node, u32 slot, Callback *cb,
 *            u32 lox, u32 loy, u32 loz, u32 hix, u32 hiy, u32 hiz);   (r0-r3 + 6 stack words)
 *   lo_ and hi_ words are the box bounds inside the child, as fixed-point fractions of the child's extent
 *   in the top bits (lo = 0: box starts at the child's low face, hi = 0xFFFFFFFF: box reaches
 *   its high face; 0042EFB0 builds them as coord << (31 - shift)).
 *   - all lo == 0 and all hi == ~0 (child fully inside): w = node[slot]: leaf -> leaf scan,
 *     inner -> the whole subtree via 004317D4 (8 calls, slots 0..0x1C, node + w);
 *   - else nothing to do when lox or loy == ~0, loz == ~0 or hix == 0, hiy or hiz == 0;
 *   - else w = node[slot]: leaf -> leaf scan; inner -> split each axis at the half:
 *       l2 = lo << 1: bit31 clear -> (first half lo = l2, second half lo = 0)
 *                     bit31 set   -> (first half lo = ~0 [empty], second half lo = l2)
 *       h2 = hi << 1: bit31 set   -> (first half hi = ~0, second half hi = h2)
 *                     bit31 clear -> (first half hi = h2, second half hi = 0 [empty])
 *     and recurse into the 8 children of node + w, slot 4*k, k = x + 2y + 4z (1 = second half).
 *   The leaf scan (u16 prism indices from leaf+2, 0-terminated) is the one of 004317D4: filters
 *   (ctx+0x68 attribute mask, attribute class 8/9 by data_00709C38), "visited" link per prism
 *   (0010F1DC into obj+0x78, count obj+0x80), then gather mode (ctx+0x6E == 0: cb->vt[0](cb, obj)
 *   until ctx+0x6F) or sphere mode (centre ctx+8, radius ctx+0x14: d = centre - vertex via
 *   00115C70; d.en1 <= r, d.en2 <= r, d.en3 <= height + r, -r <= s <= r with
 *   s = -(d.fn.x*.. + d.fn.y*..) - d.fn.z*.. (vmul, vmla, vnmla), s != -FLT_MAX (bit test); hit ->
 *   u16 append at *(obj+0x488), deduplicated in multi mode obj+0x4A0; list full -> step back one
 *   entry and return).
 * Callers: 0042EFB0 (8 calls per partially covered inner cell), itself.
 *
 * What was wrong in the round-2 Ghidra C (build/ghidra_analyzed4): the distance vector d that
 * 00115C70 writes to sp+0 is read as `in_stack_ffffff38/3c/40` (lost stack object, 35 in_stack
 * uses): natively every sphere-vs-prism test of this walker compared uninitialised stack words
 * (random hits/misses on every box KCL query). The radius is fixed in round 2 (ALBW_AS_F32), the
 * call into itself passes one bound through `(int)ALBW_AS_U32(float)`.
 * ctx+0x6E, ctx+0x6F (entry gather check) and the radius are read once at entry on ARM; nothing
 * is called before their use, so reading them at the use is the same.
 *
 * Signature: round-2 callers declare `extern int func_0043081C(int, int, int, undefined4 *, int,
 * int, int, uint, uint, uint)`; this definition takes the same classes (game pointers as 32-bit
 * words -> gp_ptr, so -m64 is right). The pointer version is albw_kcl_box_node().
 * Verified against EU 004307FC-004317B0 instruction by instruction (entry 4307FC; leaf loops
 * 4308DC, 430984, 430C2C, 430E84, 431248, 4314AC; subtree calls 430F60; split 431588).
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern char data_007307DC[];
extern uint8_t data_00709C38;
void func_0010F1DC(void *list, void *link);
void albw_kcl_walk(char *obj, char *node, uint32_t slot, char *cb);   /* 004317D4 */
void albw_kcl_box_node(char *obj, char *node, uint32_t slot, char *cb,
                       const uint32_t lo[3], const uint32_t hi[3]);
void albw_kcl_leaf(char *obj, uint16_t *ent, char *cb);
int func_0043081C(uint32_t obj_w, uint32_t node_w, uint32_t slot, void *cb, int32_t lox,
                  int32_t loy, int32_t loz, uint32_t hix, uint32_t hiy, uint32_t hiz);

typedef void (*kcl_cb_fn)(void *cb, void *obj);

/* filters + "visited" link; 1 = prism newly visited */
static int take_prism(char *obj, char *ctx, uint32_t idx) {
    char *hdr = GPTR(obj, 0x5C, char);
    char *prism = GPTR(hdr, 8, char) + idx * 16;
    FLD(obj, 0x70, uint32_t) = gp_u32(prism);
    uint32_t attr = FLD(prism, 0xE, uint16_t);
    if ((FLD(ctx, 0x68, uint32_t) & (1u << (attr & 0x1F))) == 0)
        return 0;
    uint32_t cls = (attr & 0xB000) >> 12;
    if (data_00709C38 != 0 ? cls == 9 : cls == 8)
        return 0;
    int32_t pi = (int32_t)(gp_u32(prism) - FLD(hdr, 8, uint32_t)) >> 4;
    char *ko = GPTR(obj, 0x58, char);
    char *e = (FLD(ko, 0xC8, uint32_t) > (uint32_t)pi) ? GPTR(ko, 0xCC, char) + pi * 8
                                                       : GPTR(ko, 0xCC, char);
    if (FLD(e, 4, uint32_t) != 0 || FLD(e, 0, uint32_t) != 0)
        return 0;
    func_0010F1DC(obj + 0x78, gp_ptr(FLD(obj, 0x84, uint32_t) + gp_u32(e)));
    FLD(obj, 0x80, int32_t) += 1;
    return 1;
}

/* sphere vs prism (all leaf loops of 0042EFB0/0043081C use vnmla for the face plane) */
static int prism_hit(char *obj, char *ctx, float r) {
    char *hdr = GPTR(obj, 0x5C, char);
    char *prism = GPTR(obj, 0x70, char);
    const float *v = (const float *)AT(GPTR(hdr, 0, char), FLD(prism, 4, uint16_t) * 12);
    const float *c = (const float *)AT(ctx, 8);
    float dx = c[0] - v[0], dy = c[1] - v[1], dz = c[2] - v[2];      /* 00115C70 */
    char *nrm = GPTR(hdr, 4, char);
    const float *n;
    n = (const float *)AT(nrm, FLD(prism, 8, uint16_t) * 12);
    if (VCMP_GT(dx * n[0] + dy * n[1] + dz * n[2], r)) return 0;
    n = (const float *)AT(nrm, FLD(prism, 0xA, uint16_t) * 12);
    if (VCMP_GT(dx * n[0] + dy * n[1] + dz * n[2], r)) return 0;
    n = (const float *)AT(nrm, FLD(prism, 0xC, uint16_t) * 12);
    float hr = FLD(prism, 0, float) + r;
    if (VCMP_GT(dx * n[0] + dy * n[1] + dz * n[2], hr)) return 0;
    n = (const float *)AT(nrm, FLD(prism, 6, uint16_t) * 12);
    float s = -(dx * n[0] + dy * n[1]) - dz * n[2];                 /* vmul, vmla, vnmla */
    if (VCMP_LO(s, -r)) return 0;
    if (VCMP_GT(s, r)) return 0;
    if (gp_f2u(s) + 0x800001u == 0) return 0;                       /* s == -FLT_MAX */
    return 1;
}

/* the inlined leaf scan; ent = leaf start (indices from ent+1) */
void albw_kcl_leaf(char *obj, uint16_t *ent, char *cb) {
    char *ctx = data_007307DC;
    char *wpp = obj + 0x488;            /* &write pointer == end of the hit buffer */

    if (FLD(ctx, 0x6E, uint8_t) == 0) {             /* gather */
        if (FLD(ctx, 0x6F, uint8_t) != 0)
            return;
        for (++ent; *ent != 0; ++ent) {
            if (!take_prism(obj, ctx, *ent))
                continue;
            kcl_cb_fn fn = (kcl_cb_fn)gp_ptr(FLD(GPTR(cb, 0, char), 0, uint32_t));
            fn(cb, obj);
            if (FLD(ctx, 0x6F, uint8_t) != 0)
                return;
        }
        return;
    }

    float r = FLD(ctx, 0x14, float);
    int multi = FLD(obj, 0x4A0, uint8_t) != 0;
    for (++ent; *ent != 0; ++ent) {
        if (!take_prism(obj, ctx, *ent))
            continue;
        if (!prism_hit(obj, ctx, r))
            continue;
        uint16_t *wp = GPTR(obj, 0x488, uint16_t);
        if (multi) {
            uint16_t *p = (uint16_t *)gp_ptr(FLD(obj, 0x48C, uint32_t) + 2);
            for (; p != wp; p++)
                if (*p == *ent)
                    break;
            if (p == wp) {
                FLD(wpp, 0, uint32_t) = gp_u32(wp + 1);
                *wp = *ent;
            }
        } else {
            FLD(wpp, 0, uint32_t) = gp_u32(wp + 1);
            *wp = *ent;
        }
        if (FLD(wpp, 0, uint32_t) >= gp_u32(wpp)) {   /* buffer full: bhs / !blo */
            FLD(wpp, 0, uint32_t) = FLD(obj, 0x488, uint32_t) - 2;
            return;
        }
    }
}

void albw_kcl_box_node(char *obj, char *node, uint32_t slot, char *cb,
                       const uint32_t lo[3], const uint32_t hi[3]) {
    uint32_t w;
    if ((lo[0] | lo[1] | lo[2]) == 0 && (hi[0] & hi[1] & hi[2]) == 0xFFFFFFFFu) {
        w = FLD(node, slot, uint32_t);
        if (w & 0x80000000u) {
            albw_kcl_leaf(obj, (uint16_t *)(node + (w & 0x7FFFFFFFu)), cb);
        } else {
            char *child = node + w;
            for (uint32_t k = 0; k < 0x20; k += 4)
                albw_kcl_walk(obj, child, k, cb);
        }
        return;
    }
    if (lo[0] == 0xFFFFFFFFu || lo[1] == 0xFFFFFFFFu) return;
    if (lo[2] == 0xFFFFFFFFu || hi[0] == 0) return;
    if (hi[1] == 0 || hi[2] == 0) return;
    w = FLD(node, slot, uint32_t);
    if (w & 0x80000000u) {
        albw_kcl_leaf(obj, (uint16_t *)(node + (w & 0x7FFFFFFFu)), cb);
        return;
    }
    char *child = node + w;
    uint32_t l1[3], l2[3], h1[3], h2[3];            /* first / second half per axis */
    for (int a = 0; a < 3; a++) {
        uint32_t l = lo[a] << 1, h = hi[a] << 1;
        if (l & 0x80000000u) { l1[a] = 0xFFFFFFFFu; l2[a] = l; }
        else                 { l1[a] = l;           l2[a] = 0; }
        if (h & 0x80000000u) { h1[a] = 0xFFFFFFFFu; h2[a] = h; }
        else                 { h1[a] = h;           h2[a] = 0; }
    }
    for (uint32_t k = 0; k < 8; k++) {
        int bx = k & 1, by = (k >> 1) & 1, bz = (k >> 2) & 1;
        func_0043081C(gp_u32(obj), gp_u32(child), k * 4, cb,
                      (int32_t)(bx ? l2[0] : l1[0]), (int32_t)(by ? l2[1] : l1[1]),
                      (int32_t)(bz ? l2[2] : l1[2]),
                      bx ? h2[0] : h1[0], by ? h2[1] : h1[1], bz ? h2[2] : h1[2]);
    }
}

int func_0043081C(uint32_t obj_w, uint32_t node_w, uint32_t slot, void *cb, int32_t lox,
                  int32_t loy, int32_t loz, uint32_t hix, uint32_t hiy, uint32_t hiz) {
    const uint32_t lo[3] = { (uint32_t)lox, (uint32_t)loy, (uint32_t)loz };
    const uint32_t hi[3] = { hix, hiy, hiz };
    albw_kcl_box_node((char *)gp_ptr(obj_w), (char *)gp_ptr(node_w), slot, (char *)cb, lo, hi);
    return 0;
}
