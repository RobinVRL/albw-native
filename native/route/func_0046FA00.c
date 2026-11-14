/* USA 0046FA00 (EU 0046F9D8): calc of a layout part (vtable slot 006F2CDC) turned with the
 * pad: when 00520E60(*(*data_007142C8 + 0x12C)) holds, 00368CEC(*(+0xE0)) and StateMgr::exec
 * (StateMgr at +0x74); then from the held buttons of pad +0x70 (*data_007124F0 + 0x10 +
 * 400*idx, word +0x11C): both 0x2000|0x4000 -> the angle +0xF0 eases back to 0 by 0x4000000
 * per frame (snapping when it would cross 0); 0x2000 -> -0x2000000; 0x4000 -> +0x2000000; the
 * angle is written to the pane *(+0x98)+0x7C and its dirty bits (+0x81 |= 3) set.
 * Route: HUD/menu layout state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0046F9D8..0046FB78 (`bics; beq`, the 64-bit
 * `subs/sbcs` sign test of the step, `cmp; cmphi; bls/bhi` unsigned crossing tests).
 * Confidence: high. */
#include "route.h"

extern uint32_t data_007142C8[], data_007124F0[];
int func_00520E60(int obj);
void func_00368CEC(int obj);

static void set_pane(char *self, uint32_t a)
{
    char *p = RP(self, 0x98);
    RF(p, 0x7C, uint32_t) = a;
    RF(p, 0x81, uint8_t) = (uint8_t)(RF(p, 0x81, uint8_t) | 2 | 1);
}

void func_0046FA00(char *self)
{
    if (func_00520E60((int)RF(GPTR_TO(char, data_007142C8[0]), 0x12C, uint32_t)) != 0) {
        func_00368CEC((int)RF(self, 0xE0, uint32_t));
        route_statemgr_exec(RAT(self, 0x74));
    }
    uint32_t idx = RF(self, 0x70, uint8_t);
    uint32_t w = RF(GPTR_TO(char, data_007124F0[0]) + 0x10 + idx * 400, 0x11C, uint32_t);
    if ((0x6000u & ~w) == 0) {
        uint32_t a = RF(self, 0xF0, uint32_t), n;
        if (a < 0x80000000u) {
            n = a - 0x4000000u;
            RF(self, 0xF0, uint32_t) = (a > n && n != 0) ? n : 0;
        } else {
            n = a + 0x4000000u;
            RF(self, 0xF0, uint32_t) = (n > a && a != 0) ? n : 0;
        }
        set_pane(self, RF(self, 0xF0, uint32_t));
        return;
    }
    if (w & 0x2000) {
        RF(self, 0xF0, uint32_t) += 0xFE000000u;
        set_pane(self, RF(self, 0xF0, uint32_t));
    } else if (w & 0x4000) {
        RF(self, 0xF0, uint32_t) += 0x2000000u;
        set_pane(self, RF(self, 0xF0, uint32_t));
    }
}
