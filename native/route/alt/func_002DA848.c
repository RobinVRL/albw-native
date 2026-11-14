/* USA 002DA848 (EU 002DA824): player action-state handler (virtual, vtable slot 006DD764) for the
 * sub-states 0x78 / 0x79 / 0x7A of an action that pairs Link with another actor (handle +0x70,
 * looked up with 0052FBA0 and RTTI-checked): turning (0051D2CC), animation end tests (0053EDD8 /
 * 0053EE40 at 10.0), a message to the partner (virtual +0x50) and, in 0x7A, a blended move
 * towards the partner (positions +0x7C / +0x88 mixed by n/15, yaw to target 004D80EC when
 * farther than 0.1, velocity from 00115154, 002D5350(this, 0, 7, speed)), each ending in an
 * action request 002D55D0(this, ...).
 * Route: Link's action machine (actor-player phase, depth 4); a tripwire stub today.
 * Bug: the converted source did not compile (`NAN` for the -1 word of the message block).
 * Verified instruction by instruction against EU 002DA824..002DAD7C: `cmp bits, #0x3F800000` +
 * `vmovgt` (signed bit compare) clamp, unfused vmul/vmla distance, `hi`/`ls` (NaN -> no yaw
 * change, speed 0, done flag), `lo` and `ble` NaN outcomes, guard-acquire without release (as
 * compiled), message block {0, 0, -, -, -, -1} (unwritten words 0 here).  Return value: none
 * used (virtual handler; `code` callers): 0.  Confidence: high (flow), medium (names). */
#pragma STDC FP_CONTRACT OFF
#include "../route.h"

extern uint32_t data_00706E20[], data_007260C4[], data_007260C8[], data_006F6314[],
    data_0070B728[], data_00693318[], data_0069331C[], data_00726A60[], data_00726A64[],
    data_006F5D5C[];
int func_0051D2CC(int *ang, int target, float rate);
int func_0053EDD8(int frm);
int func_0053EE40(int frm, float f);
int func_0052FBA0(int mgr, uint32_t handle);
int func_00100174(uint32_t *guard);
int func_00588BE4(void *self);
int func_002D55D0(int self, uint32_t id);
int func_00115D70(float *out, float *v, float s);
int func_00115C54(float *out, float *a, float *b);
int func_004D80EC(float *from, float *to, int yaw);
float func_00115154(float *s, float *c, uint32_t idx);
int func_002D5350(int self, int a, int b, float f);
int func_0028D580(uint32_t *p, int a, uint8_t b, uint8_t c, uint32_t d);

static char *partner(char *self, uint32_t *guard, uint32_t *ti, uint32_t *type)
{
    char *a = GPTR_TO(char, (uint32_t)func_0052FBA0(
        (int)GPTR_OF(GPTR_TO(char, data_00706E20[0]) + 0x3DBBC), RF(self, 0x70, uint32_t)));
    if (!(guard[0] & 1) && func_00100174(guard))
        ti[0] = GPTR_OF(type);
    if (a != 0 && RVFN(int (*)(char *, uint32_t *), a, 0)(a, ti) == 0)
        a = 0;
    return a;
}

static int fwd_test(char *self)
{
    return RF(RP(self, 0x48), 0x24, float) > 0.0f; /* ble -> 0 (also on NaN) */
}

