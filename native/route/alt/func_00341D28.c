/* USA 00341D28 (EU 00341D04): player body collision against the world (the per-frame
 * push-out of Link): up to four swept-capsule queries through the broad phase
 * (004A7620 world sweep, query records built from the 0x2A-byte template 004331A0 ->
 * 00436384 -> 00110D44):
 *   1. (when this+0x166) a short vertical probe from the model/joint position (0053ECB4 of
 *      the action's model, offset by the polar 004D80A4(*this+0x48, this+0x160)) down to
 *      this+0x504, radius 0.4 x (1.0 or 1.3 in actions 8/0x3B/0x3C/0x3E), and (when
 *      param_2) a second one with radius x1.2;
 *   2. the main body sweep old pos (*this+0x40 [+ this+0x4D8]) -> pos (*this+0x3C), radius
 *      0.4 x (1.0 / 1.25 in actions 0x45/0x49 / 0.8 when this+0x52D), flags 0x5BF (0x5FF in
 *      actions 0x46/0x4E), repeated up to 3 more times while this+0x4B9 && !this+0x4BA;
 *   3. (this+0x167 && param_2) a sweep at height this+0x17C, radius 0.4 x this+0x180, flags 0x39.
 * Each push-back (accumulated at sp+4 when param_3) is added to the position; this+0x16E
 * records any horizontal push, this+0x4BB/0x4BC/0x4B9/0x168 the contact flags.
 * Route: Link's first update (every frame he exists; also the camera/landing logic reads
 * the flags).
 * Bug: the converted Ghidra source did not compile (floats stored through `undefined4 ****`
 * locals that alias the query records): tripwire stub in the link.  Also: every ARM call of
 * 004A7620 passes (s0, s1) = (2.0, 4.0) except the main body sweep (1.0, 4.0); the converted
 * 004A7620 prototype has no float parameters, so this file calls the exact entry
 * albw_collision_sweep (native/gameplay/func_004A7620.c) with the real values.
 * Verified instruction by instruction against EU 00341D04..00342588: the stack frame is kept at
 * the ARM sp offsets (queries at sp+0x14 / sp+0x5C / sp+0x10, which the ARM reuses; fields not
 * written by the ARM keep the template value: q2+0xC, q3+0x29, q4+4, q4+0x29), `vmovle` max
 * (NaN -> takes pos.y), `bgt` / bit-compare `cmp r0, #0x3F000000; bgt` on the horizontal
 * length (vmul + unfused vmla + vsqrt), the vcmp/vcmpeq chains (NaN = "non-zero"), vmla of the
 * radius (product rounded), the `ldrsb` contact bytes, the loop bound `cmp sb, #3; blt`.
 * Confidence: high (flow and values), medium (role names). */
#pragma STDC FP_CONTRACT OFF
#include "../route.h"
#include "../../gameplay/gp_collision.h"

extern uint32_t data_00709D28[];
int func_0053F7B8(int act);
int func_0053ECB4(int mdl);
int func_004D80A4(float *out, uint32_t angle, float radius);
int func_00115C54(float *out, float *a, float *b);
int func_00115C70(float *out, float *a, float *b);
int func_0053F5E0(int act);
int func_0053FD00(int act);
uint32_t *func_004331A0(uint32_t *p);
int func_00436384(uint32_t *dst, uint32_t *src);
void *func_00110D44(void *dst, const void *src, uint32_t n);
int func_0052EB7C(int obj);
int func_0053F6D8(int act);
int func_0038AF14(uint8_t *p);

#define F32(off) RF(sp, off, float)
#define U32(off) RF(sp, off, uint32_t)

static void query_template(char *sp, int dst, int t1, int t2)
{
    uint32_t *a = func_004331A0((uint32_t *)(sp + t1));
    int b = func_00436384((uint32_t *)(sp + t2), a);
    func_00110D44(sp + dst, GPTR_TO(void, b), 0x2A);
}

static int sweep(char *sp, int q, float f0, float f1)
{
    return albw_collision_sweep(data_00709D28[0], (uint32_t *)(sp + q), 0xFF, f0, f1);
}

static void add_push(char *self, char *sp)
{
    float *pos = GPTR_TO(float, RF(self, 0x3C, uint32_t));
    func_00115C54(pos, pos, (float *)(sp + 4));
}

static uint8_t pushed(char *sp)
{
    return !(F32(4) == 0.0f && F32(0xC) == 0.0f);
}

static void hit_tag(char *self)
{
    if (func_0052EB7C((int)RF(self, 0x24, uint32_t)) != 0)
        RF(RP(self, 0x38), 0x104, float) = 0.5f;
}

static int16_t action(char *self)
{
    return RF(RP(RP(self, 0x24), 0x614), 0x42, int16_t);
}

