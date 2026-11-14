/* USA 0042E990 <- EU 0042E970: KCL point query: finds the octree leaf containing point p and
 * collects / reports its prisms with the global KCL query context ctx = data_007307DC.
 *     void f(KclObj *obj, const float p[3], u32 attrMask, Callback *cb);
 *   ctx+0x68 = attrMask; hdr = obj+0x5C; c = (int)vcvt(p - hdr->areaMin(+0x14)) per axis; out of
 *   the octree when c & hdr->mask(+0x20/+0x24/+0x28); root index = (z >> s) << zs |
 *   (y >> s) << ys | x >> s (s = +0x2C, ys = +0x30, zs = +0x34), then down the inner nodes
 *   (word >= 0: node += word, s -= 1, child = bit s of z,y,x) to the leaf (bit31 set);
 *   obj+0x74 = leaf. Per prism (u16 list from leaf+2, 0-terminated): obj+0x70 = prism,
 *   attribute mask + class filter (data_00709C38 ? 9 : 8 excluded), then
 *   - ctx+0x6E == 0: cb->vt[0](cb, obj);
 *   - else sphere test (centre ctx+8, radius ctx+0x14) exactly as in 004317D4 (edge normals
 *     <= r, <= height + r; -r <= -(d.fn) <= r; not -FLT_MAX) and the prism index is appended to
 *     the hit list at *(obj+0x488) (deduplicated from *(obj+0x48C)+2 when obj+0x4A0 != 0);
 *     a full list (write pointer reaches obj+0x488) steps back one entry and ends the query.
 *   Unlike 004317D4 there is no "visited" link and both modes use the vnmla form of the
 *   face-normal distance.
 * Callers: 00431F44 (short segments), 004A9178, 0042E4CC, 00433D60, 00434558.
 *
 * What was wrong in the Ghidra C: (1) the radius `vldr s16, [ctx, #0x14]` was printed as
 * `fVar18 = (float)uVar19` (VALUE conversion of the bit pattern -> ~1e9: every prism of the leaf
 * was a hit); (2) the vertex z word copied with ldr/str was printed `local_50 = (float)puVar7[2]`
 * (int value -> float, wrong z for the distance); (3) the octree coordinates are
 * `vcvt.s32.f32` (saturating, NaN -> 0) printed as `(uint)` conversions (UB for negative values
 * natively: points below the area minimum must give a negative int that fails the mask test).
 *
 * Verified against EU 0042E970-0042EF8C instruction by instruction. Dead stores of the triangle
 * record (sp+0x24.. / sp+0x2C..: header, prism, index, vertex copy, ctx+0x38, 1.0f) omitted.
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern char data_007307DC[];
extern uint8_t data_00709C38;

typedef void (*kcl_cb_fn)(void *cb, void *obj);

/* ARM register-specified shifts use the low byte of the amount; >= 32 gives 0 */
static inline uint32_t lsr_r(uint32_t v, uint32_t s) { s &= 0xFF; return s >= 32 ? 0 : v >> s; }
static inline uint32_t lsl_r(uint32_t v, uint32_t s) { s &= 0xFF; return s >= 32 ? 0 : v << s; }