int func_002DA848(char *self, int sub)
{
    if (sub == 0x78) {
        func_0051D2CC((int *)RP(self, 0x3C), RF(self, 0x78, int), 0.2f);
        if (func_0053EDD8((int)GPTR_OF(RP(self, 0x4C) + 0x3C)) == 0) {
            if (func_0053EE40((int)GPTR_OF(RP(self, 0x4C) + 0x3C), 10.0f) == 0)
                return 0;
            char *a = partner(self, data_00726A60, data_00726A64, data_006F5D5C);
            if (a == 0)
                return 0;
            uint32_t msg[6] = { 0, 0, 0, 0, 0, 0xFFFFFFFFu };
            int r = RVFN(int (*)(char *, uint32_t *), a, 0x50)(a, msg);
            RF(self, 0x74, uint8_t) = (uint8_t)r;
            RF(RP(self, 0x44), 0, uint32_t) = 0;
            return 0;
        }
        char *a = partner(self, data_007260C4, data_007260C8, data_006F6314);
        char *g = GPTR_TO(char, data_0070B728[0]);
        if (a != 0 && ((uint32_t)func_00588BE4(a) == data_00693318[0] ||
                       (uint32_t)func_00588BE4(a) == data_0069331C[0])) {
            if (RF(GPTR_TO(char, data_0070B728[0]), 0x44, uint32_t) != 0)
                return 0;
            return func_002D55D0((int)GPTR_OF(self), 0x7A);
        }
        if (RF(self, 0x74, uint8_t) == 2 && RF(g, 0x44, uint32_t) == 0)
            return func_002D55D0((int)GPTR_OF(self), 0x7A);
        return func_002D55D0((int)GPTR_OF(self), (uint32_t)fwd_test(self));
    }
    if (sub == 0x79) {
        func_0051D2CC((int *)RP(self, 0x3C), RF(self, 0x78, int), 0.2f);
        if (func_0053EDD8((int)GPTR_OF(RP(self, 0x4C) + 0x3C)) == 0)
            return 0;
        return func_002D55D0((int)GPTR_OF(self), (uint32_t)fwd_test(self));
    }
    if (sub != 0x7A)
        return 0;

    char *a = partner(self, data_007260C4, data_007260C8, data_006F6314);
    if (a != 0 && RF(a, 0x494, uint8_t) != 0)
        RF(self, 0x94, uint8_t) = 1;
    if (RF(self, 0x94, uint8_t) == 0) {
        char *anim = RP(self, 0x4C);
        func_0028D580((uint32_t *)RAT(anim, 0x3C), 0, 1, 1, 6);
        func_0028D580((uint32_t *)RAT(anim, 0x5C), 0, 1, 1, 6);
        return 0;
    }
    func_0051D2CC((int *)RP(self, 0x3C), RF(self, 0x78, int), 0.1f);
    float t = (float)RF(self, 0x98, int32_t) * 0.0666667f; /* 0x3D888889 */
    uint32_t tb;
    memcpy(&tb, &t, 4);
    if ((int32_t)tb > 0x3F800000)
        t = 1.0f;
    float v1[3], v2[3], sum[3];
    func_00115D70(sum, (float *)RAT(self, 0x7C), t);
    memcpy(v1, sum, sizeof v1);
    func_00115D70(sum, (float *)RAT(self, 0x88), 1.0f - t);
    memcpy(v2, sum, sizeof v2);
    func_00115C54(sum, v1, v2);
    float tgt[3];
    memcpy(tgt, sum, sizeof tgt);
    float *pos = GPTR_TO(float, RF(self, 0x30, uint32_t));
    int yaw = RF(RP(self, 0x3C), 0, int);
    float dx = pos[0] - tgt[0], dz = pos[2] - tgt[2];
    float d2 = dx * dx;
    d2 = d2 + dz * dz;
    float d = __builtin_sqrtf(d2);
    float speed = 0.1f;
    int done = 0;
    if (d > 0.1f) {
        yaw = func_004D80EC(pos, tgt, yaw);
    } else {
        speed = 0.0f;
        done = 1;
    }
    float sc[2];
    func_00115154(&sc[0], &sc[1], (uint32_t)yaw);
    RF(RP(self, 0x34), 4, float) = 0.0f;
    RF(RP(self, 0x38), 0, float) = speed * sc[0];
    RF(RP(self, 0x38), 8, float) = speed * sc[1];
    func_002D5350((int)GPTR_OF(self), 0, 7, speed);
    if (done && RF(self, 0x98, int32_t) >= 15) {
        int b = 0.0f < RF(RP(self, 0x48), 0x24, float); /* movlo */
        return func_002D55D0((int)GPTR_OF(self), (uint32_t)b);
    }
    RF(self, 0x98, int32_t) += 1;
    return 0;
}
