/* USA 00376568 (EU 00376544): calc of a layout part (vtable slot 006E5890): counts the frames
 * (u16 +0x6A) the pane *(this+0x14) is visible (005438EC) with flag 0x80 of its u16 +0x16 set
 * (else resets to 0), then StateMgr::exec of the StateMgr at +0x38.
 * Route: HUD/layout state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00376544..003765E8 (`tst #0x80; ldrhne;
 * addne`, sm +0x38: state +0x3C, table +0x54, owner +0x4C, anim +0x48).  Confidence: high. */
#include "route.h"

int func_005438EC(int pane);

void func_00376568(char *self)
{
    uint16_t n = 0;
    if (func_005438EC((int)RF(self, 0x14, uint32_t)) != 0 &&
        (RF(RP(self, 0x14), 0x16, uint16_t) & 0x80) != 0)
        n = (uint16_t)(RF(self, 0x6A, uint16_t) + 1);
    RF(self, 0x6A, uint16_t) = n;
    route_statemgr_exec(RAT(self, 0x38));
}
