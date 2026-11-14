/* USA 00398D7C (EU 00398D58): per-frame update of an actor-attached helper (vtable slot
 * 006E74DC): once (+0x3D), when the owner actor's (+4) +0x3E8 equals +0xA20, creates an object
 * with 00511220(*(owner+0x2CC), owner+0x3D0 (position), *(owner+0xA20), s8 +0xC >= 2) into
 * +0x38; then StateMgr::exec (StateMgr at +0x10).
 * Route: actor update (route phase 5/6).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar3)()`).
 * Verified instruction by instruction against EU 00398D58..00398E14 (r2 = the compared
 * +0xA20 word, `movge/movlt` flag, state s8 +0x14, exec table +0x2C, owner +0x24, counter
 * +0x10, anim +0x20).  Confidence: high. */
#include "route.h"

int func_00511220(uint32_t a, void *pos, uint32_t b, int flag);

void func_00398D7C(char *self)
{
    if (RF(self, 0x3D, uint8_t) == 0) {
        char *o = RP(self, 4);
        uint32_t w = RF(o, 0xA20, uint32_t);
        if (RF(o, 0x3E8, uint32_t) == w) {
            int flag = RF(self, 0xC, int8_t) >= 2 ? 1 : 0;
            RF(self, 0x38, int32_t) = func_00511220(RF(o, 0x2CC, uint32_t), RAT(o, 0x3D0), w, flag);
            RF(self, 0x3D, uint8_t) = 1;
        }
    }
    route_statemgr_exec(RAT(self, 0x10));
}
