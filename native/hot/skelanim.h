/* SkelAnim (skeletal animation player) request processing, shared by 0016898C (request(req))
 * and 00169A80 (calc(): the same code inlined on the pending request stored at self+0x24).
 * Layout and flow: see func_0016898C.c. Every indexed access clamps an out-of-range index to
 * element 0 with an unsigned `hi` compare, as the ARM does. */
#ifndef ALBW_HOT_SKELANIM_H
#define ALBW_HOT_SKELANIM_H
#include "hot.h"

extern char data_006F5988[];

int func_00169344(int self, uint32_t *req);
int func_0010DBB4(int listener, int *name, float frame);
int func_0010E3C4(uint32_t *dst, uint32_t *src, uint32_t n);

/* element i of an array {count at cnt_off, base word at arr_off}, element 0 if out of range */
static char *sk_elem(char *o, int cnt_off, int arr_off, int32_t i, uint32_t size)
{
    char *b = P(W(o, arr_off));
    if (W(o, cnt_off) > (uint32_t)i)
        b += (uint32_t)i * size;
    return b;
}

/* clear the "active" byte of the group of every layer of {count, array} */
static void sk_deactivate_groups(char *self, int cnt_off, int arr_off)
{
    for (int32_t i = 0; i < (int32_t)W(self, cnt_off); i++) {
        if (FLD(sk_elem(self, cnt_off, arr_off, i, 0x28), 0x24, int8_t) < 0)
            continue;
        int32_t g = FLD(sk_elem(self, cnt_off, arr_off, i, 0x28), 0x24, int8_t);
        char *t = P(W(self, 0x94));
        if (W(self, 0x90) > (uint32_t)g)
            t += g * 0x14;
        FLD(t, 0x10, uint8_t) = 0;
    }
}

static int sk_notify(char *self)
{
    if (W(self, 0xA4) == 0)
        return 0;
    float frame = F(P(W(self, 0x14)), 8);
    uint32_t ss[2];
    ss[0] = DATA_W(data_006F5988);
    ss[1] = W(P(W(P(W(P(W(self, 0x14)), 4)), 0)), 0);
    return func_0010DBB4((int)W(self, 0xA4), (int *)ss, frame);
}

static int sk_request(uint32_t self_w, uint32_t *req)
{
    char *self = P(self_w);
    char *rq = (char *)req;
    int ret = (int)self_w;
    uint32_t rcount = W(rq, 0);

    if (rcount == 0)
        goto out;
    uint32_t cur = W(self, 0x0C);
    if (cur == 0) {
        F(self, 0x88) = 0.0f;
        F(self, 0x8C) = 1.0f;
        goto start;
    }
    if (cur == rcount) {
        int same = 1;
        for (int32_t i = 0; i < (int32_t)cur; i++) {
            char *l = sk_elem(self, 0x0C, 0x14, i, 0x28);
            char *e = P(W(rq, 8));
            if (rcount > (uint32_t)i)
                e += (uint32_t)i * 0x18;
            if (W(l, 0) != W(e, 0)) { same = 0; break; }
        }
        if (same) {
            for (int32_t i = 0; i < (int32_t)W(rq, 0); i++) {
                char *e = P(W(rq, 8));
                if (W(rq, 0) > (uint32_t)i)
                    e += (uint32_t)i * 0x18;
                char *l = sk_elem(self, 0x0C, 0x14, i, 0x28);
                float fr = F(e, 0xC);
                if (!VCMP_HS(fr, 0.0f))                       /* bhs skips; NaN skips */
                    fr = F(P(W(P(W(l, 4)), 0)), 8);
                F(l, 0x14) = fr;
                int8_t lp = FLD(e, 0x14, int8_t);
                uint8_t loop;
                if (lp < 0)
                    loop = FLD(P(W(P(W(l, 4)), 0)), 4, uint8_t) & 1;
                else
                    loop = lp != 0;
                FLD(l, 0x1C, uint8_t) = loop;
                float st = F(e, 4), rate = F(e, 8);
                if (VCMP_GE(rate, 0.0f) || !VCMP_EQ(st, 0.0f)) {
                    F(l, 0x0C) = st;
                    F(l, 0x08) = st;
                } else {
                    uint32_t v = W(l, 0x14);
                    W(l, 0x0C) = v;
                    W(l, 0x08) = v;
                }
                F(l, 0x10) = rate;
                W(l, 0x18) = 0;
                FLD(l, 0x26, uint8_t) = 1;
                FLD(l, 0x25, uint8_t) = 1;
                W(l, 0x20) = W(e, 0x10);
            }
            ret = sk_notify(self);
            goto out;
        }
    }
    /* transition to a different animation set */
    {
        float wgt = F(self, 0x88);
        float step = 1.0f;
        if (VCMP_LS(wgt, 0.0f) || gp_f2i_bits(wgt) < 0x3F000000) {
            sk_deactivate_groups(self, 0x18, 0x20);
            uint32_t n = W(self, 0x0C);
            func_0010E3C4((uint32_t *)P(W(self, 0x20)), (uint32_t *)P(W(self, 0x14)), n * 0x28);
            if (W(self, 0x1C) >= n)
                W(self, 0x18) = n;
            F(self, 0x88) = 1.0f;
        } else {
            sk_deactivate_groups(self, 0x0C, 0x14);
        }
        if (FLD(rq, 0x58, uint8_t) == 0) {
            for (int32_t i = 0; i < (int32_t)W(self, 0x18); i++)
                F(sk_elem(self, 0x18, 0x20, i, 0x28), 0x10) = 0.0f;
        }
        int32_t frames = FLD(rq, 0x54, int32_t);
        if (frames > 0)
            step = 1.0f / (float)frames;
        F(self, 0x8C) = step;
    }
start:
    W(self, 0x0C) = 0;
    func_00169344((int)self_w, req);
    ret = sk_notify(self);
out:
    W(self, 0x24) = 0;
    return ret;
}

#endif
