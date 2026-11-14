/* USA 0068156C (EU 00681544): KCL prism test of a swept sphere (one of the per-prism callbacks
 * of the KCL query, pointer table 00694740: [0]=001E98DC [2]=001E9E40 [4]=00681D10
 * [6]=0068156C), run for every candidate prism of the collision queries (context
 * data_007307DC, same as 00431F44: +4 hit-callback holder, +8 sphere centre P, +0x14 radius R,
 * +0x30 out-point object, +0x34 moving-mesh transform, +0x38 thickness, +0x48 movement vector,
 * +0x64 extra depth, +0x6C/+0x6D hit flags).
 * Route: actor/player ground and wall collision from the first frame on the field.
 * Bug: the converted source did not compile ("operand of type 'float' cannot be cast to a
 * pointer type"): the link had a tripwire stub, i.e. the first KCL prism test stops the game.
 * Rewritten from the EU disassembly 00681544..00681CE0 instruction by instruction. The ARM frame
 * is kept as a byte array at the same sp offsets, so stack slots that are reused across paths
 * (the hit record at sp+0x10 also overlays earlier temporaries, e.g. +0x2C of the record keeps
 * whatever sp+0x3C held) carry the same bytes as on the 3DS. Condition codes after vcmpe are
 * reproduced with their unordered (NaN) behaviour (blo/bgt/bge/bls ordered; ble/bhi/bhs/vnegle
 * taken on NaN); vmla/vmls/vnmls are unfused (product rounded, then added).
 * ARM-undefined: when the first edge test (n1) already fails and the plane distances do not
 * straddle (path 006817AC -> 0068187C), s17/s20 are read without being written (they hold the
 * caller's d8/d10 halves on the 3DS); here they are 0.0f.
 * Confidence: high (control flow and arithmetic), medium (field names). */
#pragma STDC FP_CONTRACT OFF
#include "../route.h"

extern uint32_t data_007307DC[], data_006F0F80[];
int func_00115C54(float *out, float *a, float *b);
int func_00115C70(float *out, float *a, float *b);
int func_00115D70(float *out, float *v, float s);
int func_00115CE4(float *out, float *m, float *v);
int *func_00433ABC(int *rec, int *prism_src, int idx);
int func_0068B200(float *obj, float *v);

#define W(o) (*(uint32_t *)(fr + (o)))
#define H16(o) (*(uint16_t *)(fr + (o)))
#define F(o) (*(float *)(fr + (o)))
#define V(o) ((float *)(fr + (o)))

static inline float dot3(const float *a, const float *b)
{
    float s = a[0] * b[0];
    s = s + a[1] * b[1];
    s = s + a[2] * b[2];
    return s;
}

