/* USA 004EDEFC (EU 004EDED4): collider component segment/sweep test (role from callers 004ED9F4
 * family, AUDIT.md section 4): fills the query record `q` (+0x04 direction, +0x10 start,
 * +0x1C length, +0x20.. shape/owner fields) for up to three checks - the other collider's test
 * (vtable slot 0 of *(other+8), run with the start shifted by dir*len and the direction
 * reversed, then shifted back), this collider's own filter (*(this+0x1C)), and the final test
 * (*(other+4)) - and on a hit grows the AABB `box` (min xyz, max xyz) by dir*len (scaled by
 * *(this+0x3C) when other+0x20 is set).  Returns 0/1 (hit/blocked) as on ARM.
 * Route: per-frame actor collision (KCL/collider path every actor - incl. Link - goes through;
 * depth 2 of the TaskRender graph); a tripwire stub today.
 * Bug: the converted source did not compile (a callback result typed float and called).
 * Verified instruction by instruction against EU 004EDED4..004EE458: `vmovgt` min (no change on
 * NaN) / `vmovle` max (taken on NaN: !(box > v)), the integer test of the first callback
 * result, `tst r0, r8` (result & (box != NULL)), the second shift NOT undone on the last test.
 * Confidence: high. */
#pragma STDC FP_CONTRACT OFF
#include "route.h"

int func_00115D70(float *out, float *v, float s);
int func_00115C54(float *out, float *a, float *b);

static void fill_self(char *q, char *self, int has_box)
{
    RF(q, 0x28, uint32_t) = RF(self, 0x14, uint32_t);
    RF(q, 0x2C, uint32_t) = GPTR_OF(RAT(self, 0x20));
    RF(q, 0x20, uint16_t) = RF(RP(self, 0x10), 0x28, uint16_t);
    RF(q, 0x24, uint32_t) = RF(RP(self, 0x10), 0x2C, uint32_t);
    RF(q, 0x30, uint32_t) = RF(self, 0x38, uint32_t);
    RF(q, 0x38, uint8_t) = has_box ? 1 : 0;
    RF(q, 0x34, uint32_t) = 0;
    char *s = RP(self, 0x10);
    RF(q, 0x3C, uint32_t) = RF(s, 4, uint32_t);
    RF(q, 0x40, uint32_t) = RF(s, 8, uint32_t);
    RF(q, 0x44, uint32_t) = RF(s, 0xC, uint32_t);
}

/* start += dir * len; dir = -dir (vldmia/vneg/vstr: exact sign flips) */
static void shift_and_reverse(char *q)
{
    float t[3];
    func_00115D70(t, (float *)RAT(q, 4), RF(q, 0x1C, float));
    func_00115C54((float *)RAT(q, 0x10), (float *)RAT(q, 0x10), t);
    RF(q, 4, float) = -RF(q, 4, float);
    RF(q, 8, float) = -RF(q, 8, float);
    RF(q, 0xC, float) = -RF(q, 0xC, float);
}

static void grow_box(float *box, float *v, char *self, char *other)
{
    if (RF(other, 0x20, uint8_t) != 0)
        func_00115D70(v, v, RF(self, 0x3C, float));
    for (int i = 0; i < 3; i++)
        if (box[i] > v[i])          /* vmovgt */
            box[i] = v[i];
    for (int i = 0; i < 3; i++)
        if (!(box[3 + i] > v[i]))   /* vmovle / ble: also on unordered */
            box[3 + i] = v[i];
}

static int call0(char *obj, char *q)
{
    return RVFN(int (*)(char *, char *), obj, 0)(obj, q);
}

int func_004EDEFC(char *self, float *box, char *q, char *other)
{
    int has_box = box != 0;
    if (q == 0)
        return 1;
    if (RF(other, 8, uint32_t) != 0) {
        fill_self(q, self, has_box);
        shift_and_reverse(q);
        int r = call0(RP(other, 8), q);
        shift_and_reverse(q);
        if (r == 0) {
            if (has_box) {
                float v[3];
                func_00115D70(v, (float *)RAT(q, 4), RF(q, 0x1C, float));
                grow_box(box, v, self, other);
            }
            return 0;
        }
    }
    if (RF(self, 0x1C, uint32_t) != 0) {
        RF(q, 0x28, uint32_t) = RF(other, 0xC, uint32_t);
        RF(q, 0x2C, uint32_t) = 0;
        RF(q, 0x20, uint16_t) = RF(RP(other, 0x1C), 0x28, uint16_t);
        RF(q, 0x24, uint32_t) = RF(RP(other, 0x1C), 0x2C, uint32_t);
        RF(q, 0x30, uint32_t) = RF(self, 0x38, uint32_t);
        RF(q, 0x38, uint8_t) = has_box ? 1 : 0;
        RF(q, 0x34, uint32_t) = RF(other, 0x18, uint32_t);
        char *s = RP(other, 0x1C);
        RF(q, 0x3C, uint32_t) = RF(s, 4, uint32_t);
        RF(q, 0x40, uint32_t) = RF(s, 8, uint32_t);
        RF(q, 0x44, uint32_t) = RF(s, 0xC, uint32_t);
        int r = call0(RP(self, 0x1C), q);
        if (r == 0)
            return 0;
    }
    if (RF(other, 4, uint32_t) == 0) {
        if (!has_box)
            return 1;
        float nd[3] = { -RF(q, 4, float), -RF(q, 8, float), -RF(q, 0xC, float) };
        float v[3];
        func_00115D70(v, nd, RF(q, 0x1C, float));
        grow_box(box, v, self, other);
        return 1;
    }
    fill_self(q, self, has_box);
    shift_and_reverse(q);
    int r = call0(RP(other, 4), q);
    if ((r & has_box) == 0)
        return 1;
    float v[3];
    func_00115D70(v, (float *)RAT(q, 4), RF(q, 0x1C, float));
    grow_box(box, v, self, other);
    return 1;
}
