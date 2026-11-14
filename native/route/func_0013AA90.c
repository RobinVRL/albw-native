/* USA 0013AA90 (EU 0013AA90): calc of the actor class with vtable slot 006C69F0: decrements
 * the s16 timer +0x440 (floored at 0), actor common update 0014E2A0(this, *(this+0x410),
 * this+0x450, 0x202, 0, 0), StateMgr::exec of the StateMgr at +0x41C.
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0013AA90..0013AB50 (ldrsh/sub/movlt/strh,
 * two zero stack args).  Confidence: high. */
#include "route.h"

uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);

void func_0013AA90(char *self)
{
    int32_t t = RF(self, 0x440, int16_t) - 1;
    if (t < 0)
        t = 0;
    RF(self, 0x440, uint16_t) = (uint16_t)t;
    func_0014E2A0(self, RF(self, 0x410, uint32_t), GPTR_OF(RAT(self, 0x450)), 0x202, 0, 0);
    route_statemgr_exec(RAT(self, 0x41C));
}
