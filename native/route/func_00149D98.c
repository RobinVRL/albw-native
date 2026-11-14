/* USA 00149D98 (EU 00149D98): camera look-at update from a camera-target object (r1): eye =
 * target+0x1B0, at = target+0x1BC; direction (+0x80) = normalize(at - eye) (skipped when the
 * length is 0 or a component is NaN); in "pulled back" mode (+0xA0) the position is
 * lerp(eye, at, 1.1) (004997A0), +0x9C = |eye - pos|, up (+0x74) = static (0,0,1), +0x94 =
 * eye.y - pos.y and, when the target's fovy (+0xE8, degrees) changed, the projection is
 * updated through 00115194 (tan of the half angle) and 002568A8; otherwise pos = at and
 * up = static (0,1,0). Then +0x5C = pos, +0x68 = pos + dir, the embedded object at +0x28 gets
 * its virtual +0x10(+0x2C) and 00409250(this, this+0x2C) builds the view.
 * Route: the gameplay camera, every frame (004EFB10 -> 004ED740 -> 00149D90 -> here).
 * Bug: 004997A0 returns its Vec3 in s0-s2 (vldmia r2, {s0, s1, s2}); Ghidra kept only s0, so the
 * converted code used uninitialised in_s1/in_s2 for pos.y/pos.z (camera height and depth, the
 * distance +0x9C and +0x94). The lerp is done here exactly as 004997A0 does it (00115C70,
 * 00115D70, 00115C54 on stack temporaries).
 * Verified instruction by instruction against EU 00149D98..0014A064: `beq` length == 0,
 * `vcmp s,s; bne` NaN tests (vldreq/vcmpeq chain), unfused vmul/vmla distance, guarded statics
 * data_0079665C {0,0,1} / data_00796668 {0,1,0} (guards 00711E30 / 00711E34 via 00100174,
 * no guard release in the EU code), `beq` fovy unchanged, vcvt.u32 of
 * ((fovy * 0.5) * 2^31) * (1/180), (d * t) / h * 400 * (1/240).  Confidence: high (flow),
 * medium (field names). */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

extern uint32_t data_00711E30[], data_00711E34[], data_0079665C[], data_00796668[];
int func_00115C70(float *out, float *a, float *b);
int func_00115D70(float *out, float *v, float s);
int func_00115C54(float *out, float *a, float *b);
float func_00115DC8(float *v);
float func_00115194(uint32_t idx);
int func_00100174(int *guard);
int func_002568A8(int obj, float f);
void func_00409250(char *self, float *p);

static void lerp_004997A0(float out[3], float *a, float *b, float t)
{
    float d[3], s[3];
    func_00115C70(d, b, a);
    memcpy(s, d, sizeof s);
    func_00115D70(s, s, t);
    func_00115C54(out, a, s);
}

void func_00149D98(char *self, char *target)
{
    float eye[3], at[3], pos[3], dir[3], sum[3];
    memcpy(eye, RAT(target, 0x1B0), sizeof eye);
    memcpy(at, RAT(target, 0x1BC), sizeof at);
    memcpy(pos, eye, sizeof pos);
    func_00115C70(dir, at, eye);
    memcpy(RAT(self, 0x80), dir, sizeof dir);
    float len = func_00115DC8((float *)RAT(self, 0x80));
    if (len == 0.0f)
        return;
    float x = RF(self, 0x80, float), y = RF(self, 0x84, float), z = RF(self, 0x88, float);
    if (x != x || y != y || z != z)
        return;
    uint8_t pulled = RF(self, 0xA0, uint8_t);
    RF(self, 0xA2, uint8_t) = 1;
    if (pulled != 0) {
        lerp_004997A0(pos, eye, at, 1.1f);
        float dx = eye[0] - pos[0], dy = eye[1] - pos[1], dz = eye[2] - pos[2];
        float d2 = dx * dx;
        d2 = d2 + dy * dy;
        d2 = d2 + dz * dz;
        RF(self, 0x9C, float) = __builtin_sqrtf(d2);
        if ((data_00711E30[0] & 1) == 0 && func_00100174((int *)data_00711E30) != 0) {
            float *u = (float *)data_0079665C;
            u[0] = 0.0f; u[1] = 0.0f; u[2] = 1.0f;
        }
        memcpy(RAT(self, 0x74), data_0079665C, 12);
        func_00115DC8((float *)RAT(self, 0x74));
        RF(self, 0x94, float) = eye[1] - pos[1];
        float fovy = RF(target, 0xE8, float);
        if (!(RF(self, 0x90, float) == fovy)) {
            RF(self, 0x90, float) = fovy;
            float a = fovy * 0.5f;
            a = a * 2147483648.0f;
            a = a * 0.00555555569f;            /* 0x3BB60B61 */
            float t = func_00115194(route_vcvt_u32(a));
            float v = RF(self, 0x9C, float) * t;
            v = v / RF(self, 0x94, float);
            v = v * 400.0f;
            v = v * 0.00416666688f;            /* 0x3B888889 */
            func_002568A8((int)RF(self, 0x18, uint32_t), v);
        }
    } else {
        memcpy(pos, at, sizeof pos);
        if ((data_00711E34[0] & 1) == 0 && func_00100174((int *)data_00711E34) != 0) {
            float *u = (float *)data_00796668;
            u[0] = 0.0f; u[1] = 1.0f; u[2] = 0.0f;
        }
        memcpy(RAT(self, 0x74), data_00796668, 12);
        func_00115DC8((float *)RAT(self, 0x74));
        RF(self, 0x94, float) = 0.0f;
    }
    memcpy(RAT(self, 0x5C), pos, 12);
    func_00115C54(sum, pos, (float *)RAT(self, 0x80));
    memcpy(RAT(self, 0x68), sum, 12);
    char *o = RAT(self, 0x28);
    RVFN(int (*)(char *, char *), o, 0x10)(o, RAT(self, 0x2C));
    func_00409250(self, (float *)RAT(self, 0x2C));
}
