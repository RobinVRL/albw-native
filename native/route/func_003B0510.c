/* USA 003B0510 (EU 003B04EC): update of a sub-object with an enable byte at +0x48 and a
 * StateMgr at +0x1C (called by 003A343C and through the vtable slot 006E9170).
 * Route: actor/player-side update (route phase 4/6).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar3)()`).
 * Verified against EU 003B04EC..003B056C (enable test, state s8 +0x20, exec table +0x38,
 * owner +0x30, counter +0x1C, anim +0x2C).  Confidence: high. */
#include "route.h"

void func_003B0510(char *self)
{
    if (RF(self, 0x48, uint8_t) == 0)
        return;
    route_statemgr_exec(RAT(self, 0x1C));
}
