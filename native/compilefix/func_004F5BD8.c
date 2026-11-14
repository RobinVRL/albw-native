/* compilefix: asm-verified rewrite taken from native/route/alt/func_004F5BD8.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 004F5BD8 (EU 004F5BB0): actor model/animation update (120 call sites: called by the
 * actors' draw-prep / post-calc with (actor, optional angle source, force, -)): syncs the
 * actor's sub-models with the main model's animation frame, runs the colour fade (+0x85A..
 * +0x881, 004FD348/004FD130), builds the model world matrix from position (+0x3D0) + offsets,
 * rotation (angle *r1 or +0x3E8, 004D7EB0 / 004D8AEC), optional tilt (00542AB4, 00491E80,
 * 00491A18) or shear/scale matrices (+0x510 params), the scale (+0x4E4..+0x4F4 * +0x14..),
 * updates attached models (+0x410/+0x418 via 00168E9C), 004CEAF0, then the effect/light
 * attachments +0x420..+0x434 (006824D4) and the shadow object +0x41C (001512B4/00151150/
 * 0015133C), and increments the update counter +0x414.
 * Route: every actor's model update, Link included, from the first gameplay frame.
 * Bug: the converted source did not compile ("operand of type 'float' cannot be cast to a
 * pointer type"): the link had a tripwire stub, i.e. the first actor draw stops the game.
 * Rewritten from the EU disassembly 004F5BB0..004F6874 instruction by instruction; the ARM
 * frame (sp+0..0x108) is a byte array at the same offsets. Notes:
 *  - 00110710 is __aeabi_uidivmod; the code tests the remainder (r1): (x % 6) == 0, inlined.
 *  - 002B04E8 is `return 0.2f` in s0 (vldr s0, =0x3E4CCCCD; bx lr); the native build exports it
 *    as a returns-this thunk (int), so the constant is used directly.
 *  - colour lerp: vcvt.f32.u32 of the bytes, vmul + unfused vmla, saturating vcvt.u32.f32.
 *  - float compares keep the ARM unordered behaviour (bhs, ble, vmoveq, vcmp eq chains).
 *  - return value: r0 as left on the 3DS on every path (the few callers that read it).
 * Confidence: high (flow/arithmetic), medium (field roles). */
#pragma STDC FP_CONTRACT OFF
#include "../route/route.h"

extern uint32_t data_00712468[], data_007A9254[], data_007A9260[];
int func_00115C54(float *out, float *a, float *b);
int func_001151EC(uint32_t *dst, uint32_t *src);
int func_001157FC(float *out, float *a, float *b);
uint32_t func_00151150(int obj, float *v);
void func_001512B4(int obj, float *v);
int func_0015133C(int obj, float *m);
void func_00168E9C(char *self, char *model, int force);
void func_00169A80(int *slots, uint32_t a, uint32_t b, int *c);
float func_00491624(float *m, uint32_t ax, uint32_t ay, uint32_t az);
void func_00491A18(float *m, uint32_t *ang, float *t);
int func_00491E80(float *m, uint32_t ax, uint32_t ay, uint32_t az);
int func_004CEAF0(int obj);
void func_004D0194(int obj, uint32_t v);
void func_004D0268(void *obj, int32_t v);
void func_004D7EB0(float *mtx, uint32_t a, uint32_t b, float *c);
void func_004D8AEC(unsigned a0, unsigned a1, unsigned a2);
void func_004F95A0(int self, int a);
void func_004FD130(int obj, int a);
void func_004FD348(int obj, uint8_t *col, int a);
int func_00521380(char *self);
_Bool func_00542AB4(int obj, uint32_t *a, uint32_t *b);
int func_00584E64(int model);
int func_00584E70(int model);
uint8_t *func_0058ADE0(int obj, int a);
uint32_t func_006824D4(int *obj, float *a, uint32_t *b, float *c);

#define W(o) (*(uint32_t *)(fr + (o)))
#define F(o) (*(float *)(fr + (o)))
#define V(o) ((float *)(fr + (o)))

