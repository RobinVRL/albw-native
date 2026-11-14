/* USA 004F5588 <- EU 004F5560: EnemyBase::calcMove() — per-frame ground / wall resolution of
 * the enemy movement (84 caller files: every EnemyBase subclass's calc). pos = self[0x3D0],
 * ground y0 = self[0x36C] (anchor Vec3 self[0x368]), flags self[0x59C] (config) / self[0x5A0]
 * (state), radius-like floats self[0x4C4]/[0x4C8]/[0x4CC], probe queries 0014FA44 / 0014F5A8 /
 * 0014EEC8 / 001503F4 / 0014FFEC (self, &push, &box, flags, f) -> hit, push added to pos.
 *
 *   prev pos self[0x4D0] = pos; self[0x5A4] = self[0x5A0]; self[0x89E] = 0; 0014F0B0(self);
 *   st = (st & ~0x01C4C724) | 0x10000; 004F7D3C(self);
 *   self[0x590..0x598] = 0; self[0x7A8..0x7B0] = 0; self[0x7A4] = 0; self[0x8B4] = 0;
 *   if (cfg & 0x30) {
 *     R = *data_007A9260 (zero vector)
 *     if (cfg & 0x20 && self[0x4CC] != 0 (NaN: != holds)) for c in {self[0x430], self[0x434]
 *        (second only if nonzero)}: R = 0; if (0014FA44(self, &R, c, self[0x448], self[0x588],
 *        0, 0)) { R.y = 0; R *= self[0x4CC]; pos += R; }
 *     if (cfg & 0x10) {
 *       D = pos - anchor; dy = D.y;
 *       steep = (cfg & 0x400000) || self[0x4C4] != self[0x4C8] (NaN: true)
 *               || pos.y - y0 > self[0x4C8] * 0.7f (NaN: false);
 *       if (pos.y > y0 (NaN: false)) {                          airborne: probe downwards
 *         self[0x849] = 0; st |= 0x1000000;
 *         h = bits(self[0x4C8]) >= bits(0.55f) (signed) ? self[0x4C8] : 0.55f;
 *         D = {0, h, 0}; if (self[0x768] & 1 && self[0x750] > 0) D.y = h + self[0x750];
 *         R = 0; if ((steep ? 0014F5A8(.., cfg2 | 0x60, h) : 0014EEC8(.., cfg2, h))) pos += R;
 *         self[0x39C] &= ~2; st &= ~0x0144C724;
 *       }
 *       st &= ~0x1000000;                                  (cfg2 = self[0x58C], box = self+0x4B8)
 *       hit = 0;
 *       if (self[0x768]) {                                 two extra boxes, bits 0/1
 *         self[0x849] = 1;
 *         for i in 0, 1: if (self[0x768] & (1 << i)) {
 *           b = self + 0x748 + 0x10*i; st |= 0x40500;
 *           D = {b[4], b[8] + b[0], b[0xC]};
 *           if (!(pos.y `hi` y0) (NaN: hi true -> skip)) { t = b[0] * 2;
 *             if (bits(t) < bits(2.0)) { u = b[8] + t;
 *               if (bits(u) > bits(2.0)) { v = 2.0 - b[0]; if (v > b[0]) D.y = v; } } }
 *           R = 0; if (0014EEC8(self, &R, &D, cfg2 & ~0x60, b[0])) { R.y = 0; pos += R; } }
 *         self[0x39C] &= ~2; self[0x8B4] = 1; self[0x849] = 0;
 *         st &= ~0x0140C724 & ~0x40000 & ~0x500;
 *         R = 0; if ((steep ? 001503F4 : 0014FFEC)(self, &R, box, cfg2 | 0x60, self[0x4C8]))
 *           { pos += R; hit = 1; }
 *       } else {
 *         self[0x8B4] = 1; self[0x849] = 0;
 *         R = 0; if ((steep ? 0014F5A8 : 0014EEC8)(self, &R, box, cfg2 | 0x60, self[0x4C8]))
 *           { pos += R; hit = 1; }
 *       }
 *       if ((st & 0x40000) && hit && self[0x7FC] != 2 && dy < 0 (ordered: `ble` skips NaN)
 *           && pos.y > y0) pos.y = y0;
 *     }
 *   }
 *   if (st & 0x100) { if (pos.y > y0) st |= 0x200; if (self[0x76C] < 0x80) ++self[0x76C]; }
 *   else self[0x76C] = 0;
 *   if (cfg & 0x1000000) { cur = self[0x57C]; tgt = (st & 0x8000) ? -0.25f : 0; self[0x580] = tgt;
 *     if (tgt != cur (NaN: true)) self[0x57C] = cur + (tgt - cur) * 0.1f (vmla, unfused); }
 *   else self[0x57C] = 0;
 *   if (005211D8(self)) 004F499C(self, 0);          (fell below y = -75: bit compare)
 *   self[0x8A8] = pos - anchor (00115C70); st &= ~0x10000000
 * (st = self[0x5A0] re-read and written back at each step exactly as the ARM does.)
 *
 * Ghidra vs ARM (round-2 conversion), real bugs:
 *  1. the airborne probe box D = {0, h(+self[0x750]), 0} is never written: Ghidra passes the
 *     stack vector still holding pos - anchor (and drops the self[0x768] bit-0 extension);
 *  2. the per-box probe vector D = {b[4], b[8] + b[0], b[0xC]} and its 2.0 clamp (bit-pattern
 *     compares) are lost: the box probes run with the stale pos - anchor vector;
 *  3. the final "landed: snap to y0" test reads `in_stack_ffffffb4`, a separate never-written
 *     local in the conversion, instead of dy = (pos - anchor).y saved in s16;
 *  4. the 0014FA44 hits set R.y = 0 before scaling (kept by Ghidra as `local_40 = fVar5`: OK),
 *     and the box-probe hit sets R.y = 0 too (Ghidra: `local_40 = fVar11`, OK);
 *  5. the return value is a float in the converted prototype (s0, never read: 0 here).
 * Verified insn by insn, EU 004F5560-004F5B90. Confidence: high (flow), medium (names). */
