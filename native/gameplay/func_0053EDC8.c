/* USA 0053EDC8 <- EU 0053ED84: AnimFrameCtrl::getEndFrame(): s0 = this->[0x10]->[0x14]->[0x14].
 * 23 call sites, 20 read s0. (See func_0053EE30.c for the getter family.)
 *
 * What was wrong (ABI): its only Ghidra source (ghidra_extra3) is `float f(int)` while all 9
 * converted caller files declare `extern int func_0053EDC8()` (unprototyped, int class): on
 * i386 every call leaves the float in x87 st(0) unpopped -> x87 stack overflow after 8 calls,
 * then every float return on that thread reads NaN. Callers that need the value are lost
 * either way until the signature table says float.
 * Round 2: all 9 converted caller files declare `extern float func_0053EDC8(int)`, so func_
 * now returns the float (this file returned the bits in an int before; that would now pop an
 * empty x87 st(0) per call). `this` taken as an int word + gp_ptr (callers pass an int). Verified against EU 0053ED84-0053ED90. Confidence: high. */
#include "gameplay.h"

float albw_anim_end_frame(void *ctrl) {
    void *a = GPTR(ctrl, 0x10, void);
    void *b = GPTR(a, 0x14, void);
    return FLD(b, 0x14, float);
}

float func_0053EDC8(int ctrl) {
    return albw_anim_end_frame(gp_ptr((uint32_t)ctrl));
}
