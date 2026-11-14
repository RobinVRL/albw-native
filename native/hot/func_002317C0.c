/* USA 002317C0 <- EU 002317C0: AnimSlotCtl::play(float rate) -> float (s0)
 * A small "play one animation slot" controller embedded in many actors (377 caller files):
 *   struct { s16 mode; s16 slot; f32 frame; AnimSet *anim; }   (anim at +8)
 * AnimSet: +8 slot count, +0xC array of 0x38-byte slots (+0x10 ptr -> its +0x10 frame,
 * +0x14 frame, +0x18 start, +0x1C rate, +0x20 end frame, +0x24, +0x34/+0x35 flags);
 * 001672F8(anim, slot, start, rate) = start the slot (out-of-range slot -> slot 0, `addhi`).
 *
 *   if (!anim || slot < 0) return rate;                 (s0 untouched)
 *   switch ((u16)mode)  [jump table, mode >= 5 incl. negative -> return 0]
 *   0: return 001672F8(anim, slot, 0, rate)             (tail call)
 *   1: 001672F8(anim, slot, 0, 0); e = slot(anim, ctl.slot); e[0x14] = 0; e->[0x10][0x10] = 0
 *   2: return 001672F8(anim, slot, e[0x20], -rate)      (play backwards from the end)
 *   3: 001672F8(anim, slot, 0, 0); e = ...; e[0x14] = e->[0x10][0x10] = e[0x20] (word copy)
 *   4: rate `blt` 0 (TRUE for NaN) ? 001672F8(anim, slot, e[0x20], -rate)
 *                                  : 001672F8(anim, slot, 0, rate);
 *      e = ...; e[0x14] = e->[0x10][0x10] = ctl.frame (word copy)
 * Return value (s0): 001672F8 never writes s0 (it uses s2/s3 only), so every path returns the
 * `start` value it passed (0, or e[0x20] for the reverse cases), or `rate` on the early exit.
 * Slot lookups after a call re-read anim and slot from the controller (as the ARM does).
 *
 * Ghidra vs ARM: correct except mode 4 with a NaN rate: ARM `vcmpe s1, s0; blt` is taken for
 * NaN (reverse branch: start = end frame, rate = -NaN), Ghidra's `if (rate < 0)` takes the
 * forward branch. Fixed. Verified insn by insn, EU 002317C0-00231944 + jump table 002317FC.
 * Confidence: high (flow), medium (names). */
#include "hot.h"

int func_001672F8(int anim, uint32_t slot, float start, float rate);

static char *slot_entry(char *anim, int32_t slot)
{
    char *e = P(W(anim, 0xC));
    if ((uint32_t)slot < W(anim, 8))    /* cmp count, slot; hi */
        e += (uint32_t)slot * 0x38;
    return e;
}

float func_002317C0(uint32_t ctl_w, float rate)
{
    char *ctl = P(ctl_w);
    uint32_t anim_w = W(ctl, 8);
    if (anim_w == 0)
        return rate;
    int32_t slot = FLD(ctl, 2, int16_t);
    if (slot < 0)
        return rate;
    char *anim = P(anim_w);
    char *e;
    float start;
    uint32_t v;
    switch ((uint32_t)(int32_t)FLD(ctl, 0, int16_t)) {
    case 0:
        func_001672F8((int)anim_w, (uint32_t)slot, 0.0f, rate);
        return 0.0f;
    case 1:
        func_001672F8((int)anim_w, (uint32_t)slot, 0.0f, 0.0f);
        e = slot_entry(P(W(ctl, 8)), FLD(ctl, 2, int16_t));
        F(e, 0x14) = 0.0f;
        F(P(W(e, 0x10)), 0x10) = 0.0f;
        return 0.0f;
    case 2:
        start = F(slot_entry(anim, slot), 0x20);
        func_001672F8((int)anim_w, (uint32_t)slot, start, -rate);
        return start;
    case 3:
        func_001672F8((int)anim_w, (uint32_t)slot, 0.0f, 0.0f);
        anim = P(W(ctl, 8));
        e = slot_entry(anim, FLD(ctl, 2, int16_t));
        v = W(e, 0x20);
        W(e, 0x14) = v;
        W(P(W(e, 0x10)), 0x10) = v;
        return 0.0f;
    case 4:
        if (VCMP_LT(rate, 0.0f)) {
            start = F(slot_entry(anim, slot), 0x20);
            func_001672F8((int)anim_w, (uint32_t)slot, start, -rate);
        } else {
            start = 0.0f;
            func_001672F8((int)anim_w, (uint32_t)slot, 0.0f, rate);
        }
        v = W(ctl, 4);
        e = slot_entry(P(W(ctl, 8)), FLD(ctl, 2, int16_t));
        W(e, 0x14) = v;
        W(P(W(e, 0x10)), 0x10) = v;
        return start;
    default:
        return 0.0f;
    }
}