#include "hot.h"
#pragma STDC FP_CONTRACT OFF

extern char data_007A9260[];

int func_0014F0B0(int self);
int func_004F7D3C(int self);
int func_0014FA44(void *self, int push, uint32_t c, uint32_t d, uint32_t flags, uint32_t z0, int z1);
int func_0014F5A8(int self, uint32_t push, uint32_t *box, uint32_t flags, float f);
int func_0014EEC8(int self, uint32_t push, uint32_t *box, uint32_t flags, float f);
int func_001503F4(int self, uint32_t push, uint32_t *box, uint32_t flags, float f);
int func_0014FFEC(int self, uint32_t push, uint32_t *box, uint32_t flags, float f);
int func_00115C54(float *out, float *a, float *b);
int func_00115C70(float *out, float *a, float *b);
int func_00115D70(float *out, float *a, float s);
int func_005211D8(int self);
int func_004F499C(int self, int x);

#define ST(self) W(self, 0x5A0)

static void add_push(char *self, float *R)
{
    func_00115C54((float *)(self + 0x3D0), (float *)(self + 0x3D0), R);
}

float func_004F5588(uint32_t self_w)
{
    char *self = P(self_w);
    float D[3], R[3];
    float dy = 0.0f;   /* s16: only read on the path that sets it */

    W(self, 0x4D0) = W(self, 0x3D0);
    W(self, 0x4D4) = W(self, 0x3D4);
    W(self, 0x4D8) = W(self, 0x3D8);
    W(self, 0x5A4) = ST(self);
    FLD(self, 0x89E, uint8_t) = 0;
    func_0014F0B0((int)self_w);
    ST(self) = (ST(self) & ~0x01C4C724u) | 0x10000u;
    func_004F7D3C((int)self_w);
    F(self, 0x590) = 0.0f; F(self, 0x594) = 0.0f; F(self, 0x598) = 0.0f;
    F(self, 0x7A8) = 0.0f; F(self, 0x7AC) = 0.0f; F(self, 0x7B0) = 0.0f;
    W(self, 0x7A4) = 0;
    FLD(self, 0x8B4, uint8_t) = 0;

    if (W(self, 0x59C) & 0x30) {
        memcpy(R, data_007A9260, 12);
        if ((W(self, 0x59C) & 0x20) && !VCMP_EQ(F(self, 0x4CC), 0.0f)) {
            for (int k = 0; k < 2; k++) {
                uint32_t c = W(self, k ? 0x434 : 0x430);
                if (k && c == 0)
                    break;
                R[0] = R[1] = R[2] = 0.0f;
                if (func_0014FA44(self, (int)gp_u32(R), c, W(self, 0x448), W(self, 0x588),
                                  0, 0)) {
                    R[1] = 0.0f;
                    func_00115D70(R, R, F(self, 0x4CC));
                    add_push(self, R);
                }
            }
        }
        if (W(self, 0x59C) & 0x10) {
            func_00115C70(D, (float *)(self + 0x3D0), (float *)(self + 0x368));
            dy = D[1];
            int steep;
            if ((W(self, 0x59C) & 0x400000) || !VCMP_EQ(F(self, 0x4C4), F(self, 0x4C8)))
                steep = 1;
            else
                steep = !VCMP_LE(F(self, 0x3D4) - F(self, 0x36C), F(self, 0x4C8) * 0.7f);

            uint32_t st;
            if (!VCMP_LE(F(self, 0x3D4), F(self, 0x36C))) {
                FLD(self, 0x849, uint8_t) = 0;
                ST(self) |= 0x1000000u;
                float h = gp_f2i_bits(F(self, 0x4C8)) >= 0x3F0CCCCD ? F(self, 0x4C8)
                                                                    : gp_u2f(0x3F0CCCCDu);
                D[0] = 0.0f;
                D[1] = h;
                D[2] = 0.0f;
                if ((FLD(self, 0x768, uint8_t) & 1) && !VCMP_LE(F(self, 0x750), 0.0f))
                    D[1] = h + F(self, 0x750);
                R[0] = R[1] = R[2] = 0.0f;
                int hit = steep
                    ? func_0014F5A8((int)self_w, gp_u32(R), (uint32_t *)D, W(self, 0x58C) | 0x60, h)
                    : func_0014EEC8((int)self_w, gp_u32(R), (uint32_t *)D, W(self, 0x58C), h);
                if (hit)
                    add_push(self, R);
                W(self, 0x39C) &= ~2u;
                st = ST(self) & ~0x0144C724u;
                ST(self) = st;
            } else {
                st = ST(self);
            }
            ST(self) = st & ~0x1000000u;

            uint32_t *box = (uint32_t *)(self + 0x4B8);
            int hit = 0;
            if (FLD(self, 0x768, uint8_t) != 0) {
                FLD(self, 0x849, uint8_t) = 1;
                for (uint32_t i = 0; i < 2; i++) {
                    if (!(FLD(self, 0x768, uint8_t) & (1u << i)))
                        continue;
                    char *b = self + 0x748 + 0x10 * (i & 1);
                    ST(self) |= 0x40500u;
                    float b0 = F(b, 0);
                    D[2] = F(b, 0xC);
                    D[0] = F(b, 4);
                    D[1] = F(b, 8) + b0;
                    if (!VCMP_HI(F(self, 0x3D4), F(self, 0x36C))) {
                        float t = b0 * 2.0f;
                        if (gp_f2i_bits(t) < 0x40000000) {
                            float u = F(b, 8) + t;
                            if (gp_f2i_bits(u) > 0x40000000) {
                                float v = 2.0f - b0;
                                if (VCMP_GT(v, b0))
                                    D[1] = v;
                            }
                        }
                    }
                    R[0] = R[1] = R[2] = 0.0f;
                    if (func_0014EEC8((int)self_w, gp_u32(R), (uint32_t *)D,
                                      W(self, 0x58C) & ~0x60u, b0)) {
                        R[1] = 0.0f;
                        add_push(self, R);
                    }
                }
                W(self, 0x39C) &= ~2u;
                FLD(self, 0x8B4, uint8_t) = 1;
                FLD(self, 0x849, uint8_t) = 0;
                ST(self) = ST(self) & ~0x0140C724u & ~0x40000u & ~0x500u;
                R[0] = R[1] = R[2] = 0.0f;
                uint32_t fl = W(self, 0x58C) | 0x60;
                float f = F(self, 0x4C8);
                hit = steep ? func_001503F4((int)self_w, gp_u32(R), box, fl, f)
                            : func_0014FFEC((int)self_w, gp_u32(R), box, fl, f);
            } else {
                FLD(self, 0x8B4, uint8_t) = 1;
                FLD(self, 0x849, uint8_t) = 0;
                R[0] = R[1] = R[2] = 0.0f;
                float f = F(self, 0x4C8);
                uint32_t fl = W(self, 0x58C) | 0x60;
                hit = steep ? func_0014F5A8((int)self_w, gp_u32(R), box, fl, f)
                            : func_0014EEC8((int)self_w, gp_u32(R), box, fl, f);
            }
            if (hit) {
                add_push(self, R);
                hit = 1;
            }
            if ((ST(self) & 0x40000) && hit && FLD(self, 0x7FC, uint8_t) != 2 &&
                VCMP_GT(0.0f, dy)) {
                if (VCMP_GT(F(self, 0x3D4), F(self, 0x36C)))
                    F(self, 0x3D4) = F(self, 0x36C);
            }
        }
    }

    uint32_t st = ST(self);
    if (st & 0x100) {
        if (VCMP_GT(F(self, 0x3D4), F(self, 0x36C)))
            ST(self) = st | 0x200;
        uint8_t n = FLD(self, 0x76C, uint8_t);
        if (n < 0x80)
            FLD(self, 0x76C, uint8_t) = n + 1;
    } else {
        FLD(self, 0x76C, uint8_t) = 0;
    }
    if (W(self, 0x59C) & 0x1000000) {
        float cur = F(self, 0x57C);
        float tgt = (ST(self) & 0x8000) ? -0.25f : 0.0f;
        F(self, 0x580) = tgt;
        if (!VCMP_EQ(tgt, cur)) {
            float d = tgt - cur;
            float k = d * gp_u2f(0x3DCCCCCDu);
            F(self, 0x57C) = cur + k;
        }
    } else {
        F(self, 0x57C) = 0.0f;
    }
    if (func_005211D8((int)self_w))
        func_004F499C((int)self_w, 0);
    func_00115C70((float *)(self + 0x8A8), (float *)(self + 0x3D0), (float *)(self + 0x368));
    ST(self) &= ~0x10000000u;
    return 0.0f;
}
