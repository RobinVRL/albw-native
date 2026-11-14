/* USA 003BCD80 (EU 003BCD5C): timed sub-object update (vtable slot 006E9FCC, also called by
 * 003A343C): while active (+0x3A) decrements the s16 timer +0x38 (clears +0x3A at <= 0) and runs
 * StateMgr::exec of the StateMgr at +0x10.
 * Route: actor/object state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 003BCD5C..003BCDF8 (ldrh/sub/sxth/strh,
 * `movle/strble`, sm +0x10: state +0x14, table +0x2C, owner +0x24, anim +0x20).
 * Confidence: high. */
#include "route.h"

void func_003BCD80(char *self)
{
    if (RF(self, 0x3A, uint8_t) == 0)
        return;
    int16_t t = (int16_t)(RF(self, 0x38, uint16_t) - 1);
    RF(self, 0x38, int16_t) = t;
    if (t <= 0)
        RF(self, 0x3A, uint8_t) = 0;
    route_statemgr_exec(RAT(self, 0x10));
}
