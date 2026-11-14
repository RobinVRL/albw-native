/* USA 00148AF0 (EU 00148AF0): calc of the object class with vtable slot 006C7A5C (a watcher of
 * up to 16 actor ids +0x6AC with counters +0x6EC, count s16 +0x72C): for each slot, the counter
 * is incremented when it is already > 0 or when the actor id is no longer found by the ActorMgr
 * lookup 0052FBA0(*data_00706E20 + 0x3DBBC, id); index >= 16 uses slot 0 (armcc bounds
 * clamp). Then StateMgr::exec (StateMgr at +0x43C).
 * Route: actor/object state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00148AF0..00148C10 (signed `ble/bgt` loop on
 * the reloaded s16 count, `cmp #0x10; addlo/movhs` clamps).  Confidence: high. */
#include "route.h"

extern uint32_t data_00706E20[];
int func_0052FBA0(int list, uint32_t id);

void func_00148AF0(char *self)
{
    for (int32_t i = 0; i < RF(self, 0x72C, int16_t); i++) {
        uint32_t k = (uint32_t)i < 16 ? (uint32_t)i : 0;
        int32_t *cnt = &RF(self, 0x6EC + 4 * k, int32_t);
        if (*cnt <= 0) {
            uint32_t id = RF(self, 0x6AC + 4 * k, uint32_t);
            if (func_0052FBA0((int)(data_00706E20[0] + 0x3DBBC), id) != 0)
                continue;
        }
        *cnt += 1;
    }
    route_statemgr_exec(RAT(self, 0x43C));
}
