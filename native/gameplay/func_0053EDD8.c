/* USA 0053EDD8 <- EU 0053ED94: AnimFrameCtrl::isEnd():
 *   b = this->[0x10]->[0x14];
 *   if (b[0x1C]) return 0;                                  (looping)
 *   if (rate [0x10] < 0)  return frame [0x08] <= 0;         (playing backwards)
 *   else                   return frame == endFrame [0x14];
 * 73 call sites (72 read r0): the "animation finished" test of every state handler.
 * What was wrong: only a Ghidra source from ghidra_extra3, with C comparisons; the ARM uses
 * `blt` (rate < 0 OR unordered: a NaN rate takes the backwards branch) and `bls` / `bne`.
 * Callers declare it unprototyped `int ()` (fine: int class).
 * Verified against EU 0053ED94-0053EDF0. Confidence: high. */
#include "gameplay.h"

int func_0053EDD8(uint32_t ctrl_w) {
    void *ctrl = (void *)gp_ptr(ctrl_w);
    void *a = GPTR(ctrl, 0x10, void);
    char *b = GPTR(a, 0x14, char);
    if (FLD(b, 0x1C, uint8_t) != 0)
        return 0;
    if (VCMP_LT(FLD(b, 0x10, float), 0.0f))
        return VCMP_LS(FLD(b, 0x08, float), 0.0f) ? 1 : 0;
    return VCMP_EQ(FLD(b, 0x08, float), FLD(b, 0x14, float)) ? 1 : 0;
}
