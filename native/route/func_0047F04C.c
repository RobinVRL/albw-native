/* USA 0047F04C (EU 0047F024): calc of a HUD layout part (vtable slot 006F3760) with two
 * linked panes (+0x110, +0x114): bit 0 of each pane's u16 flags (+0x16 of *(pane+0x14)) is
 * set iff 00558FDC(other pane) != 0; then StateMgr::exec (StateMgr at +0x74).
 * Route: HUD (route phase 7).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar4)()`).
 * Verified instruction by instruction against EU 0047F024..0047F0F0 (`eor #1; teq #1;
 * orrne/biceq` = set iff result != 0, state s8 +0x78, exec table +0x90, owner +0x88, counter
 * +0x74, anim +0x84).  Confidence: high. */
#include "route.h"

int func_00558FDC(int pane);

void func_0047F04C(char *self)
{
    char *p = RP(RP(self, 0x110), 0x14);
    int r = func_00558FDC((int)RF(self, 0x114, uint32_t));
    uint16_t f = RF(p, 0x16, uint16_t);
    RF(p, 0x16, uint16_t) = r != 0 ? (uint16_t)(f | 1) : (uint16_t)(f & ~1);
    p = RP(RP(self, 0x114), 0x14);
    r = func_00558FDC((int)RF(self, 0x110, uint32_t));
    f = RF(p, 0x16, uint16_t);
    RF(p, 0x16, uint16_t) = r != 0 ? (uint16_t)(f | 1) : (uint16_t)(f & ~1);
    route_statemgr_exec(RAT(self, 0x74));
}
