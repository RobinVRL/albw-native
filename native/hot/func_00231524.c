/* USA 00231524 <- EU 00231524: AnimSlotCtl::stopAtEnd()   (77 caller files)
 * Same controller as 002317C0 ({s16 mode, s16 slot, f32 frame, AnimSet *anim}) - mode 3:
 *   if (anim && slot >= 0) { 001672F8(anim, slot, 0, 0); e = slot entry (re-read, out of range
 *       -> entry 0); e[0x14] = e->[0x10][0x10] = e[0x20] (end frame, word copy); }
 * Return: r0 as left by the ARM (0 / anim / e[0x10]); callers do not use it.
 *
 * Ghidra vs ARM: correct (EU 00231524-00231590). Confidence: high. */
#include "hot.h"

int func_001672F8(int anim, uint32_t slot, float start, float rate);

int func_00231524(uint32_t ctl_w)
{
    char *ctl = P(ctl_w);
    uint32_t anim_w = W(ctl, 8);
    if (anim_w == 0)
        return 0;
    int32_t slot = FLD(ctl, 2, int16_t);
    if (slot < 0)
        return (int)anim_w;
    func_001672F8((int)anim_w, (uint32_t)slot, 0.0f, 0.0f);
    char *anim = P(W(ctl, 8));
    slot = FLD(ctl, 2, int16_t);
    char *e = P(W(anim, 0xC));
    if (W(anim, 8) > (uint32_t)slot)
        e += (uint32_t)slot * 0x38;
    uint32_t v = W(e, 0x20);
    W(e, 0x14) = v;
    uint32_t sub = W(e, 0x10);
    W(P(sub), 0x10) = v;
    return (int)sub;
}
