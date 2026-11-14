/* USA 0038EA34 <- EU 0038EA10: player wall-merge action, per-frame CALC (vtable slot +0x14 of the
 * wall-merge action class, vptr data_006E6D78; see func_0038E13C.c). Called by the player action
 * update (EU 00293190: `ldr r0,[r4,#0x48]; ldrsh r1,[r4,#0x42]; ldr r3,[vt,#0x14]; blx r3`) as
 * vt[+0x14](self, (s16)current action id, r2 = a frame value the function never reads).
 * ARM live-in r0, r1 (livein2). Return: r0 as left on each path (callers ignore it).
 *
 *   if (state+0x44 (u32 frames in action) < 5) *(data_0070B960)+0x2C1B = 0;
 *   id 0x67 (entering the wall): work+0x15C = 0, vel.y = 0, camera hook at frame 3 (001E8A70),
 *     anim+0x100 = 0; 004A37EC(handle, dir, +0x88, 1.0);
 *     target = +0x88 + dir*0.4; turn: 0051D2CC(&yaw, yaw(dir) + 0x80000000, 0.2);
 *     pos += (target - pos) * 0.2;
 *     vcvt.u32(frame(anim+0x3C)) == vcvt.u32(endFrame(anim+0x3C) - 1.0) -> +0x76 = 1,
 *       player+0x5A8 = 0.0, +0x71 = 1;
 *     when the enter animation has ended (0053EDD8): negate 2 Vec3 of the player's floor/wall
 *     record ((player+0x5F4)+0x3B4C, +0x3B64) and request the next action
 *     002D55D0(self, anim+0x24 > 0 ? 1 : 0)  (NaN -> 0: `ble`).
 *   id 0x68/0x69/0x6A (leaving): stop if 002D55E8(self) (a forced action) returns non-zero;
 *     vel.y = 0 for the first 16 frames; +0xB0 counts frames while not on a hazard flag
 *     (work+0x324 bits 0/3, work+0x168); yaw = yaw(dir); anim+0x100 = frame(anim+0x5C) > 60 ?
 *     1.0 : 0.0 (signed bit compare) unless +0x72; work+0x166 = yaw outside +-22.5 deg
 *     ((yaw + 0x10000000) >> 29 != 0; 0x10000000 is 00114608(0x4D800000 = 2^28f), the float ->
 *     s64 helper on a constant, folded here); carried actor (handle +0x94, 0052FBA0) of the
 *     type data_006930C4 -> work+0x538; for the first 16 frames, an actor of the runtime type
 *     data_00725B48 (static, set once to data_006F64F4 under the guard data_00725B44) moves the
 *     player and the push vector by 00520F54's delta; then the push-off:
 *     t = min((float)frames / 15, 1.0 by bits); out = 004D8548(0, +0xC0, t, 0, 0, 1, 0)
 *     (interpolation of the push vector); pos += out - (+0xB4); +0xB4 = out;
 *     sound 004EB5E8 once after 30 frames on a hazard; next action 002D55D0(self, 1) when
 *     anim+0x24 > 0 after frame 25; at the end of the exit animation on a hazard:
 *     002D55D0(self, anim+0x24 > 0).
 *
 * What the round-2 conversion (ghidra_analyzed4) still gets wrong:
 *  - id 0x67: the target point (s18, s21, s20) is stored to sp+0x2C (`vstr` x3) before
 *    00115C70(sp+0x38, sp+0x2C, pos); Ghidra drops the three stores and subtracts an
 *    uninitialised frame Vec3 (local_44): the player slides to garbage while merging;
 *  - the three `ble` tests of anim+0x24 against 0: Ghidra `x <= 0.0` is false on NaN where the
 *    ARM branch is taken (2 of 3 sites request action 1 instead of 0 on NaN);
 *  - 00114608 is called with a uint holding 0x4D800000 (native helper semantics unknown; the
 *    ARM helper converts that float to s64);
 *  - the frame getters 0053EE30 / 0053EDC8 return floats: the round-2 callers declare them
 *    `float` now, matching native/gameplay; here the exact albw_anim_frame / albw_anim_end_frame
 *    are called directly.
 * Equal to round 2 (kept exact): vcvt.u32 saturation (VectorFloatToUnsigned), the signed
 * bit compares with 60.0f and 1.0f, the 004D8548 float arguments.
 *
 * Verified against EU 0038EA10-0038EFB8 instruction by instruction. Confidence: high (flow),
 * medium (field meanings). */
#include "gameplay.h"
#include "gp_math.h"
#include "gptr.h"
#pragma STDC FP_CONTRACT OFF

