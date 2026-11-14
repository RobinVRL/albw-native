/* USA 003381DC (EU 003381B8): calc of the actor class with vtable slot 006E251C: decrements
 * the s16 timer +0x440 (floored at 0), actor common update 0014E2A0(this, *(this+0x43C),
 * this+0x444, 0x200, 0, 0), StateMgr::exec (StateMgr at +0x414), tail 004CEAF0(*(this+0x40C)).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 003381B8..00338280.  Confidence: high. */
#include "route.h"

uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
void func_004CEAF0(int model);

void func_003381DC(char *self)
{
    int32_t t = RF(self, 0x440, int16_t) - 1;
    if (t < 0)
        t = 0;
    RF(self, 0x440, uint16_t) = (uint16_t)t;
    func_0014E2A0(self, RF(self, 0x43C, uint32_t), GPTR_OF(RAT(self, 0x444)), 0x200, 0, 0);
    route_statemgr_exec(RAT(self, 0x414));
    func_004CEAF0((int)RF(self, 0x40C, uint32_t));
}
