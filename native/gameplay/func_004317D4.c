/* USA 004317D4 <- EU 004317B4: KCL octree walk below a node: visits every prism of every leaf
 * reached from child slot `slot` of `node` and, depending on the global query context
 * ctx = data_007307DC, collects or reports them.
 *     void f(KclObj *obj, u8 *node, u32 slot, Callback *cb);
 *   w = *(u32 *)(node + slot): bit31 clear -> inner node at node + w: recurse into its 8 child
 *   words (0, 4, ..., 0x1C); bit31 set -> leaf at node + (w & 0x7FFFFFFF): u16 prism indices
 *   from leaf+2, 0-terminated. Per prism (obj+0x5C = KCL header: +0 positions, +4 normals,
 *   +8 prisms (16 bytes: f32 height, u16 pos, fnrm, en1, en2, en3, attr)):
 *     obj+0x70 = prism; skip unless ctx+0x68 has bit (attr & 31); skip attr class
 *     ((attr & 0xB000) >> 12) == 9 when data_00709C38 != 0, == 8 otherwise; skip prisms already
 *     visited (per-prism link {u32,u32} at (obj+0x58)+0xCC [index < count +0xC8, else entry 0]
 *     non-zero); else link it into obj+0x78 (0010F1DC, node address = obj+0x84 word + entry)
 *     and count obj+0x80. Then
 *   - ctx+0x6E == 0 (gather): unless ctx+0x6F (stop) is set, cb->vt[0](cb, obj); stop when
 *     ctx+0x6F becomes set;
 *   - ctx+0x6E != 0 (sphere query, centre ctx+8, radius ctx+0x14): d = centre - vertex;
 *     hit when d.en1 <= r, d.en2 <= r, d.en3 <= height + r, -r <= -(d.fn) <= r and
 *     -(d.fn) is not -FLT_MAX (bit test); the prism index is appended to the u16 hit list at
 *     *(obj+0x488) (multi-query mode obj+0x4A0 != 0: only if not already present between
 *     *(obj+0x48C)+2 and the write pointer); when the write pointer reaches obj+0x488 itself
 *     (list full) it steps back one entry and the walk of this leaf ends.
 * Callers: 0043081C (octree box walk), 0042EFB0, itself.
 *
 * What was wrong in the Ghidra C: the radius is `vldr s16, [ctx, #0x14]`; Ghidra typed the word
 * as an integer and printed `fVar16 = (float)uVar17`, a VALUE conversion of the bit pattern
 * (a radius of 0.5 = 0x3F000000 became 1.06e9). Natively every prism of every visited leaf passed
 * the sphere test: KCL queries returned all nearby triangles (wrong floor/wall contacts).
 * NaN: the plane tests are `bgt` (NaN passes), the lower bound `blo` (NaN passes).
 *
 * Verified against EU 004317B4-00431F04 instruction by instruction (three loops 431838,
 * 431AEC, 431D78; recursion 431E5C). Dead stores of the triangle record on the stack (sp+0x18 /
 * sp+0x28: header, prism, index, vertex copy, ctx+0x38, 1.0f) are omitted: nothing reads them.
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

extern char data_007307DC[];
extern uint8_t data_00709C38;
void func_0010F1DC(void *list, void *link);
void albw_kcl_walk(char *obj, char *node, uint32_t slot, char *cb);

typedef void (*kcl_cb_fn)(void *cb, void *obj);

/* the filters + "visited" link shared by the three loops; 1 = prism accepted (newly visited) */
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

/* the sphere-vs-prism test of the query loops */
static int prism_hit(char *obj, char *ctx, float r, int multi) {
    char *hdr = GPTR(obj, 0x5C, char);
    char *prism = GPTR(obj, 0x70, char);
    const float *v = (const float *)AT(GPTR(hdr, 0, char), FLD(prism, 4, uint16_t) * 12);
    const float *c = (const float *)AT(ctx, 8);
    float dx = c[0] - v[0], dy = c[1] - v[1], dz = c[2] - v[2];
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
    float s;
    if (multi)
        s = -(dx * n[0] + dy * n[1]) - dz * n[2];   /* vmul, vmla, vnmla */
    else
        s = -(dx * n[0] + dy * n[1] + dz * n[2]);   /* vmul, vmla, vmla, vneg */
    if (VCMP_LO(s, -r)) return 0;
    if (VCMP_GT(s, r)) return 0;
    if (gp_f2u(s) + 0x800001u == 0) return 0;       /* s is exactly -FLT_MAX */
    return 1;
}

/* pointer version (recursion; also for other native rewrites, e.g. the box walkers) */
void albw_kcl_walk(char *obj, char *node, uint32_t slot, char *cb) {
    uint32_t w = FLD(node, slot, uint32_t);
    if ((w & 0x80000000u) == 0) {
        char *child = node + w;
        for (uint32_t k = 0; k < 0x20; k += 4)
            albw_kcl_walk(obj, child, k, cb);
        return;
    }
    char *ctx = data_007307DC;
    uint16_t *ent = (uint16_t *)(node + (w & 0x7FFFFFFFu));
    char *wpp = obj + 0x488;            /* &write pointer, also the end of the hit buffer */

    if (FLD(ctx, 0x6E, uint8_t) == 0) {             /* gather mode */
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
        if (!prism_hit(obj, ctx, r, multi))
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
        if ((uintptr_t)GPTR(obj, 0x488, char) >= (uintptr_t)wpp) {   /* buffer full */
            FLD(wpp, 0, uint32_t) = FLD(obj, 0x488, uint32_t) - 2;
            return;
        }
    }
}

/* round-2 callers: `extern int func_004317D4(int, int, int, undefined4 *)`: obj and node as
 * 32-bit words (-m64: the upper half of an int argument register is undefined) */
void func_004317D4(uint32_t obj_w, uint32_t node_w, uint32_t slot, char *cb) {
    albw_kcl_walk((char *)gp_ptr(obj_w), (char *)gp_ptr(node_w), slot, cb);
}