void func_0042E990(uint32_t obj_w, const float *p, uint32_t attrMask, char *cb) {
    char *obj = (char *)gp_ptr(obj_w);
    char *ctx = data_007307DC;
    FLD(ctx, 0x68, uint32_t) = attrMask;
    char *hdr = GPTR(obj, 0x5C, char);
    uint32_t x = (uint32_t)gp_vcvt_s32(p[0] - FLD(hdr, 0x14, float));
    if (FLD(hdr, 0x20, uint32_t) & x) return;
    uint32_t y = (uint32_t)gp_vcvt_s32(p[1] - FLD(hdr, 0x18, float));
    if (FLD(hdr, 0x24, uint32_t) & y) return;
    uint32_t z = (uint32_t)gp_vcvt_s32(p[2] - FLD(hdr, 0x1C, float));
    if (FLD(hdr, 0x28, uint32_t) & z) return;

    uint32_t s = FLD(hdr, 0x2C, uint32_t);
    char *node = GPTR(hdr, 0xC, char);
    uint32_t off = (lsl_r(lsr_r(z, s), FLD(hdr, 0x34, uint32_t)) |
                    lsl_r(lsr_r(y, s), FLD(hdr, 0x30, uint32_t)) | lsr_r(x, s)) << 2;
    int32_t w;
    while ((w = FLD(node, off, int32_t)) >= 0) {
        s -= 1;
        node += w;
        off = (((lsr_r(z, s) & 1) << 2) | ((lsr_r(y, s) & 1) << 1) | (lsr_r(x, s) & 1)) << 2;
    }
    char *leaf = node + ((uint32_t)w & 0x7FFFFFFFu);
    FLD(obj, 0x74, uint32_t) = gp_u32(leaf);
    uint16_t *ent = (uint16_t *)leaf;

    if (FLD(ctx, 0x6E, uint8_t) == 0) {
        for (++ent; *ent != 0; ++ent) {
            char *prism = GPTR(GPTR(obj, 0x5C, char), 8, char) + *ent * 16;
            FLD(obj, 0x70, uint32_t) = gp_u32(prism);
            uint32_t attr = FLD(prism, 0xE, uint16_t);
            if ((FLD(ctx, 0x68, uint32_t) & (1u << (attr & 0x1F))) == 0) continue;
            uint32_t cls = (attr & 0xB000) >> 12;
            if (data_00709C38 != 0 ? cls == 9 : cls == 8) continue;
            kcl_cb_fn fn = (kcl_cb_fn)gp_ptr(FLD(GPTR(cb, 0, char), 0, uint32_t));
            fn(cb, obj);
        }
        return;
    }

    float r = FLD(ctx, 0x14, float);
    int multi = FLD(obj, 0x4A0, uint8_t) != 0;
    char *wpp = obj + 0x488;
    for (++ent; *ent != 0; ++ent) {
        char *h = GPTR(obj, 0x5C, char);
        char *prism = GPTR(h, 8, char) + *ent * 16;
        FLD(obj, 0x70, uint32_t) = gp_u32(prism);
        uint32_t attr = FLD(prism, 0xE, uint16_t);
        if ((FLD(ctx, 0x68, uint32_t) & (1u << (attr & 0x1F))) == 0) continue;
        uint32_t cls = (attr & 0xB000) >> 12;
        if (data_00709C38 != 0 ? cls == 9 : cls == 8) continue;

        const float *v = (const float *)AT(GPTR(h, 0, char), FLD(prism, 4, uint16_t) * 12);
        const float *c = (const float *)AT(ctx, 8);
        float dx = c[0] - v[0], dy = c[1] - v[1], dz = c[2] - v[2];
        char *nrm = GPTR(h, 4, char);
        const float *n = (const float *)AT(nrm, FLD(prism, 8, uint16_t) * 12);
        if (VCMP_GT(dx * n[0] + dy * n[1] + dz * n[2], r)) continue;
        n = (const float *)AT(nrm, FLD(prism, 0xA, uint16_t) * 12);
        if (VCMP_GT(dx * n[0] + dy * n[1] + dz * n[2], r)) continue;
        n = (const float *)AT(nrm, FLD(prism, 0xC, uint16_t) * 12);
        float hr = FLD(prism, 0, float) + r;
        if (VCMP_GT(dx * n[0] + dy * n[1] + dz * n[2], hr)) continue;
        n = (const float *)AT(nrm, FLD(prism, 6, uint16_t) * 12);
        float sd = -(dx * n[0] + dy * n[1]) - dz * n[2];     /* vmul, vmla, vnmla */
        if (VCMP_LO(sd, -r)) continue;
        if (VCMP_GT(sd, r)) continue;
        if (gp_f2u(sd) == 0xFF7FFFFFu) continue;              /* -FLT_MAX */

        uint16_t *wp = GPTR(obj, 0x488, uint16_t);
        if (multi) {
            uint16_t *q = (uint16_t *)gp_ptr(FLD(obj, 0x48C, uint32_t) + 2);
            for (; q != wp; q++)
                if (*q == *ent)
                    break;
            if (q == wp) {
                FLD(wpp, 0, uint32_t) = gp_u32(wp + 1);
                *wp = *ent;
            }
        } else {
            FLD(wpp, 0, uint32_t) = gp_u32(wp + 1);
            *wp = *ent;
        }
        if ((uintptr_t)GPTR(obj, 0x488, char) >= (uintptr_t)wpp) {
            FLD(wpp, 0, uint32_t) = FLD(obj, 0x488, uint32_t) - 2;
            return;
        }
    }
}
