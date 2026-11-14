/* USA 001E7AA0 (EU 001E7AA0): calc of the object class with vtable slot 006D2388:
 * StateMgr::exec of the StateMgr at this+0x788.
 * Route: actor/object state machine (first-area actors run one per frame).
 * Bug: the inlined StateMgr::exec called the state handler with no `this` (Ghidra
 * `(*(code *)*piVar)()`; on ARM r0 = owner + (adj >> 1)).
 * Verified instruction by instruction against EU 001E7AA0..001E7B1C (sm = this+0x788: state
 * s8 +4, exec table +0x1C, owner +0x14, counter +0, anim +0x10 -> tail call 00352210).
 * Confidence: high. */
#include "route.h"

void func_001E7AA0(char *self)
{
    route_statemgr_exec(RAT(self, 0x788));
}
