/* USA 0035D760 (EU 0035D73C): calc shared by actor classes (vtable slots 006D8F54, 006E41E0,
 * 006E42FC): when 00588BE4(this) equals the word data_006937EC, the byte +0x85D
 * is clear, the float 00521298(this) has bits >= 9.0f's (signed compare of the bit
 * patterns, as the ARM `vmov r0, s0; cmp`) and a 1/300 random draw (high word of
 * Random::getU32(*data_007124F0 + 0x660) * 300 == 0) hits, changes the state machine at +0x960
 * to 5 (00666AC0); StateMgr::exec (StateMgr at +0x960); tail 004BC8D8(this).
 * Route: actor state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 0035D73C..0035D81C (umull high word).
 * Confidence: high. */
#include "route.h"

extern uint32_t data_006937EC[], data_007124F0[];
uint32_t func_00588BE4(char *self);
float func_00521298(char *self);
uint32_t func_00111A64(void *random);
void func_00666AC0(char *sm, uint32_t newState);
void func_004BC8D8(char *self);

void func_0035D760(char *self)
{
    if (func_00588BE4(self) == data_006937EC[0] && RF(self, 0x85D, uint8_t) == 0) {
        float f = func_00521298(self);
        int32_t bits;
        memcpy(&bits, &f, 4);
        if (!(0x41100000 > bits)) {
            uint32_t r = func_00111A64(GPTR_TO(char, data_007124F0[0]) + 0x660);
            if ((uint32_t)(((uint64_t)r * 300u) >> 32) == 0)
                func_00666AC0(RAT(self, 0x960), 5);
        }
    }
    route_statemgr_exec(RAT(self, 0x960));
    func_004BC8D8(self);
}
