/* USA 0042D464 <- EU 0042D444: collision narrow phase, capsule shape vs. swept segment
 * q0 -> q0 + dir*len.
 *     int f(CapsuleShape *c, const float q0[3], const float dir[3], HitInfo *hit, float len);
 *   capsule axis c+0x58 (p0) -> c+0x64 (p1), radius c+0x70.
 *   d2 = segment/segment distance^2 (0042DA98) with parameters s (capsule) and t (query);
 *   no hit when R*R <= d2 (`bls`: a NaN distance counts as a hit);
 *   hit (if non-NULL): +4 = normalize((p1 - p0)*s - (dir*len)*t), +0x1C = R - sqrt(d2),
 *   +0x10 = (dir*len)*t + normal*(R - sqrt(d2)).   Returns 1 on hit.
 * Caller: 0042AFC4.
 *
 * What was wrong in the Ghidra C: the last Vec3 scale writes a stack temporary Ghidra lost
 * (`func_00115D70(&stack0xffffff90, ...)`) and the following add then used two stack POINTER
 * values reinterpreted as floats; the first word of the hit point was also stored through a
 * `(float)local_64` int VALUE conversion. Natively the contact point was garbage.
 *
 * Verified against EU 0042D444-0042D58C instruction by instruction (copies through sp+0x18 /
 * sp+0x0C / sp+0x3C; s/t at sp+0x34/0x38; vsqrt + vsub for the depth). Vec3 helpers called.
 * Confidence: high. */
#include "gameplay.h"
#pragma STDC FP_CONTRACT OFF

float func_0042DA98(const float *p1, const float *q1, const float *p2, const float *q2,
                    float *out_s, float *out_t);
void func_00115C54(float *out, const float *a, const float *b);   /* a + b */
void func_00115C70(float *out, const float *a, const float *b);   /* a - b */
void func_00115D70(float *out, const float *v, float s);          /* v * s */
void func_00115DC8(float *v);                                     /* normalize */

int func_0042D464(char *c, const float *q0, const float *dir, char *hit, float len) {
    float a[3], dl[3], q1[3], s, t;
    memcpy(a, q0, 12);
    func_00115D70(dl, dir, len);
    func_00115C54(q1, a, dl);
    float d2 = func_0042DA98((float *)AT(c, 0x58), (float *)AT(c, 0x64), a, q1, &s, &t);
    float R = FLD(c, 0x70, float);
    if (VCMP_LS(R * R, d2))
        return 0;
    if (hit) {
        float ax[3], tmp[3];
        func_00115C70(ax, (float *)AT(c, 0x64), (float *)AT(c, 0x58));
        func_00115D70(ax, ax, s);
        func_00115D70(dl, dl, t);
        func_00115C70((float *)AT(hit, 4), ax, dl);
        func_00115DC8((float *)AT(hit, 4));
        float depth = R - __builtin_sqrtf(d2);
        FLD(hit, 0x1C, float) = depth;
        memcpy(AT(hit, 0x10), dl, 12);
        func_00115D70(tmp, (float *)AT(hit, 4), depth);
        func_00115C54((float *)AT(hit, 0x10), (float *)AT(hit, 0x10), tmp);
    }
    return 1;
}
