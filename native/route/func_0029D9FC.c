/* USA 0029D9FC (EU 0029D9D8): calc of the task whose vtable slot is 006DAAF0 (title-side task
 * next to TaskFileSelect's vtable 006DAA14): 002DF5C4(*data_00712588) then StateMgr::exec of
 * the StateMgr at this+0xBC.
 * Route: title / file-select phase.
 * Bug: the inlined StateMgr::exec called the state handler with no `this` (Ghidra
 * `(*(code *)*piVar3)()`).
 * Verified against EU 0029D9D8..0029DA58 (state s8 +0xC0, exec table +0xD8, owner +0xD0,
 * counter +0xBC, anim +0xCC -> tail call 00352210).  Confidence: high. */
#include "route.h"

extern uint32_t data_00712588[];
int func_002DF5C4(int obj);

void func_0029D9FC(char *self)
{
    func_002DF5C4((int)data_00712588[0]);
    route_statemgr_exec(RAT(self, 0xBC));
}