extern char data_0070B960[], data_00708998[], data_00706E20[], data_006930C4[],
    data_00725B44[], data_00725B48[], data_006F64F4[], data_00711F50[];

float albw_anim_frame(void *ctrl);        /* 0053EE30 */
float albw_anim_end_frame(void *ctrl);    /* 0053EDC8 */

/* round-2 prototypes (build/decomp/ghidra_fallback/ghidra_analyzed4/003/func_0038EA34.c) */
int func_00100174(int *param_1);
int func_00115C54(float *out, float *a, float *b);
int func_00115C70(float *out, float *a, float *b);
int func_00115D70(float *out, float *v, float s);
int func_001E8A70(int param_1);
int func_002D55D0(int param_1, unsigned param_2);
int func_002D55E8(int param_1);
int func_004A37EC(int *param_1, float *param_2, uint32_t *param_3, float fparam_0);
int func_004D8548(float *param_1, float *param_2, float *param_3, float fparam_0, float fparam_1,
                  float fparam_2, float fparam_3, float fparam_4);
int func_004EB5E8(int param_1);
int func_0051D2CC(int *param_1, int param_2, float fparam_0);
int func_00520F54(int param_1, float *param_2, uint32_t param_3);
int func_0052FBA0(int param_1, unsigned param_2);
int func_0053EDD8(int param_1);
int func_00588BE4(int param_1);
int func_0068C690(float *param_1);

#define W(p, off) FLD(p, off, uint32_t)
#define P(w) ((char *)gp_ptr(w))

typedef int (*is_kind_fn)(void *obj, void *type);

static int on_hazard(char *self) {
    char *w = P(W(self, 0x50));
    uint8_t f = FLD(w, 0x324, uint8_t);
    return (f & 1) != 0 || (f & 8) != 0 || FLD(w, 0x168, uint8_t) != 0;
}

/* 0038EC64 / 0038EF98: next action 1 when anim+0x24 > 0, else 0 (`ble`: NaN -> 0) */
static int finish(char *self, uint32_t self_w) {
    float v = FLD(P(W(self, 0x48)), 0x24, float);
    return func_002D55D0((int)self_w, VCMP_LE(v, 0.0f) ? 0u : 1u);
}

