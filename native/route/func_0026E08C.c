/* USA 0026E08C (EU 0026E0B4): calc of an object whose vtable slot is 006D77A4:
 * 0012C85C(this, a) (base calc, r1 passed through), then StateMgr::exec on the StateMgr at
 * *(this+0x74)+0x4C.
 * Route: render/camera update path (route phase 1).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar2)()`).
 * Verified against EU 0026E0B4..0026E12C (state s8 +0x50, exec table +0x68, owner +0x60,
 * counter +0x4C, anim +0x5C, tail call 00352210 with r0 = anim).  Confidence: high. */
#include "route.h"

void func_0012C85C(int *self, uint32_t a);

void func_0026E08C(char *self, uint32_t a)
{
    func_0012C85C((int *)self, a);
    route_statemgr_exec(RP(self, 0x74) + 0x4C);
}
