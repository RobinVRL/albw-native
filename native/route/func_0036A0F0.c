/* USA 0036A0F0 (EU 0036A0CC): calc of a layout part (vtable slot 006E4B38): StateMgr::exec
 * (StateMgr at +0x3C); when the truncated float +0x74 changed during it, stores the new integer
 * into *data_007142C8 + 0x338; then StateMgr::exec of the child object **(this+0x64) (its
 * StateMgr at +0xC) when present.
 * Route: HUD/layout state machine.
 * Bug: both state handlers were called with no `this` (Ghidra `(*(code *)*piVar)()`); the
 * float -> int conversions are ARM vcvt.s32.f32 (saturating, NaN -> 0: route_vcvt_s32).
 * Verified instruction by instruction against EU 0036A0CC..0036A1E0.  Confidence: high. */
#include "route.h"

extern uint32_t data_007142C8[];

void func_0036A0F0(char *self)
{
    int32_t before = route_vcvt_s32(RF(self, 0x74, float));
    route_statemgr_exec(RAT(self, 0x3C));
    int32_t after = route_vcvt_s32(RF(self, 0x74, float));
    if (before != after)
        RF(GPTR_TO(char, data_007142C8[0]), 0x338, int32_t) = after;
    char *c = RP(RP(self, 0x64), 0);
    if (c != 0)
        route_statemgr_exec(RAT(c, 0xC));
}