void func_0068156C(char *r8, char *param_2)
{
    _Alignas(8) uint8_t fr[0xA4];
    memset(fr, 0, sizeof fr);
    char *C = (char *)data_007307DC;
    char *fpo = RP(C, 4);
    const float R = RF(C, 0x14, float);
    float s16, s17 = 0.0f, s18, s20 = 0.0f, s21, s22 = 0.0f;
    float *P = (float *)RAT(C, 8);
    int sb = 0, hit;

    W(0x58) = 0; W(0x5C) = 0; W(0x60) = 0;
    F(0x70) = 1.0f;
    func_00433ABC((int *)V(0x58), GPTR_TO(int, RF(r8, 0x5C, uint32_t)), (int)RF(r8, 0x70, uint32_t));
    W(0x70) = RF(C, 0x38, uint32_t);
    s18 = RF(C, 0x64, float);
    W(0x3C) = GPTR_OF(V(0x64)); /* str r2, [sp, #0x3c] (sp+0x64 kept in a slot) */
    func_00115C70(V(8), P, V(0x64));
    float D[3] = { F(8), F(0xC), F(0x10) };
    F(0x2C) = 0.0f; F(0x30) = 0.0f; F(0x34) = 0.0f;
    char *prism = GPTR_TO(char, W(0x5C));
    char *nrm = RP(GPTR_TO(char, W(0x58)), 4);
    float *n0 = (float *)(nrm + RF(prism, 6, uint16_t) * 12);
    float *n1 = (float *)(nrm + RF(prism, 8, uint16_t) * 12);
    float *n2 = (float *)(nrm + RF(prism, 0xA, uint16_t) * 12);
    float *n3 = (float *)(nrm + RF(prism, 0xC, uint16_t) * 12);
    func_00115C70(V(0x2C), P, (float *)RAT(C, 0x48));
    func_00115C70(V(0x2C), V(0x2C), V(0x64));
    if (dot3(V(0x2C), n0) < 0.0f)
        goto fail;
    s18 = s18 + R * 2.0f;
    if (F(0x70) > s18)
        s18 = F(0x70);
    s21 = dot3(D, n0);
    s16 = R - s21;
    if (s16 == 0.0f)
        goto a0c;
    if (0.0f > s16)
        goto fail;
    if (s16 >= s18)
        goto fail;
    s18 = dot3(D, n1);
    if (R < s18) {
        sb = 1;
        goto l734;
    }
    s17 = dot3(D, n2);
    if (s17 > R) {
        sb = 2;
        goto l734;
    }
    s20 = dot3(D, n3) - RF(prism, 0, float);
    if (!(s20 > R))
        goto l87c;
    sb = 4;
l734: {
        func_00115C70(V(0x88), V(0x2C), V(0x64));
        func_00115C70(V(0x74), P, V(0x64));
        float a = dot3(V(0x88), n0);
        if (!(a > 0.0f))
            a = -a;
        float b = dot3(V(0x74), n0);
        if (!(b > 0.0f))
            b = -b;
        a = a + b;
        if (!(a > 0.0f))
            goto l87c;
        float t = b / a;
        memcpy(V(0x40), RAT(C, 0x48), 12);
        func_00115D70(V(0x40), V(0x40), -t);
        func_00115C54(V(0x40), V(0x40), P);
        func_00115C70(V(0x98), V(0x40), V(0x64));
        float *I = V(0x98);
        if (sb & 1) {
            s18 = dot3(I, n1);
            if (s18 > R)
                goto fail;
        }
        if (sb & 3) {
            s17 = dot3(I, n2);
            if (s17 > R)
                goto fail;
        }
        if (sb & 7) {
            s20 = dot3(I, n3) - RF(prism, 0, float);
            if (s20 > R)
                goto fail;
        }
    }
l87c: {
        float s0;
        float *v1, *v4 = n2;
        if (s18 > s17) {
            if (s18 > s20) {
                s0 = s18;
                v1 = n1;
                if (!(s17 > s20)) {
                    s17 = s20;
                    v4 = n3;
                }
            } else {
                s0 = s20;
                s17 = s18;
                v1 = n3;
                v4 = n1;
            }
        } else if (s18 > s20) {
            s0 = s17;
            s17 = s18;
            v1 = n2;
            v4 = n1;
        } else if (!(s20 < s17)) {
            s0 = s20;
            v1 = n3;
        } else {
            s0 = s17;
            s17 = s20;
            v1 = n2;
            v4 = n3;
        }
        if (s0 <= 0.0f)
            goto a0c;
        float s1 = dot3(v1, v4);
        float sq;
        if (s1 * s0 > s17) {
            sq = R * R;
            sq = sq - s0 * s0;
        } else {
            float den = s1 * s1 + -1.0f; /* vnmls s2(=1.0), s1, s1 */
            uint32_t bits;
            memcpy(&bits, &den, 4);
            if (bits <= 0xB4000000u)
                goto fail;
            float num = s1 * s17 + -s0; /* vnmls s0, s1, s17 */
            float k = num / den;
            s17 = s17 - k * s1;
            func_00115D70(V(8), v1, k);
            memcpy(V(0x38), V(8), 12);
            func_00115D70(V(0x44), v4, s17);
            memcpy(V(0x18), V(0x44), 12);
            func_00115C54(V(0), V(0x38), V(0x18));
            float l = F(0) * F(0);
            l = l + F(4) * F(4);
            l = l + F(8) * F(8);
            sq = R * R + -l; /* vnmls s1, s19, s19 */
            if (sq <= 0.0f)
                goto fail;
        }
        /* 006819F4 */
        if (s21 * s21 > sq)
            goto fail;
        s16 = __builtin_sqrtf(sq) - s21;
    }
a0c:
    if (!(s16 <= 0.0f)) { /* bhi: greater or unordered */
        s22 = s16;
        hit = 1;
    } else {
fail:
        hit = 0;
    }
    RF(C, 0x6C, uint8_t) = (uint8_t)(hit | RF(C, 0x6C, uint8_t));
    if (!hit)
        return;

    int r6;
    if (RF(C, 0x30, uint32_t) == 0) {
        r6 = 0;
        if (RF(fpo, 4, uint32_t) == 0)
            goto ccc;
    } else {
        r6 = 1;
        if (RF(fpo, 4, uint32_t) == 0)
            goto c5c;
    }
    /* 00681A58: hit record at sp+0x10 */
    W(0x10) = GPTR_OF(data_006F0F80);
    W(0) = 0x1F;
    W(0x34) = 0; W(0x38) = 0;
    H16(0x30) = 0x1F;
    W(0x40) = 0; W(0x44) = 0;
    fr[0x48] = 0;
    F(0x2C) = s22;
    memcpy(V(0x14), n0, 12);
    {
        uint16_t at = RF(r8, 0x64, uint16_t);
        if ((0x1F & ~(uint32_t)at) == 0)
            at = RF(prism, 0xE, uint16_t);
        H16(0x30) = at;
    }
    func_00115D70(V(0x8C), n0, RF(C, 0x14, float) - s22);
    memcpy(V(0x74), V(0x8C), 12);
    func_00115C70(V(4), P, V(0x74));
    memcpy(V(0x20), V(4), 12);
    W(0x38) = RF(r8, 0x68, uint32_t);
    W(0x40) = RF(r8, 0x6C, uint16_t);
    {
        char *m = RP(C, 0x34);
        if (m == 0) {
            func_00115C54(V(0x20), V(0x20), (float *)(param_2 + 4));
        } else {
            if ((RF(m, 0xA8, uint8_t) & 6) != 0) {
                func_00115CE4(V(0x8C), (float *)RAT(m, 0x84), V(0x14));
                float x = F(0x8C), y = F(0x90), z = F(0x94);
                float q = x * x;
                q = q + y * y;
                q = q + z * z;
                float len = __builtin_sqrtf(q);
                if (len > 0.0f) {
                    float inv = 1.0f / len;
                    F(0x14) = x * inv;
                    F(0x18) = y * inv;
                    F(0x1C) = z * inv;
                }
                if (!(len == 0.0f))
                    F(0x2C) = F(0x2C) / len;
                func_00115CE4(V(0x20), (float *)RAT(m, 0x3C), V(0x20));
            }
            func_00115C54(V(0x20), V(0x20), (float *)(RP(m, 0) + 4));
        }
    }
    {
        char *obj = RP(fpo, 4);
        if (RVFN(int (*)(char *, uint8_t *), obj, 0)(obj, fr + 0x10) == 0)
            return;
    }
    if (r6 == 0)
        goto ccc;
    func_00115D70(V(0x80), V(0x14), F(0x2C));
    memcpy(V(0), V(0x80), 12);
    goto cc0;
c5c:
    func_00115D70(V(0xC), n0, s22);
    memcpy(V(0), V(0xC), 12);
    {
        char *m = RP(C, 0x34);
        if (m != 0 && (RF(m, 0xA8, uint8_t) & 6) != 0)
            func_00115CE4(V(0), (float *)RAT(m, 0x84), V(0));
    }
cc0:
    func_0068B200(GPTR_TO(float, RF(C, 0x30, uint32_t)), V(0));
ccc:
    RF(C, 0x6D, uint8_t) = 1;
}
