/* USA 002D55D0 (EU 002D55AC): StateBase::changeState(s32 next)   (129 caller files, 336 sites)
 *   int f(StateBase *this, s32 next);
 *   if (next == -2 || next == -1) return 0;  *(s16 *)(this + 4) = next; return this + 8;
 * EU: cmn r1,#2; cmnne r1,#1; strhne r1,[r0,#4]; moveq r0,#0; addne r0,r0,#8; bx lr.
 * The matched C++ source (work7/gpt17, Obj*, s32 -> void*) is behaviourally right; this native
 * version exists for the ABI: the 88 converted caller files declare `int func_002D55D0(int, uint)`
 * (a 32-bit `this`; the matched definition takes a pointer: M64PTR on x86-64) and read the result
 * as a 32-bit int. Confidence: high. */
#include "framework.h"

int func_002D55D0(uint32_t self_w, uint32_t next) {
    int32_t n = (int32_t)next;
    if (n == -2 || n == -1)
        return 0;
    FLD(gp_ptr(self_w), 4, int16_t) = (int16_t)n;
    return (int)(self_w + 8);
}
