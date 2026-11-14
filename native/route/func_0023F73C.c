/* USA 0023F73C (EU 0023F73C): calc of the actor class with vtable slot 006D4814: one-time setup when +0x518
 * is clear (00332970(this, *data_00693328), 00332AB8, 00332BFC, set +0x518), StateMgr::exec of the
 * StateMgr at +0x4C0, 001E410C(this), tail 004CEAF0(*(this+0x47C)) (model world matrix).
 * (0023F73C and 0035AC8C are the same code with a different constant word.)
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0023F73C (sm +0x4C0: state +0x4C4, table +0x4DC,
 * owner +0x4D4, anim +0x4D0).  Confidence: high. */
#include "route.h"

extern uint32_t data_00693328[];
void func_00332970(char *self, uint32_t a);
void func_00332AB8(char *self);
void func_00332BFC(char *self);
void func_001E410C(char *self);
void func_004CEAF0(int model);

void func_0023F73C(char *self)
{
    if (RF(self, 0x518, uint8_t) == 0) {
        func_00332970(self, data_00693328[0]);
        func_00332AB8(self);
        func_00332BFC(self);
        RF(self, 0x518, uint8_t) = 1;
    }
    route_statemgr_exec(RAT(self, 0x4C0));
    func_001E410C(self);
    func_004CEAF0((int)RF(self, 0x47C, uint32_t));
}
