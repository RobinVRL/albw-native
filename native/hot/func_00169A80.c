/* USA 00169A80 <- EU 00169A80: SkelAnim::calc()   (257 caller files, one per animated actor)
 * Per-frame update of the skeletal-animation player (layout: func_0016898C.c).
 *   1. a pending request stored IN the player (self+0x24, the same 0x5C-byte AnimReq layout:
 *      count +0x24, entries +0x2C, blend frames +0x78, keep +0x7C) is applied with exactly the
 *      code of 0016898C (inlined by the compiler: sk_request), which also clears self[0x24];
 *   2. if weight `ble` 0 is false (weight > 0, NaN skips) and self[0] == 0: advance every
 *      previous (blend-source) layer; 3. advance every current layer. Advance of a layer with
 *      a resource (+4) and not just restarted (+0x25 == 0):
 *        old = l.frame; new = old + l.rate; l.prev = old; l.frame = new;
 *        loop:   new `ble` end (NaN: true) ? (new `bhs` 0 (NaN: true) ? - : frame = new + end,
 *                                                                        ++l.loops)
 *                                           : frame = new - end, ++l.loops
 *        once:   new > end ? frame = end : frame = (new `le` 0 (NaN: true) ? 0 : new)
 *      and l[0x25] = 0 for every layer.
 *   (the previous layers store {new, old} with one vstmia; the current ones old then new.)
 * The callers' prototype has 4 parameters (Ghidra used r1-r3 as temporaries); only r0 is
 * read. Return (r0, unused by callers): self[0xC] as left in r0 by the last loop test.
 *
 * Ghidra vs ARM: request part as in 0016898C (undefined in_fpscr weight test: positive NaN
 * weight takes the reset path). Advance: with a NaN frame, ARM wraps nothing for looping
 * layers and clamps to 0 for one-shot layers (`vmovle` is true when unordered); Ghidra
 * subtracts the end frame and counts a loop, resp. stores the NaN. Verified insn by insn
 * EU 00169A80-0016A028. Confidence: high (flow), medium (names). */
#include "skelanim.h"

static void advance(char *l, int prev_first)
{
    float old = F(l, 8);
    float nw = old + F(l, 0x10);
    if (prev_first) {          /* vstmia r0, {s0, s1}: +8 = new, +0xC = old */
        F(l, 8) = nw;
        F(l, 0xC) = old;
    } else {                   /* vstr old -> +0xC, then new -> +8 */
        F(l, 0xC) = old;
        F(l, 8) = nw;
    }
    float end = F(l, 0x14);
    if (FLD(l, 0x1C, uint8_t) != 0) {
        if (VCMP_LE(nw, end)) {
            if (VCMP_HS(nw, 0.0f))
                return;
            F(l, 8) = nw + end;
        } else {
            F(l, 8) = nw - end;
        }
        W(l, 0x18) = W(l, 0x18) + 1;
    } else {
        if (VCMP_GT(nw, end)) {
            F(l, 8) = end;
            return;
        }
        F(l, 8) = VCMP_LE(nw, 0.0f) ? 0.0f : nw;
    }
}

int func_00169A80(uint32_t self_w, uint32_t unused1, uint32_t unused2, uint32_t unused3)
{
    char *self = P(self_w);

    if (W(self, 0x24) != 0)
        sk_request(self_w, (uint32_t *)(self + 0x24));

    if (!VCMP_LE(F(self, 0x88), 0.0f) && W(self, 0) == 0) {
        for (int32_t i = 0; i < (int32_t)W(self, 0x18); i++) {
            char *l = sk_elem(self, 0x18, 0x20, i, 0x28);
            if (W(l, 4) != 0 && FLD(l, 0x25, uint8_t) == 0)
                advance(l, 1);
            FLD(l, 0x25, uint8_t) = 0;
        }
    }
    for (int32_t i = 0; i < (int32_t)W(self, 0x0C); i++) {
        char *l = sk_elem(self, 0x0C, 0x14, i, 0x28);
        if (W(l, 4) != 0 && FLD(l, 0x25, uint8_t) == 0)
            advance(l, 0);
        FLD(l, 0x25, uint8_t) = 0;
    }
    return (int)W(self, 0x0C);
}
