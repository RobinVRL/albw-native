/* USA 0046D76C (EU 0046D744): calc of a layout/HUD part (vtable slot 006F287C):
 * 00421C30(*(this+0xA8)) (layout animation update), then StateMgr::exec on the StateMgr at
 * +0x74.
 * Route: HUD (route phase 7).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar3)()`).
 * Verified against EU 0046D744..0046D7C0 (state s8 +0x78, exec table +0x90, owner +0x88,
 * counter +0x74, anim +0x84).  Confidence: high. */
#include "route.h"

int func_00421C30(int obj);

void func_0046D76C(char *self)
{
    func_00421C30((int)RF(self, 0xA8, uint32_t));
    route_statemgr_exec(RAT(self, 0x74));
}
