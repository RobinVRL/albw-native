/* USA 00191208 (EU 00191208): calc of the actor class with vtable slot 006CD8C0: when the
 * byte +0x588 is set it only calls 00547514(this+4) for u16 +0x2C == 1 and sets +0x2D7;
 * otherwise StateMgr::exec of the StateMgr at +0x4F8, then tail-calls 00151214(this).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00191208..001912B0 (addeq/bleq, sm +0x4F8:
 * state +0x4FC, table +0x514, owner +0x50C, anim +0x508, tail `b 00151214` with r0 = this).
 * Confidence: high. */
#include "route.h"

int func_00547514(void *p);
void func_00151214(char *self);

void func_00191208(char *self)
{
    if (RF(self, 0x588, uint8_t) != 0) {
        if (RF(self, 0x2C, uint16_t) == 1)
            func_00547514(RAT(self, 4));
        RF(self, 0x2D7, uint8_t) = 1;
        return;
    }
    route_statemgr_exec(RAT(self, 0x4F8));
    func_00151214(self);
}
