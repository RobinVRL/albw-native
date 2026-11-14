/* USA 003A3BFC (EU 003A3BD8): per-frame update of an actor-attached helper (vtable slot
 * 006E8384, sibling of 00398D7C): once (+0x3D), when the owner actor's (+4) +0x3E8 equals
 * +0xA20, creates/refreshes an object 00148724(*(owner+0x2CC), owner+0x3D0, *(owner+0xA20),
 * *(this+0x38), s8 +0xC >= 2) into +0x38; then StateMgr::exec (StateMgr at +0x10).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 003A3BD8..003A3C9C (stack arg = flag,
 * r2 = the compared +0xA20 word, r3 = old +0x38; sm +0x10: state +0x14, table +0x2C, owner
 * +0x24, anim +0x20).  Confidence: high. */
#include "route.h"

int func_00148724(uint32_t a, void *pos, uint32_t b, uint32_t c, int flag);

void func_003A3BFC(char *self)
{
    if (RF(self, 0x3D, uint8_t) == 0) {
        char *o = RP(self, 4);
        uint32_t w = RF(o, 0xA20, uint32_t);
        if (RF(o, 0x3E8, uint32_t) == w) {
            int flag = RF(self, 0xC, int8_t) >= 2 ? 1 : 0;
            RF(self, 0x38, int32_t) =
                func_00148724(RF(o, 0x2CC, uint32_t), RAT(o, 0x3D0), w, RF(self, 0x38, uint32_t), flag);
            RF(self, 0x3D, uint8_t) = 1;
        }
    }
    route_statemgr_exec(RAT(self, 0x10));
}
