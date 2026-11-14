/* USA 001C0C34 (EU 001C0C34): calc of the actor class with vtable slot 006CF868: actor common
 * update 0014E2A0(this, *(+0x434), 0, 0x1200, 0, 0), StateMgr::exec (StateMgr at +0x40C), then
 * once (+0x478) resolves the linked actor id s16 +0x5E through the ActorMgr lookup 0052FBDC
 * (*data_00706E20 + 0x3DBBC) and keeps its +0x2CC in +0x474 (retries next frame when not found).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 001C0C34..001C0D18 (`ble` on the s16 id,
 * `ldrne/strne/strbeq`).  Confidence: high. */
#include "route.h"

extern uint32_t data_00706E20[];
uint32_t func_0014E2A0(char *self, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, int a6);
int func_0052FBDC(int list, int id, int a);

void func_001C0C34(char *self)
{
    func_0014E2A0(self, RF(self, 0x434, uint32_t), 0, 0x1200, 0, 0);
    route_statemgr_exec(RAT(self, 0x40C));
    if (RF(self, 0x478, uint8_t) == 0) {
        int32_t id = RF(self, 0x5E, int16_t);
        RF(self, 0x478, uint8_t) = 1;
        if (id > 0) {
            int a = func_0052FBDC((int)(data_00706E20[0] + 0x3DBBC), id, 0);
            if (a != 0)
                RF(self, 0x474, uint32_t) = RF(GPTR_TO(char, (uint32_t)a), 0x2CC, uint32_t);
            else
                RF(self, 0x478, uint8_t) = 0;
        }
    }
}
