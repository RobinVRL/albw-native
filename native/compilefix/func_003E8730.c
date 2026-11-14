/* compilefix: asm-verified rewrite taken from native/route/alt/func_003E8730.c (route scout), preferred over
 * the compile-fixed Ghidra text this folder had (see README.md). */
/* USA 003E8730 (EU 003E8710): nw::eft particle emission, one particle (emitter r0, particle
 * r1): random life/scale/velocity from the emitter's LCG (+0x88, x*0x41C64E6D+0x3039), emitter
 * set (+0x18) and resource (+0xD8) parameters, the shared xorshift Random (00112388), colour
 * keys, then tail-calls 003E8698(emitter, particle). One of the emission variants called by the
 * emitter calc (15 call sites).
 * Route: every visual effect created from the TaskRender / effect system on (the effect
 * resources are loaded by the TaskRender prepare 0014BDE0); first use on the title screen.
 * Bug: the converted source did not compile (`NAN` undeclared: Ghidra printed the integer
 * stores 0xFFFFFFFF / 0x7FFFFFFF as -NAN / NAN), so the link had a tripwire stub. The Ghidra C
 * also stored many float results into `undefined4` slots (C value conversion instead of the
 * vstr bit copy) and used fpscr-dependent VectorUnsignedToFloat.
 * Rewritten from the EU disassembly 003E8710..003E90B8 instruction by instruction: LCG draws in
 * the same order, vcvt.f32.u32 then * 2^-32 (0x2F800000) or * 2^-31 (0x30000000), unfused
 * vmla/vmls, the signed 64-bit high-word product for the life draw, signed /100 by multiply,
 * saturating vcvt.s32.f32, `(s32)bits > 0x3F000000` sign-flip tests, the two guarded static
 * zero Vec2 (data_007270E0/E4; the EU code has no __cxa_guard_release there, kept as is),
 * t % 3 colour key selection.  Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "../route/route.h"

extern uint32_t data_00716454[], data_007270E0[], data_007270E4[];
int func_001119F4(uint32_t *dst, uint32_t *src);
int func_00112388(void);
int func_003E8698(int emitter, int particle);
int32_t func_00100174(uint32_t *guard);

static inline uint32_t lcg(uint32_t x) { return x * 0x41C64E6Du + 0x3039u; }
static inline float u2f(uint32_t x) { return (float)x; } /* vcvt.f32.u32 */
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
static inline int32_t div100(int32_t v) /* smull 0x51EB851F, asr #5, - (hi >> 31) */
{
    int32_t hi = (int32_t)(((int64_t)0x51EB851F * v) >> 32);
    return (hi >> 5) - (hi >> 31);
}
static inline uint32_t fbits(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

int func_003E8730(char *em, char *pt)
{
    const float K32 = 2.3283064e-10f; /* 0x2F800000 */
    const float K31 = 4.6566129e-10f; /* 0x30000000 */
    char *res = RP(em, 0xD8);
    char *set = RP(em, 0x18);
    uint32_t x = RF(em, 0x88, uint32_t);
    RF(em, 0x88, uint32_t) = lcg(x);
    float s3 = RF(res, 0x2E0, float) * RF(set, 0x244, float);
    float s17 = RF(res, 0x2DC, float) * RF(set, 0x240, float);
    float s0 = u2f(x) * K32;
    RF(pt, 0x14C, uint32_t) = 3;
    RSETP(pt, 0x144, em);
    float s16 = 1.0f - s3 * s0;
    if (RF(em, 0xC8, uint32_t) != 0) {
        func_001119F4((uint32_t *)RAT(pt, 0xD0), (uint32_t *)RAT(em, 0x24));
        func_001119F4((uint32_t *)RAT(pt, 0x100), (uint32_t *)RAT(em, 0x54));
        RSETP(pt, 0x130, RAT(pt, 0xD0));
        RSETP(pt, 0x134, RAT(pt, 0x100));
    } else {
        RSETP(pt, 0x130, RAT(em, 0x24));
        RSETP(pt, 0x134, RAT(em, 0x54));
    }
    {
        const char *src = RF(set, 0x281, uint8_t) != 0 ? set + 0x254 : res + 0x2E4;
        float a = RF(pt, 0x20, float) + RF(src, 0, float) * s17;
        float b = RF(pt, 0x24, float) + RF(src, 4, float) * s17;
        float c = RF(pt, 0x28, float) + RF(src, 8, float) * s17;
        RF(pt, 0x20, float) = a * s16;
        RF(pt, 0x24, float) = b * s16;
        RF(pt, 0x28, float) = c * s16;
    }
    float vx, vy, vz;
    {
        char *tbl = GPTR_TO(char, data_00716454[0]);
        uint16_t i = RF(em, 0x84, uint16_t);
        RF(em, 0x84, uint16_t) = (uint16_t)(i + 1);
        const float *e = (const float *)(tbl + (i & 0x1FF) * 12);
        vx = RF(pt, 0x20, float) + e[0] * RF(res, 0x2F4, float);
        vy = RF(pt, 0x24, float) + e[1] * RF(res, 0x2F8, float);
        vz = RF(pt, 0x28, float) + e[2] * RF(res, 0x2FC, float);
        float k = RF(res, 0x318, float);
        RF(pt, 0x20, float) = vx;
        RF(pt, 0x24, float) = vy;
        RF(pt, 0x28, float) = vz;
        if (!(k == 0.0f)) {
            float px = vx * k, py = vy * k, pz = vz * k;
            vx = vx + px;
            vy = vy + py;
            vz = vz + pz;
            RF(pt, 0x20, float) = vx;
            RF(pt, 0x24, float) = vy;
            RF(pt, 0x28, float) = vz;
        }
    }
    {
        float a = RF(set, 0x24C, float), b = RF(set, 0x250, float), c = RF(set, 0x248, float);
        float t3 = a * RF(set, 0x1DC, float), t6 = a * RF(set, 0x1E0, float), t0 = a * RF(set, 0x1E4, float);
        float t4 = vz + c * RF(set, 0x1D4, float);
        t0 = t0 + b * RF(set, 0x1F4, float);
        float t5 = vy + c * RF(set, 0x1D0, float);
        t6 = t6 + b * RF(set, 0x1F0, float);
        float t7 = RF(pt, 0x20, float) + c * RF(set, 0x1CC, float);
        t3 = t3 + b * RF(set, 0x1EC, float);
        RF(pt, 0, uint32_t) = 0;
        float z = t0 + t4, y = t6 + t5, xx = t3 + t7;
        RF(pt, 0x28, float) = z;
        RF(pt, 0x20, float) = xx;
        RF(pt, 0x24, float) = y;
        RF(pt, 0x1C, float) = z;
        RF(pt, 0x14, float) = xx;
        RF(pt, 0x18, float) = y;
    }
    {
        uint32_t *p = GPTR_TO(uint32_t, (uint32_t)func_00112388());
        uint32_t r1 = p[0], r3 = p[1], ip = p[2], r2 = p[3];
        uint32_t t = r1 ^ (r1 << 11);
        uint32_t r5 = r2 ^ (r2 >> 19);
        t = t ^ (t >> 8);
        t = t ^ r5;
        p[3] = t;
        p[2] = r2;
        p[0] = r3;
        p[1] = ip;
        RF(pt, 0x150, uint32_t) = t;
    }
    if (RF(res, 0x31C, int32_t) == 0x7FFFFFFF) {
        RF(pt, 4, int32_t) = 0x7FFFFFFF;
    } else {
        uint32_t x0 = RF(em, 0x88, uint32_t);
        int32_t r = RF(res, 0x320, int32_t);
        RF(em, 0x88, uint32_t) = lcg(x0);
        int32_t hi = (int32_t)(((int64_t)(uint64_t)x0 * (int64_t)r) >> 32);
        float f = (RF(em, 0x16C, float) - (float)hi) * RF(RP(em, 0x1C), 8, float);
        RF(pt, 4, int32_t) = vcvt_s32(f);
    }
    {
        uint32_t x0 = RF(em, 0x88, uint32_t);
        RF(em, 0x88, uint32_t) = lcg(x0);
        float r = u2f(x0) * K32;
        float m = 1.0f - RF(res, 0x4E0, float) * r;
        s16 = RF(set, 0x210, float) * m;
        s17 = RF(set, 0x214, float) * m;
    }
    int32_t n = RF(pt, 4, int32_t) - 1;
    if (n != 0) {
        char *sbp = RP(pt, 0x60);
        int32_t a = div100(RF(res, 0x4CC, int32_t) * n);
        int32_t b = div100(RF(res, 0x4C8, int32_t) * n);
        RF(sbp, 8, int32_t) = b;
        RF(sbp, 0xC, int32_t) = a;
        if (b == 0)
            RF(sbp, 0, float) = 0.0f;
        else
            RF(sbp, 0, float) = RF(res, 0x4C0, float) / (float)b;
        char *q2 = RP(pt, 0x60);
        if (RF(res, 0x4CC, int32_t) == 100)
            RF(q2, 4, float) = 0.0f;
        else
            RF(q2, 4, float) = RF(res, 0x4C4, float) / (float)(n - RF(q2, 0xC, int32_t));
        int32_t c = div100(RF(res, 0x4D8, int32_t) * n);
        int32_t d = div100(RF(res, 0x4DC, int32_t) * n);
        float s5 = RF(RP(pt, 0x60), 0, float);
        char *Q = RP(pt, 0x6C);
        RF(Q, 0x10, int32_t) = 0;
        RF(Q, 0x14, int32_t) = 0;
        RF(Q, 0x10, int32_t) = c;
        RF(Q, 0x14, int32_t) = d;
        float f3 = (float)RF(Q, 0x10, int32_t);
        float f6 = (float)(n - d);
        float s4 = RF(res, 0x4BC, float) - s5;
        float i3 = 1.0f / f3;
        float s2 = RF(res, 0x4F4, float) * i3;
        float s0b = RF(res, 0x4F8, float) * i3;
        float i6 = 1.0f / f6;
        float s9 = s2 * s16;
        float s8 = s0b * s17;
        float t3 = RF(res, 0x4FC, float) * i6;
        float t1 = RF(res, 0x500, float) * i6;
        s9 = RF(res, 0x4E4, float) * s9;
        float s0c = RF(res, 0x4F0, float) - s0b;
        float s10 = t3 * s16;
        RF(Q, 0, float) = s9;
        RF(RP(pt, 0x6C), 4, float) = RF(res, 0x4E8, float) * s8;
        s0c = s0c * s17;
        float u3 = t1 * s17;
        RF(RP(pt, 0x6C), 8, float) = RF(res, 0x4E4, float) * s10;
        float s1 = RF(res, 0x4EC, float) - s2;
        float u2 = RF(res, 0x4E8, float) * u3;
        s1 = s1 * s16;
        RF(RP(pt, 0x6C), 0xC, float) = u2;
        float e4 = RF(res, 0x4E4, float), e8 = RF(res, 0x4E8, float);
        RF(pt, 0x5C, float) = s4;
        RF(pt, 0x64, float) = e4 * s1;
        RF(pt, 0x68, float) = e8 * s0c;
    } else {
        char *p60 = RP(pt, 0x60);
        RF(p60, 8, int32_t) = -1;
        RF(p60, 0xC, int32_t) = 0x7FFFFFFF;
        RF(p60, 0, float) = 0.0f;
        RF(p60, 4, float) = 0.0f;
        uint32_t w = RF(res, 0x4BC, uint32_t);
        char *Q = RP(pt, 0x6C);
        RF(Q, 0x10, int32_t) = -1;
        RF(Q, 0x14, int32_t) = 0x7FFFFFFF;
        RF(pt, 0x5C, uint32_t) = w;
        if (!(data_007270E0[0] & 1) && func_00100174(data_007270E0) != 0) {
            ((float *)data_007270E4)[0] = 0.0f;
            ((float *)data_007270E4)[1] = 0.0f;
        }
        memcpy(RAT(RP(pt, 0x6C), 0), data_007270E4, 8);
        if (!(data_007270E0[0] & 1) && func_00100174(data_007270E0) != 0) {
            ((float *)data_007270E4)[0] = 0.0f;
            ((float *)data_007270E4)[1] = 0.0f;
        }
        memcpy(RAT(RP(pt, 0x6C), 8), data_007270E4, 8);
        float a = RF(res, 0x4EC, float) * RF(res, 0x4E4, float);
        float b = RF(res, 0x4F0, float) * RF(res, 0x4E8, float);
        RF(pt, 0x64, float) = a * s16;
        RF(pt, 0x68, float) = b * s17;
    }
    /* 003E8C10: scale / rotation draws */
    {
        uint32_t x0 = RF(em, 0x88, uint32_t), x1 = lcg(x0), x2 = lcg(x1), x3 = lcg(x2);
        uint32_t x4 = lcg(x3), x5 = lcg(x4), x6 = lcg(x5);
        float s2 = (RF(res, 0x508, float) + RF(set, 0x264, float)) + RF(res, 0x514, float) * (u2f(x0) * K32);
        RF(pt, 0x44, float) = s2;
        float s3b = (RF(res, 0x50C, float) + RF(set, 0x268, float)) + RF(res, 0x518, float) * (u2f(x1) * K32);
        RF(pt, 0x48, float) = s3b;
        float s4 = (RF(res, 0x510, float) + RF(set, 0x26C, float)) + RF(res, 0x51C, float) * (u2f(x2) * K32);
        RF(pt, 0x4C, float) = s4;
        float s5 = RF(res, 0x520, float) + RF(res, 0x52C, float) * (u2f(x3) * K32);
        RF(pt, 0x50, float) = s5;
        float s6 = RF(res, 0x524, float) + RF(res, 0x530, float) * (u2f(x4) * K32);
        RF(pt, 0x54, float) = s6;
        RF(em, 0x88, uint32_t) = x6;
        float s7 = RF(res, 0x528, float) + RF(res, 0x534, float) * (u2f(x5) * K32);
        RF(pt, 0x58, float) = s7;
        if (RF(res, 0x184, uint8_t) != 0) {
            uint32_t y = RF(em, 0x88, uint32_t);
            RF(em, 0x88, uint32_t) = lcg(y);
            if ((int32_t)fbits(u2f(y) * K32) > 0x3F000000) {
                RF(pt, 0x44, float) = -s2;
                RF(pt, 0x50, float) = -s5;
            }
        }
        if (RF(res, 0x185, uint8_t) != 0) {
            uint32_t y = RF(em, 0x88, uint32_t);
            RF(em, 0x88, uint32_t) = lcg(y);
            if ((int32_t)fbits(u2f(y) * K32) > 0x3F000000) {
                RF(pt, 0x48, float) = -s3b;
                RF(pt, 0x54, float) = -s6;
            }
        }
        if (RF(res, 0x186, uint8_t) != 0) {
            uint32_t y = RF(em, 0x88, uint32_t);
            RF(em, 0x88, uint32_t) = lcg(y);
            if ((int32_t)fbits(u2f(y) * K32) > 0x3F000000) {
                RF(pt, 0x4C, float) = -s4;
                RF(pt, 0x58, float) = -s7;
            }
        }
    }
    /* colour keys: fixed, or one of 3 chosen by the xorshift value */
    {
        uint32_t t = RF(pt, 0x150, uint32_t);
        const char *s = RF(res, 0x428, int32_t) == 1 ? res + (t % 3u) * 16 + 0x430 : res + 0x430;
        memcpy(RAT(pt, 0xB0), s, 12);
        s = RF(res, 0x42C, int32_t) == 1 ? res + (t % 3u) * 16 + 0x460 : res + 0x460;
        memcpy(RAT(pt, 0xC0), s, 12);
    }
    {
        uint32_t x0 = RF(em, 0x88, uint32_t), x1 = lcg(x0), x2 = lcg(x1), x3 = lcg(x2);
        uint32_t x4 = lcg(x3), x5 = lcg(x4);
        float r, s0x;
        r = RF(res, 0x384, float);
        s0x = RF(res, 0x37C, float) + r;
        RF(pt, 0x7C, float) = s0x - (u2f(x0) * r) * K31;
        r = RF(res, 0x388, float);
        s0x = RF(res, 0x380, float) + r;
        RF(pt, 0x80, float) = s0x - (u2f(x1) * r) * K31;
        r = RF(res, 0x39C, float);
        s0x = RF(res, 0x394, float) + r;
        RF(pt, 0x84, float) = s0x - (u2f(x2) * r) * K31;
        r = RF(res, 0x3A0, float);
        s0x = RF(res, 0x398, float) + r;
        RF(pt, 0x88, float) = s0x - (u2f(x3) * r) * K31;
        RF(em, 0x88, uint32_t) = x5;
        RF(pt, 0x74, uint32_t) = RF(res, 0x374, uint32_t);
        RF(pt, 0x78, uint32_t) = RF(res, 0x378, uint32_t);
        RF(pt, 0xA8, float) = 1.0f;
        RF(pt, 0xAC, float) = 1.0f;
        r = RF(res, 0x3AC, float);
        s0x = RF(res, 0x3A8, float) + r;
        RF(pt, 0x70, float) = s0x - (u2f(x4) * r) * K31;
    }
    return func_003E8698((int)GPTR_OF(em), (int)GPTR_OF(pt));
}
