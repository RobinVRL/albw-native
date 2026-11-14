/* USA 00434F68 <- EU 00434F48: KCL, build the world-space triangle record of one prism
 * (used by every KCL narrow-phase test; callers 001E98DC, 00327D4C, 004A9B88).
 *     void f(KclTri *t, KclHeader *kcl, KclPrism *prism, MovingXf *xf (NULL = static),
 *            const float offset[3] (stack));
 *   00433ABC fills t: +0 kcl, +4 prism, +8 prism index, +0xC vertex = positions[prism+4],
 *   +0x18 = kcl+0x10 (prism thickness, raw word). Then:
 *   t+0x64 = prism attribute (u16 +0xE); t+0x58 = thickness, t+0x5C = thickness^2;
 *   static mesh (xf NULL or !(xf+0xA8 & 6)): t+0x1C = offset + vertex, t+0x28/34/40/4C = the
 *     face / edge normals normals[prism+6/+8/+0xA/+0xC] (word copies), t+0x60 = prism height;
 *   moving mesh: t+0x1C = M33(xf+0x3C) * vertex + offset; each normal = normalize(M33(xf+0x84)
 *     * n) (or a copy if the flag bits are clear); height = (xf+0xA8 & 2) ?
 *     n3' . (M33(xf+0x3C) * (n3 * h + vertex) + offset - t+0x1C) : xf->scale(+4) * h.
 *
 * What was wrong in the Ghidra C: t+0x18 is an int-typed word to Ghidra, so the thickness was
 * printed `fVar4 = (float)param_1[6]` (int VALUE -> float: the bit pattern 0x41200000 became
 * 1.09e9) and the stores of t+0x58/t+0x5C/t+0x60 as `(int)` value conversions. Natively every
 * KCL triangle had a garbage thickness/radius and (moving meshes) height, i.e. the KCL prism
 * tests used nonsense extents. Same `(int)` stores for the normal y/z words (dead branch).
 *
 * Verified against EU 00434F48-004352D8 instruction by instruction (branch order, the second
 * `tst #6` per normal, 0043513C height path: D70 -> C54 -> CE4 -> C54 -> C70 -> dot with
 * t+0x4C as vmul/vmla x,y,z). The Vec3/Matrix helpers are called (math library).
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

void func_00433ABC(void *t, void *kcl, void *prism);
void func_00115C54(float *out, const float *a, const float *b);   /* a + b */
void func_00115C70(float *out, const float *a, const float *b);   /* a - b */
void func_00115CE4(float *out, const float *m33, const float *v); /* m33 * v */
void func_00115DC8(float *v);                                     /* normalize */
void func_00115D70(float *out, const float *v, float s);          /* v * s */

static const float *kcl_vec(char *t, int idxOff) {
    char *kcl = GPTR(t, 0, char);
    char *pr = GPTR(t, 4, char);
    return (const float *)AT(GPTR(kcl, 4, char), FLD(pr, idxOff, uint16_t) * 12);
}

void func_00434F68(char *t, char *kcl, uint32_t prism_w, uint32_t xf_w, const float *offset) {
    char *prism = (char *)gp_ptr(prism_w);
    char *xf = (char *)gp_ptr(xf_w);
    func_00433ABC(t, kcl, prism);
    char *pr = GPTR(t, 4, char);
    FLD(t, 0x64, uint16_t) = FLD(pr, 0xE, uint16_t);
    float th = FLD(t, 0x18, float);
    FLD(t, 0x58, float) = th;
    FLD(t, 0x5C, float) = th * th;

    if (xf == 0 || (FLD(xf, 0xA8, uint8_t) & 6) == 0) {
        func_00115C54((float *)AT(t, 0x1C), offset, (float *)AT(t, 0xC));
        for (int i = 0; i < 4; i++) {
            const uint32_t *src = (const uint32_t *)kcl_vec(t, 6 + 2 * i);
            uint32_t *dst = (uint32_t *)AT(t, 0x28 + 12 * i);
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
        }
        FLD(t, 0x60, uint32_t) = FLD(GPTR(t, 4, char), 0, uint32_t);
        return;
    }

    func_00115CE4((float *)AT(t, 0x1C), (float *)AT(xf, 0x3C), (float *)AT(t, 0xC));
    func_00115C54((float *)AT(t, 0x1C), (float *)AT(t, 0x1C), offset);
    for (int i = 0; i < 4; i++) {
        const float *src = kcl_vec(t, 6 + 2 * i);
        float *dst = (float *)AT(t, 0x28 + 12 * i);
        if (FLD(xf, 0xA8, uint8_t) & 6) {
            func_00115CE4(dst, (float *)AT(xf, 0x84), src);
            func_00115DC8(dst);
        } else {
            ((uint32_t *)dst)[0] = ((const uint32_t *)src)[0];
            ((uint32_t *)dst)[1] = ((const uint32_t *)src)[1];
            ((uint32_t *)dst)[2] = ((const uint32_t *)src)[2];
        }
    }
    if (FLD(xf, 0xA8, uint8_t) & 2) {
        char *p = GPTR(t, 4, char);
        float a[3], b[3], top[3], d[3];
        func_00115D70(a, kcl_vec(t, 0xC), FLD(p, 0, float));
        func_00115C54(b, a, (float *)AT(t, 0xC));
        func_00115CE4(top, (float *)AT(xf, 0x3C), b);
        func_00115C54(top, top, offset);
        func_00115C70(d, top, (float *)AT(t, 0x1C));
        float *n = (float *)AT(t, 0x4C);
        FLD(t, 0x60, float) = n[0] * d[0] + n[1] * d[1] + n[2] * d[2];
        return;
    }
    FLD(t, 0x60, float) = FLD(xf, 4, float) * FLD(GPTR(t, 4, char), 0, float);
}
