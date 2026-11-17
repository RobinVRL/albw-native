/* USA 002D55D0 (EU 002D55AC): StateBase::changeState(s32 next)   (129 caller files, 336 sites)
 *   int f(StateBase *this, s32 next);
 *   if (next == -2 || next == -1) return 0;  *(s16 *)(this + 4) = next; return this + 8;
 * EU: cmn r1,#2; cmnne r1,#1; strhne r1,[r0,#4]; moveq r0,#0; addne r0,r0,#8; bx lr.
 * The matched C++ source (work7/gpt17, Obj*, s32 -> void*) is behaviourally right; this native
 * version exists for the ABI: the 88 converted caller files declare `int func_002D55D0(int, uint)`
 * (a 32-bit `this`; the matched definition takes a pointer: M64PTR on x86-64) and read the result
 * as a 32-bit int. Confidence: high. */
#include "framework.h"

#include <stdio.h>
#include <stdlib.h>

int func_002D55D0(uint32_t self_w, uint32_t next) {
    int32_t n = (int32_t)next;
    {   /* debug: ALBW_STATE_TRACE=1: every state change (object, old -> new, caller, frame);
         * =<hex object>: only that state machine */
        /* read on every call: a static cache would come back from a save state as "off" */
        const char *e = getenv("ALBW_STATE_TRACE");
        int on = e != NULL;
        uint32_t only = e ? (uint32_t)strtoul(e, NULL, 16) : 0;
        if (only == 1) only = 0;
        if (on && (!only || only == self_w)) {
            extern long g_plat_frames __attribute__((weak));
            fprintf(stderr, "state: f=%ld sm %#x %d -> %d from %p\n", &g_plat_frames ? g_plat_frames : 0L, self_w,
                    (int)FLD(gp_ptr(self_w), 4, int16_t), (int)n, __builtin_return_address(0));
        }
    }
    if (n == -2 || n == -1)
        return 0;
    FLD(gp_ptr(self_w), 4, int16_t) = (int16_t)n;
    return (int)(self_w + 8);
}