int func_0038EA34(uint32_t self_w, int32_t id) {
    char *self = P(self_w);
    if (W(P(W(self, 0x2C)), 0x44) < 5)
        FLD(P(W(data_0070B960, 0)), 0x2C1B, uint8_t) = 0;

    if (id == 0x67) {
        FLD(P(W(self, 0x50)), 0x15C, float) = 0.0f;
        FLD(P(W(self, 0x34)), 4, float) = 0.0f;
        if (W(P(W(self, 0x2C)), 0x44) == 3)
            func_001E8A70((int)W(P(W(data_00708998, 0)), 0x18));
        FLD(P(W(self, 0x4C)), 0x100, float) = 0.0f;
        func_004A37EC((int *)(self + 0xA8), (float *)(self + 0x7C), (uint32_t *)(self + 0x88), 1.0f);

        float a[3], b[3], t[3], d[3], e[3];      /* sp+4, sp+0x20, sp+0x2C, sp+0x38, sp+0x14 */
        func_00115D70(a, (float *)(self + 0x7C), gp_u2f(0x3ECCCCCDu));   /* 0.4 */
        memcpy(b, a, 12);
        func_00115C54(a, (float *)(self + 0x88), b);
        float s18 = a[0], s21 = a[1], s20 = a[2];
        int yaw = func_0068C690((float *)(self + 0x7C));
        float k = gp_u2f(0x3E4CCCCDu);                                  /* 0.2 */
        func_0051D2CC((int *)P(W(self, 0x3C)), (int)((uint32_t)yaw + 0x80000000u), k);
        float *pos = (float *)P(W(self, 0x30));
        t[0] = s18; t[1] = s21; t[2] = s20;
        func_00115C70(d, t, pos);
        memcpy(e, d, 12);
        func_00115D70(d, e, k);
        memcpy(a, d, 12);
        func_00115C54(pos, pos, a);

        char *m = P(W(self, 0x4C));
        uint32_t f5 = gp_vcvt_u32(albw_anim_frame(m + 0x3C));
        uint32_t f0 = gp_vcvt_u32(albw_anim_end_frame(m + 0x3C) - 1.0f);
        if (f5 == f0) {
            FLD(self, 0x76, uint16_t) = 1;
            FLD(P(W(self, 0x28)), 0x5A8, float) = 0.0f;
            FLD(self, 0x71, uint8_t) = 1;
        }
        if (func_0053EDD8((int)gp_u32(P(W(self, 0x4C)) + 0x3C)) == 0)
            return 0;
        float *q = (float *)(P(W(P(W(self, 0x28)), 0x5F4)) + 0x3B4C);
        q[0] = -q[0]; q[1] = -q[1]; q[2] = -q[2];                     /* vneg: sign flip */
        q[6] = -q[6]; q[7] = -q[7]; q[8] = -q[8];
        return finish(self, self_w);
    }
    if (id != 0x68 && id != 0x69 && id != 0x6A)
        return (int)self_w;

    int r = func_002D55E8((int)self_w);
    if (r != 0)
        return r;
    if (W(P(W(self, 0x2C)), 0x44) <= 0xF)
        FLD(P(W(self, 0x34)), 4, float) = 0.0f;
    if (!on_hazard(self)) {
        int32_t c = FLD(self, 0xB0, int32_t);
        if (c >= 0)
            FLD(self, 0xB0, int32_t) = c + 1;
    }
    W(P(W(self, 0x3C)), 0) = (uint32_t)func_0068C690((float *)(self + 0x7C));
    if (FLD(self, 0x72, uint8_t) == 0) {
        char *m = P(W(self, 0x4C));
        float fr = albw_anim_frame(m + 0x5C);
        FLD(m, 0x100, float) = gp_f2i_bits(fr) > 0x42700000 ? 1.0f : 0.0f;  /* 60.0f, signed */
    }
    {
        char *w = P(W(self, 0x50));
        uint32_t yaw = W(P(W(self, 0x3C)), 0);
        FLD(w, 0x166, uint8_t) = ((yaw + 0x10000000u) >> 29) != 0;
    }
    char *a = P(func_0052FBA0((int)(W(data_00706E20, 0) + 0x3DBBC), W(self, 0x94)));
    if (a != 0 && func_00588BE4((int)gp_u32(a)) == (int)W(data_006930C4, 0))
        W(P(W(self, 0x50)), 0x538) = W(self, 0x94);

    if (W(P(W(self, 0x2C)), 0x44) <= 0xF) {
        char *o = P(func_0052FBA0((int)(W(data_00706E20, 0) + 0x3DBBC), W(self, 0x94)));
        if ((W(data_00725B44, 0) & 1) == 0 && func_00100174((int *)data_00725B44) != 0)
            W(data_00725B48, 0) = gp_u32(data_006F64F4);
        if (o != 0) {
            is_kind_fn fn = GFN(is_kind_fn, W(P(W(o, 0)), 0));
            if (fn(o, data_00725B48) == 0)
                o = 0;
        }
        if (o != 0) {
            float v[3] = {0.0f, 0.0f, 0.0f};
            func_00520F54((int)gp_u32(o), v, W(self, 0x30));
            float *pos = (float *)P(W(self, 0x30));
            func_00115C54(pos, pos, v);
            func_00115C54((float *)(self + 0xC0), (float *)(self + 0xC0), v);
        }
    }

    float t = (float)W(P(W(self, 0x2C)), 0x44) * gp_u2f(0x3D888889u);   /* vcvt.f32.u32, 1/15 */
    if (gp_f2i_bits(t) > 0x3F800000)
        t = 1.0f;
    float out[3], z[3] = {0.0f, 0.0f, 0.0f}, d[3], e[3];   /* sp+4, sp+0x1C, sp+0x2C, sp+0x10 */
    func_004D8548(out, z, (float *)(self + 0xC0), t, 0.0f, 0.0f, 1.0f, 0.0f);
    float *pos = (float *)P(W(self, 0x30));
    func_00115C70(d, out, (float *)(self + 0xB4));
    memcpy(e, d, 12);
    func_00115C54(pos, pos, e);
    memcpy(self + 0xB4, out, 12);

    if (on_hazard(self) && FLD(self, 0xB0, int32_t) > 0x1E) {
        func_004EB5E8((int)W(data_00711F50, 0));
        FLD(self, 0xB0, int32_t) = -1;
    }
    if (VCMP_GT(FLD(P(W(self, 0x48)), 0x24, float), 0.0f) && W(P(W(self, 0x2C)), 0x44) > 0x19)
        func_002D55D0((int)self_w, 1);
    if (func_0053EDD8((int)gp_u32(P(W(self, 0x4C)) + 0x5C)) == 0)
        return 0;
    if (!on_hazard(self))
        return 0;
    return finish(self, self_w);
}
