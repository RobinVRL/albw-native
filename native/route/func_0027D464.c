/* USA 0027D464 (EU 0027D48C): calc of the actor class with vtable slot 006D7EBC (rotating
 * fire bar, "SE_GuruGuruBar_BURNING"): StateMgr::exec (StateMgr at +0x40C), 0027D288(this);
 * while +0x5BC: counter +0x5B0 up to +0x5B4 (unsigned), during the last 40 frames the angle
 * +0x5A8 wobbles by +-0x4000000 (bit 2 of the remaining count), at the end clears +0x5BC,
 * 0014F4EC(*(+0x430)) and sets *(+0x570)+0x61; 0027CDD4(this, 0); counters +0x434/+0x438 and
 * +0x59C/+0x5A0; sound 001507D8(this, "SE_GuruGuruBar_BURNING", 0).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`). (r1 of
 * 0027CDD4 is not read there: passed as 0.)
 * Verified instruction by instruction against EU 0027D48C..0027D5E0 (`addlo/strlo`, signed
 * `bge #0x28`, `addne/addeq`, `blo`).  Confidence: high. */
#include "route.h"

void func_0027D288(char *self);
void *func_0014F4EC(int obj);
void func_0027CDD4(char *self, uint32_t a);
int func_001507D8(char *self, void *name, int a);

void func_0027D464(char *self)
{
    route_statemgr_exec(RAT(self, 0x40C));
    func_0027D288(self);
    if (RF(self, 0x5BC, uint8_t) != 0) {
        uint32_t a = RF(self, 0x5B0, uint32_t), b = RF(self, 0x5B4, uint32_t);
        if (a < b) {
            a += 1;
            RF(self, 0x5B0, uint32_t) = a;
        }
        int32_t d = (int32_t)(b - a);
        if (d < 0x28)
            RF(self, 0x5A8, uint32_t) = RF(self, 0x5A8, uint32_t) + ((d & 4) ? 0x4000000u : 0xFC000000u);
        if (!(RF(self, 0x5B0, uint32_t) < RF(self, 0x5B4, uint32_t))) {
            RF(self, 0x5BC, uint8_t) = 0;
            func_0014F4EC((int)RF(self, 0x430, uint32_t));
            RF(RP(self, 0x570), 0x61, uint8_t) = 1;
        }
    }
    func_0027CDD4(self, 0);
    if (RF(self, 0x434, uint32_t) < RF(self, 0x438, uint32_t))
        RF(self, 0x434, uint32_t) += 1;
    if (RF(self, 0x59C, uint32_t) < RF(self, 0x5A0, uint32_t))
        RF(self, 0x59C, uint32_t) += 1;
    route_safestr name = route_safestr_make("SE_GuruGuruBar_BURNING");
    func_001507D8(self, &name, 0);
}
