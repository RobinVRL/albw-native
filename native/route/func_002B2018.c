/* USA 002B2018 (EU 002B1FF4): StateMgr "exec once" helper called by 004F70A8 (TaskRender-side
 * object update): if bit 0 of +0x3A is set it runs StateMgr::exec on the StateMgr at +0, then
 * sets bit 0 of +0x3A and returns (s8 state != 0).
 * Route: render/effect update path (route phase 1).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar3)()`).
 * Verified instruction by instruction against EU 002B1FF4..002B2088 (state s8 +4, exec table
 * +0x1C, owner +0x14, counter +0, anim +0x10, `ldrb; cmp; movne r0, #1` result).
 * Confidence: high. */
#include "route.h"

int func_002B2018(char *self)
{
    if (RF(self, 0x3A, uint8_t) & 1)
        route_statemgr_exec(self);
    RF(self, 0x3A, uint8_t) |= 1;
    return RF(self, 4, uint8_t) != 0;
}