static inline uint32_t vcvt_u32(float f)
{
    if (!(f > 0.0f))
        return 0; /* negative and NaN */
    if (f >= 4294967296.0f)
        return 0xFFFFFFFFu;
    return (uint32_t)f;
}
static inline int32_t vcvt_s32(float f)
{
    if (f != f)
        return 0;
    if (f >= 2147483648.0f)
        return 0x7FFFFFFF;
    if (f <= -2147483648.0f)
        return (int32_t)0x80000000;
    return (int32_t)f;
}
static inline uint32_t fbits(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
#define VCALL0(o) RVFN(void (*)(char *), (o), 0)(o)

/* the attachment update at +0x424/+0x42C (offs = the object field; pos/dir/off from the actor) */
static void attach_a(char *A, uint8_t *fr, uint32_t objoff, uint32_t cboff, uint32_t addoff,
                     uint32_t argoff, char *m74)
{
    char *obj = RP(A, objoff);
    char *cb = RP(A, cboff);
    if (cb) {
        VCALL0(cb);
        return;
    }
    RF(obj, 4, uint32_t) = RF(A, 0x3D0, uint32_t);
    RF(obj, 8, uint32_t) = RF(A, 0x3D4, uint32_t);
    RF(obj, 0xC, uint32_t) = RF(A, 0x3D8, uint32_t);
    func_00115C54(V(4), (float *)RAT(A, 0x3D0), (float *)RAT(A, addoff));
    memcpy(V(0x30), V(4), 12);
    func_006824D4((int *)RP(A, objoff), (float *)RAT(A, argoff), (uint32_t *)(m74 + 0xC), V(0x30));
}

/* the attachment update at +0x430/+0x434 (argument vector copied to the frame first) */
static void attach_b(char *A, uint8_t *fr, uint32_t objoff, uint32_t cboff, uint32_t addoff,
                     uint32_t argfr, char *m74)
{
    char *obj = RP(A, objoff);
    char *cb = RP(A, cboff);
    if (cb) {
        VCALL0(cb);
        return;
    }
    RF(obj, 4, uint32_t) = RF(A, 0x3D0, uint32_t);
    RF(obj, 8, uint32_t) = RF(A, 0x3D4, uint32_t);
    RF(obj, 0xC, uint32_t) = RF(A, 0x3D8, uint32_t);
    func_00115C54(V(0x30), (float *)RAT(A, 0x3D0), (float *)RAT(A, addoff));
    memcpy(V(0), V(0x30), 12);
    func_006824D4((int *)RP(A, objoff), V(argfr), (uint32_t *)(m74 + 0xC), V(0));
}

int func_004F5BD8(char *A, uint32_t *src, int **force, float *unused)
{
    _Alignas(8) uint8_t fr[0x108];
    memset(fr, 0, sizeof fr);
    const float s17 = 0.0f, s18 = 1.0f;
    float s20 = 0.0f, s21 = 0.0f, s22 = 0.0f;
    uint32_t fp = src != 0 ? *src : RF(A, 0x3E8, uint32_t);
    uint32_t r0 = 0;
    float s19 = RF(RP(RP(A, 0x2D0), 0x14), 0, float);
    if (s19 == 0.0f)
        s19 = s18;
    float s16 = RF(A, 0x574, float) + RF(A, 0x57C, float);
    {
        uint8_t k = RF(RP(A, 0x510), 4, uint8_t);
        if (k == 0x12 || k == 0x13)
            RF(A, 0x5A0, uint32_t) |= 0x200000;
    }
    char *r8 = RP(A, 0x40C);
    if (r8 == 0)
        goto l64a4;
    {
        char *r6 = RAT(A, 0x5A8);
        if (RF(r6, 0xA8, uint8_t) != 0) {
            uint32_t r5 = 0;
            do {
                char *r7 = RP(r6, r5 * 12);
                if (r7 != r8) {
                    func_004D0194((int)GPTR_OF(r7), (uint32_t)func_00584E64((int)GPTR_OF(r8)));
                    func_004D0268(r7, func_00584E70((int)GPTR_OF(r8)));
                }
                r5++;
            } while (RF(r6, 0xA8, uint8_t) > r5);
            if (RF(A, 0x40C, uint32_t) == 0)
                goto l64a4;
        }
    }
    if (force == 0 && RF(RP(A, 0x40C), 0x30, uint8_t) == 0)
        goto l64a4;
    {
        uint32_t r1 = RF(A, 0x5A0, uint32_t);
        if ((r1 & 0x200000) != 0 || RF(RP(A, 0x510), 4, uint8_t) == 0x12)
            goto l6068;
        int r5 = 1;
        if (r1 & 0xC000000) {
            if (r1 & 0x4000000) {
                /* 00110710 = __aeabi_uidivmod(*(seq + 0x10), 6); the remainder (r1) is tested */
                uint32_t v = RF(GPTR_TO(char, data_00712468[0]), 0x10, uint32_t);
                if (v % 6u == 0 && RF(A, 0x77C, uint8_t) != 0)
                    r5 = 0;
            } else if (r1 & 0x8000000) {
                r5 = 0;
            }
        }
        if (RF(A, 0x77C, int8_t) != r5 || RF(A, 0x828, uint8_t) != 0) {
            func_004F95A0((int)GPTR_OF(A), r5);
            RF(A, 0x828, uint8_t) = 0;
        }
    }
    {
        uint8_t ip = RF(A, 0x859, uint8_t);
        uint32_t *T0 = (uint32_t *)RAT(A, 0x868);
        if (ip == 0 && T0[0] >= T0[1])
            goto l6068;
        uint32_t r2 = (uint32_t)RF(A, 0x87D, uint8_t) + RF(A, 0x87C, uint8_t);
        uint32_t r8b = RF(A, 0x87E, uint8_t) + r2;
        uint32_t r3 = (uint32_t)RF(A, 0x880, uint8_t) + RF(A, 0x87F, uint8_t);
        uint32_t r7 = RF(A, 0x881, uint8_t) + r3;
        if (RF(A, 0x508, int16_t) <= 0)
            ip = 0;
        if (ip != 0 && !(RF(A, 0x860, uint32_t) > RF(A, 0x85C, uint32_t))) {
            uint32_t *T1 = (uint32_t *)RAT(A, 0x85C);
            uint32_t a = ip == 1 ? r2 : r3, b = ip == 1 ? r8b : r7;
            T0[1] = a;
            ((float *)T0)[2] = a == 0 ? s17 : s18 / (float)a;
            T0[0] = 0;
            T1[1] = b;
            ((float *)T1)[2] = b == 0 ? s17 : s18 / (float)b;
            T1[0] = 0;
            RF(A, 0x85A, uint8_t) = ip == 1 ? 1 : 2;
        }
        /* 004F5E58 */
        int r5;
        uint32_t n = RF(A, 0x86C, uint32_t);
        uint32_t c = T0[0];
        if (n != 0 && c == 0) {
            s20 = s17;
            r5 = 1;
        } else if (n != 0 && n > c) {
            s20 = (float)c * ((float *)T0)[2];
            r5 = (int32_t)fbits(s20) >= 0x3F800000 ? 0 : 1;
        } else {
            s20 = s18;
            r5 = 0;
        }
        if (RF(A, 0x85B, uint8_t) == 0) {
            uint8_t *p = func_0058ADE0((int)GPTR_OF(RAT(A, 0x5A8)), 1);
            RF(A, 0x874, uint32_t) = *(uint32_t *)p;
        }
        RF(A, 0x85B, uint8_t) = (uint8_t)r5;
        if (r5 != 0) {
            uint8_t b = RF(A, 0x85A, uint8_t) == 1 ? RF(A, 0x87C, uint8_t) : RF(A, 0x87F, uint8_t);
            float s1 = (float)(int32_t)b / (float)RF(A, 0x86C, uint32_t);
            float s0;
            if (!(s20 < s1)) { /* bhs */
                float d = s20 - s1;
                float e = s18 - s1;
                s0 = s18 - d / e;
            } else {
                s0 = s20 / s1;
            }
            W(4) = RF(A, 0x878, uint32_t);
            float inv = s18 - s0;
            for (int k = 7; k >= 5; k--) {
                float t = (float)RF(A, 0x870 + k, uint8_t) * inv;
                t = t + (float)fr[k] * s0;
                fr[k] = (uint8_t)vcvt_u32(t);
            }
            fr[4] = 0xFF;
            func_004FD348((int)GPTR_OF(RAT(A, 0x5A8)), fr + 4, 1);
        } else {
            func_004FD130((int)GPTR_OF(RAT(A, 0x5A8)), 1);
        }
        if (T0[0] >= T0[1])
            RF(A, 0x85A, uint8_t) = 0;
    }
l6068:
    if (RF(A, 0x59C, uint32_t) & 0x400) {
        float s0 = RF(A, 0x4F4, float) * s19;
        float a2 = RF(A, 0x18, float) * RF(A, 0x4E8, float);
        float a3 = RF(A, 0x14, float) * RF(A, 0x4E4, float);
        float a1 = RF(A, 0x1C, float) * RF(A, 0x4EC, float);
        char *r6 = RP(A, 0x510) + 0x48;
        s21 = a2 * s0;
        s20 = a3 * s0;
        s22 = a1 * s0;
        F(0xB8) = RF(A, 0x3D0, float) + RF(A, 0x570, float);
        F(0xBC) = RF(A, 0x3D4, float) + s16;
        F(0xC0) = RF(A, 0x3D8, float) + RF(A, 0x578, float);
        char *r2 = RP(A, 0x510);
        int r5 = RF(r2, 4, uint8_t) != 0;
        if (r5) {
            func_00115C54(V(0xB8), V(0xB8), (float *)(r2 + 0x70));
            fp += RF(RP(A, 0x510), 0x68, uint32_t);
        }
        char *r3 = RP(A, 0x808);
        if (r3 != 0 && !r5) {
            RVFN(void (*)(char *, float *), r3, 0)(r3, V(0xB8));
            goto l63dc;
        }
        char *q = RP(A, 0x510);
        int eq = 0;
        if (RF(q, 0x64, uint8_t) != 0) {
            const float *z = (const float *)data_007A9254;
            const float *s = (const float *)(q + 0x58);
            eq = s[0] == z[0] && s[1] == z[1] && s[2] == z[2];
        }
        if (RF(q, 0x64, uint8_t) != 0 && !eq) {
            char *r5p = q + 0x58;
            float c02 = 0.2f; /* func_002B04E8() */
            float s1 = (float)RF(RP(A, 0x510), 0x54, int32_t);
            F(0x30) = s18; F(0x34) = s17; F(0x38) = s17;
            F(0x40) = s17; F(0x44) = s18; F(0x48) = s17;
            F(0x50) = s17; F(0x54) = s17; F(0x58) = s18;
            W(0x3C) = W(0xB8);
            W(0x4C) = W(0xBC);
            W(0x5C) = W(0xC0);
            func_00491E80(V(0x60), (uint32_t)vcvt_s32(c02 * s1), 0, 0);
            W(0) = RF(r5p, 0, uint32_t);
            F(4) = s17; F(8) = s17; F(0x10) = s17;
            W(0x14) = RF(r5p, 4, uint32_t);
            F(0x18) = s17; F(0x20) = s17; F(0x24) = s17;
            W(0x28) = RF(r5p, 8, uint32_t);
            F(0xC) = s17; F(0x1C) = s17; F(0x2C) = s17;
            if (RF(A, 0x59C, uint32_t) & 0x800)
                func_004D7EB0(V(0xC8), RF(A, 0x500, uint32_t), fp, (float *)data_007A9260);
            else
                func_004D8AEC(GPTR_OF(V(0xC8)), fp, GPTR_OF(data_007A9260));
            func_001157FC(V(0x60), V(0x60), V(0xC8));
            func_001157FC(V(0), V(0), V(0x60));
            func_001157FC(V(0x30), V(0x30), V(0));
            char *m = RP(A, 0x40C);
            RF(m, 0x164, uint32_t) |= 0x40000000;
            func_001151EC((uint32_t *)(m + 0x80), (uint32_t *)V(0x30));
        } else {
            int f800 = (RF(A, 0x59C, uint32_t) & 0x800) != 0;
            char *m = RP(A, 0x40C);
            RF(m, 0x164, uint32_t) |= 0x40000000;
            if (f800)
                func_004D7EB0((float *)(m + 0x80), RF(A, 0x500, uint32_t), fp, V(0xB8));
            else
                func_004D8AEC(GPTR_OF(m + 0x80), fp, GPTR_OF(V(0xB8)));
            W(0x84) = 0;
            W(0x80) = 0;
            if (func_00542AB4((int)GPTR_OF(RP(A, 0x510)), (uint32_t *)V(0x84), (uint32_t *)V(0x80))) {
                func_00491E80(V(0x40), 0, (uint32_t)-(int32_t)W(0x80), 0);
                uint32_t w80 = W(0x80), w84 = W(0x84);
                W(0x74) = w84;
                W(0x78) = w80;
                W(0x7C) = 0;
                func_00491A18(V(0), (uint32_t *)V(0x74), (float *)data_007A9260);
                func_001157FC(V(0), V(0), V(0x40));
                char *mm = RP(A, 0x40C);
                RF(mm, 0x164, uint32_t) |= 0x40000000;
                func_001157FC((float *)(mm + 0x80), (float *)(RP(A, 0x40C) + 0x80), V(0));
            }
        }
    l63dc: {
            const float *v = (const float *)r6;
            float x = s20 * v[0], z = s22 * v[2], y = s21 * v[1];
            char *m = RP(A, 0x40C);
            RF(m, 0x164, uint32_t) |= 0x40000000;
            RF(m, 0x74, float) = x;
            RF(m, 0x78, float) = y;
            RF(m, 0x7C, float) = z;
        }
    }
    /* 004F6404 */
    {
        uint32_t f = RF(A, 0x59C, uint32_t);
        if ((f & 0x300) != 0 && (RF(RP(A, 0x510), 0x38, uint16_t) & 1) == 0) {
            if ((f & 0x100) && RF(A, 0x410, uint32_t) != 0) {
                func_00169A80((int *)RP(A, 0x410), 0, 0, 0);
                func_00168E9C(RP(A, 0x410), RP(A, 0x40C), 0);
            }
            if ((RF(A, 0x59C, uint32_t) & 0x200) && RF(A, 0x418, uint32_t) != 0) {
                func_00169A80((int *)RP(A, 0x418), 0, 0, 0);
                func_00168E9C(RP(A, 0x418), RP(A, 0x40C), 0);
            }
        }
    }
    {
        char *o = RP(A, 0x820);
        if (o)
            VCALL0(o);
    }
    func_004CEAF0((int)RF(A, 0x40C, uint32_t));
l64a4:
    if ((RF(A, 0x59C, uint32_t) & 0x40) == 0) {
        char *m74 = RP(A, 0x40C) + 0x74;
        if (RF(A, 0x424, uint32_t) != 0 && RF(A, 0x420, uint32_t) != 0 &&
            RF(RP(A, 0x420), 0x61, uint8_t) != 0)
            attach_a(A, fr, 0x424, 0x814, 0x44C, 0x458, m74);
        if (RF(A, 0x42C, uint32_t) != 0 && RF(A, 0x428, uint32_t) != 0 &&
            RF(RP(A, 0x428), 0x61, uint8_t) != 0)
            attach_a(A, fr, 0x42C, 0x818, 0x47C, 0x488, m74);
        memcpy(V(0x10), RAT(A, 0x470), 12);
        memcpy(V(0x24), RAT(A, 0x4A0), 12);
        if (RF(A, 0x430, uint32_t) != 0)
            attach_b(A, fr, 0x430, 0x80C, 0x464, 0x10, m74);
        if (RF(A, 0x434, uint32_t) != 0)
            attach_b(A, fr, 0x434, 0x810, 0x494, 0x24, m74);
    }
    /* 004F66F0: shadow / ground marker */
    r0 = RF(A, 0x41C, uint32_t);
    if (r0 == 0)
        goto end;
    if (force == 0) {
        r0 = (uint32_t)func_00521380(RP(A, 0x41C));
        if (r0 == 0)
            goto end;
    }
    func_00115C54(V(0x18), (float *)RAT(A, 0x3D0), (float *)RAT(A, 0x564));
    memcpy(V(0), V(0x18), 12);
    {
        char *q = RP(A, 0x510);
        if (RF(q, 4, uint8_t) != 0)
            func_00115C54(V(0), V(0), (float *)(q + 0x70));
    }
    if (s16 > s17) {
        if ((RF(A, 0x59C, uint32_t) & 0x200000) == 0) {
            func_001512B4((int)RF(A, 0x41C, uint32_t), V(0));
        } else {
            F(0x18) = F(0) + RF(A, 0x570, float);
            F(0x1C) = F(4) + s16;
            F(0x20) = F(8) + RF(A, 0x578, float);
            func_001512B4((int)RF(A, 0x41C, uint32_t), V(0x18));
        }
    } else {
        func_001512B4((int)RF(A, 0x41C, uint32_t), V(0));
    }
    {
        char *m = RP(A, 0x40C);
        r0 = GPTR_OF(m);
        if (m == 0)
            goto end;
        float s0 = RF(A, 0x4F0, float) * s19;
        float k = s18 / s0;
        k = k * RF(A, 0x4F8, float);
        F(0x18) = RF(m, 0x74, float) * k;
        F(0x1C) = s18;
        F(0x20) = RF(m, 0x7C, float) * k;
        func_00151150((int)RF(A, 0x41C, uint32_t), V(0x18));
        char *sh = RP(A, 0x41C) + 0x10;
        r0 = GPTR_OF(sh);
        if (RF(A, 0x89F, uint8_t) == 0 && RF(sh, 0, float) == RF(sh, 8, float))
            goto end;
        func_00491624(V(0x24), 0, fp, 0);
        r0 = (uint32_t)func_0015133C((int)RF(A, 0x41C, uint32_t), V(0x24));
    }
end:
    RF(A, 0x414, uint32_t) += 1;
    return (int)r0;
}
