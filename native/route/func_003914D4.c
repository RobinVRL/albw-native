/* USA 003914D4 (EU 003914B0): calc of the object class with vtable slot 006E700C: sets the
 * "started" byte +0x41C on the first call, then StateMgr::exec of the StateMgr at +0x420.
 * Route: actor/object state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 003914B0..00391530 (moveq/strbeq on +0x41C,
 * sm +0x420 standard layout, tail call 00352210).  Confidence: high. */
#include "route.h"

void func_003914D4(char *self)
{
    if (RF(self, 0x41C, uint8_t) == 0)
        RF(self, 0x41C, uint8_t) = 1;
    route_statemgr_exec(RAT(self, 0x420));
}