void func_00341D28(char *self, int r7, int r8)
{
    _Alignas(8) char sp[0x160];
    memset(sp, 0, sizeof sp);
    if (r7)
        RF(self, 0x1E0, uint8_t) = 0;
    if (func_0053F7B8((int)RF(RP(self, 0x24), 0x614, uint32_t)) == 0)
        return;
    int8_t fp = 0;
    F32(4) = 0.0f; F32(8) = 0.0f; F32(0xC) = 0.0f;
    char *sl16e = self + 0x16E;
    if (RF(self, 0x166, uint8_t) != 0) {
        float s16 = 1.0f;
        int16_t act = action(self);
        int sb = (act == 8 || act == 0x3C || act == 0x3B || act == 0x3E);
        memcpy(sp + 0x50, RP(self, 0x3C), 12);
        char *m = GPTR_TO(char, func_0053ECB4((int)RF(RP(self, 0x24), 0x600, uint32_t)));
        U32(0x50) = RF(m, 0xC, uint32_t);
        U32(0x54) = RF(m, 0x1C, uint32_t);
        U32(0x58) = RF(m, 0x2C, uint32_t);
        if (RF(self, 0x160, float) != 0.0f) {
            func_004D80A4((float *)(sp + 0x74), RF(RP(self, 0x48), 0, uint32_t), RF(self, 0x160, float));
            F32(0x78) = 0.0f;
            func_00115C54((float *)(sp + 0x68), (float *)(sp + 0x74), (float *)(sp + 0x50));
            memcpy(sp + 0x50, sp + 0x68, 12);
        }
        if (sb) {
            s16 = 1.3f;
            F32(0x54) = F32(0x54) + 0.4f;
        }
        float s0 = F32(0x54), s1 = RF(RP(self, 0x3C), 4, float);
        if (!(s0 > s1))       /* vcmpe; vmovle (le incl. unordered) */
            s0 = s1;
        F32(0x54) = s0;
        int sl;
        s1 = RF(RP(self, 0x3C), 4, float);
        if (s1 > s0)
            sl = 1;
        else
            sl = func_0053F5E0((int)RF(RP(self, 0x24), 0x614, uint32_t)) == 8;
        func_00115C70((float *)(sp + 0x68), (float *)(sp + 0x50), GPTR_TO(float, RF(self, 0x3C, uint32_t)));
        float d = F32(0x68) * F32(0x68);
        d = d + F32(0x70) * F32(0x70);
        float len = __builtin_sqrtf(d);
        int32_t lb;
        memcpy(&lb, &len, 4);
        if (lb > 0x3F000000 || func_0053FD00((int)RF(RP(self, 0x24), 0x614, uint32_t)) != 0) {
            F32(0x54) = RF(RP(self, 0x3C), 4, float) + 0.2f;
        } else {
            F32(0x68) = 0.0f; F32(0x6C) = 0.2f; F32(0x70) = -0.2f;
            func_00115C54((float *)(sp + 0x78), GPTR_TO(float, RF(self, 0x3C, uint32_t)), (float *)(sp + 0x68));
            memcpy(sp + 0x50, sp + 0x78, 12);
        }
        if (sb) {
            s16 = 1.3f;
            F32(0x54) = F32(0x54) + 1.0f;
        }
        if (sl)
            F32(0x54) = RF(RP(self, 0x3C), 4, float) + 0.2f;
        char *res = self + 0x504;
        F32(0xB8) = 0.0f; F32(0xBC) = -0.2f; F32(0xC0) = 0.0f;
        func_00115C54((float *)(sp + 0x68), (float *)(sp + 0x50), (float *)(sp + 0xB8));
        float s17 = s16 * 0.4f;
        memcpy(res, sp + 0x68, 12);
        F32(0xB8) = 0.0f; F32(0xBC) = s17; F32(0xC0) = 0.0f;
        query_template(sp, 0x14, 0xF0, 0xC4);
        F32(0x40) = s17;
        memcpy(sp + 0x44, sp + 0xB8, 12);
        U32(0x30) = GPTR_OF(sp + 0x50);
        U32(0x34) = GPTR_OF(res);
        U32(0x14) = r8 ? GPTR_OF(sp + 4) : 0;
        U32(0x20) = RF(self, 0x64, uint32_t);
        U32(0x18) = r7 ? GPTR_OF(self + 0x14) : 0;
        U32(0x28) = 0x18;
        U32(0x10C) = (uint32_t)(sb ^ 1);
        RF(sp, 0x3D, uint8_t) = (uint8_t)(sb ^ 1);
        RF(sp, 0x3C, uint8_t) = RF(self, 0x16C, uint8_t);
        RF(self, 0x164, uint8_t) = 1;
        if (sweep(sp, 0x14, 2.0f, 4.0f) != 0)
            hit_tag(self);
        if (!sb)
            F32(8) = 0.0f;
        fp = RF(self, 0x4B9, int8_t);
        add_push(self, sp);
        RF(self, 0x16E, uint8_t) = pushed(sp);
        if (r7) {
            s17 = s17 * 1.2f;
            query_template(sp, 0x5C, 0x13C, 0x110);
            F32(0x88) = s17;
            F32(0x8C) = 0.0f; F32(0x90) = s17; F32(0x94) = 0.0f;
            U32(0x5C) = 0;
            U32(0x60) = 0;
            U32(0x70) = 0x18;
            U32(0x78) = GPTR_OF(sp + 0x50);
            U32(0x7C) = GPTR_OF(res);
            RF(sp, 0x85, uint8_t) = (uint8_t)U32(0x10C);
            RF(sp, 0x84, uint8_t) = RF(self, 0x16C, uint8_t);
            if (sweep(sp, 0x5C, 2.0f, 4.0f) != 0)
                hit_tag(self);
        }
    }

    /* main body sweep */
    F32(4) = 0.0f; F32(8) = 0.0f; F32(0xC) = 0.0f;
    float k = 1.0f;
    int16_t act = action(self);
    if (act == 0x45 || act == 0x49)
        k = 1.25f;
    if (RF(self, 0x52D, uint8_t) != 0)
        k = 0.8f;
    float base = r8 == 0 ? -0.2f : 0.0f;
    float rad = k * 0.4f;
    float off = base + k * 0.4f;
    query_template(sp, 0x10, 0xB8, 0x68);
    F32(0x3C) = rad;
    F32(0x40) = 0.0f;
    F32(0x44) = off;
    F32(0x48) = 0.0f;
    memcpy(sp + 0x5C, RP(self, 0x40), 12);
    const float *dv = (const float *)(self + 0x4D8);
    if (!(dv[0] == 0.0f && dv[1] == 0.0f && dv[2] == 0.0f))
        func_00115C54((float *)(sp + 0x5C), (float *)(sp + 0x5C), (float *)(self + 0x4D8));
    U32(0x30) = GPTR_OF(sp + 0x5C);
    U32(0x2C) = RF(self, 0x3C, uint32_t);
    U32(0x10) = r8 ? GPTR_OF(sp + 4) : 0;
    U32(0x1C) = RF(self, 0x64, uint32_t);
    U32(0x14) = r7 ? GPTR_OF(self + 0x14) : 0;
    U32(0x24) = 0x5BF;
    RF(sp, 0x38, uint8_t) = RF(self, 0x16C, uint8_t);
    act = action(self);
    if (act == 0x46 || act == 0x4E)
        U32(0x24) = 0x5FF;
    RF(self, 0x164, uint8_t) = 0;
    sweep(sp, 0x10, 1.0f, 4.0f);
    for (int sb = 0; RF(self, 0x4B9, uint8_t) != 0 && RF(self, 0x4BA, uint8_t) == 0 && sb < 3; sb++) {
        RF(self, 0x4B9, uint8_t) = 0;
        RF(self, 0x4BA, uint8_t) = 0;
        if (r8 && func_0053F6D8((int)RF(RP(self, 0x24), 0x614, uint32_t)) != 0)
            F32(8) = -0.05f;
        add_push(self, sp);
        RF(sl16e, 0, uint8_t) = (pushed(sp) | RF(sl16e, 0, int8_t)) != 0;
        F32(4) = 0.0f; F32(8) = 0.0f; F32(0xC) = 0.0f;
        if (RF(self, 0x344, uint8_t) == 0)
            func_0038AF14((uint8_t *)(self + 0x324));
        sweep(sp, 0x10, 2.0f, 4.0f);
    }
    RF(self, 0x4BB, uint8_t) = RF(self, 0x4BA, uint8_t);
    if (RF(self, 0x169, uint8_t) != 0) {
        uint8_t f = RF(self, 0x324, uint8_t);
        if (!(f & 1) && !(f & 8) && RF(self, 0x168, uint8_t) == 0)
            RF(self, 0x168, uint8_t) = 1;
    }
    int8_t r5 = RF(self, 0x4B9, int8_t);
    RF(self, 0x4BC, int8_t) = r5;
    add_push(self, sp);
    RF(sl16e, 0, uint8_t) = (pushed(sp) | RF(sl16e, 0, int8_t)) != 0;
    RF(self, 0x4B9, uint8_t) = (uint8_t)(fp | r5);

    if (RF(self, 0x167, uint8_t) != 0 && r7 != 0) {
        F32(4) = 0.0f; F32(8) = 0.0f; F32(0xC) = 0.0f;
        float r = RF(self, 0x180, float) * 0.4f;
        query_template(sp, 0x10, 0xB4, 0x7C);
        F32(0x3C) = r; F32(0x40) = 0.0f;
        F32(0x44) = r; F32(0x48) = 0.0f;
        memcpy(sp + 0x58, RP(self, 0x40), 12);
        memcpy(sp + 0x64, RP(self, 0x3C), 12);
        U32(0x5C) = RF(self, 0x17C, uint32_t);
        U32(0x68) = RF(self, 0x17C, uint32_t);
        U32(0x30) = GPTR_OF(sp + 0x58);
        U32(0x2C) = GPTR_OF(sp + 0x64);
        U32(0x10) = r8 ? GPTR_OF(sp + 4) : 0;
        U32(0x1C) = RF(self, 0x64, uint32_t);
        U32(0x24) = 0x39;
        RF(sp, 0x38, uint8_t) = RF(self, 0x16C, uint8_t);
        sweep(sp, 0x10, 2.0f, 4.0f);
        F32(8) = 0.0f;
        add_push(self, sp);
        RF(sl16e, 0, uint8_t) = (pushed(sp) | RF(sl16e, 0, int8_t)) != 0;
    }
}
