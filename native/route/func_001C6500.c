/* USA 001C6500 (EU 001C6500): calc of the actor class with vtable slot 006CFE34: decrements
 * the s16 timer +0x4C4 (floored at 0) and, when it is 0, runs the actor common update
 * 0014E2A0(this, *(this+0x4A0), this+0x4C8, 0x1608, 0, 0); StateMgr::exec (StateMgr at
 * +0x414); tail 001C6354(this).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 001C6500..001C65D4 (movlt/sxth/strh/bne).
 * Confidence: high. */
#include "route.h"

uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
void func_001C6354(char *self);

void func_001C6500(char *self)
{
    int32_t t = RF(self, 0x4C4, int16_t) - 1;
    if (t < 0)
        t = 0;
    int16_t v = (int16_t)t;
    RF(self, 0x4C4, int16_t) = v;
    if (v == 0)
        func_0014E2A0(self, RF(self, 0x4A0, uint32_t), GPTR_OF(RAT(self, 0x4C8)), 0x1608, 0, 0);
    route_statemgr_exec(RAT(self, 0x414));
    func_001C6354(self);
}
