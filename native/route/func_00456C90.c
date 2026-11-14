/* USA 00456C90 (EU 00456C68): calc of a layout part (vtable slot 006F2084) with two state
 * machines: StateMgr::exec of the StateMgrs at +0x17C and +0x1A0.
 * Route: HUD/layout state machine.
 * Bug: both state handlers were called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00456C68..00456D44 (sm +0x17C: state
 * +0x180, table +0x198, owner +0x190; sm +0x1A0: state +0x1A4, table +0x1BC, owner +0x1B4;
 * the first dispatch loads the PMF ptr before the virtual test, same result).
 * Confidence: high. */
#include "route.h"

void func_00456C90(char *self)
{
    route_statemgr_exec(RAT(self, 0x17C));
    route_statemgr_exec(RAT(self, 0x1A0));
}
