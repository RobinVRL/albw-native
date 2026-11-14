/* USA 00516258 (EU 00516230): calc of the actor class with vtable slot 006EF3B4: actor
 * common update 0014E2A0(this, *(this+0x44C), this+0x43C, 0x1000, 0, 0), then StateMgr::exec of
 * the StateMgr at +0x414.
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00516230..005162D8 (two zero stack args,
 * r3 = 0x1000, sm +0x414 standard layout).  Confidence: high. */
#include "route.h"

uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);

void func_00516258(char *self)
{
    func_0014E2A0(self, RF(self, 0x44C, uint32_t), GPTR_OF(RAT(self, 0x43C)), 0x1000, 0, 0);
    route_statemgr_exec(RAT(self, 0x414));
}
