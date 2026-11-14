/* USA 00445FC4 (EU 00445F9C): calc of the main-game layout scene part with vtable slot
 * 006F1A74 (map-switch layout): when flag 0x20A of *data_0070B728 (event/pause flags, 00584B94)
 * is set and the s8 state at +0x15C is 0 or 2, starts the "L_MapSwitch_00" animation of the
 * layout *(this+0x1C) (005229AC lookup, 00167E04 play unless already playing) and raises
 * byte +0xE of *(this+0x214) when +0xD and +0xE are clear; then StateMgr::exec (StateMgr at
 * +0x158).
 * Route: HUD/layout (route phase 1/7).
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar5)()`).
 * Verified instruction by instruction against EU 00445F9C..0044609C (`cmp; cmpne #2; bne`,
 * the 0x44 bit-0 test, `ldrbeq/cmpeq/strbeq` chain, state s8 +0x15C, exec table +0x174, owner
 * +0x16C, counter +0x158, anim +0x168).  Confidence: high. */
#include "route.h"

extern uint32_t data_0070B728[];
int func_00584B94(int obj, int flag);
char *func_005229AC(int layout, void *name);
int func_00167E04(int layout, int anim, uint32_t a);

void func_00445FC4(char *self)
{
    if (func_00584B94((int)data_0070B728[0], 0x20A) != 0) {
        int8_t s = RF(self, 0x15C, int8_t);
        if (s == 0 || s == 2) {
            route_safestr name = route_safestr_make("L_MapSwitch_00");
            char *anim = func_005229AC((int)RF(self, 0x1C, uint32_t), &name);
            if ((RF(anim, 0x44, uint8_t) & 1) == 0) {
                func_00167E04((int)RF(self, 0x1C, uint32_t), (int)GPTR_OF(anim), 1);
                char *o = RP(self, 0x214);
                if (RF(o, 0xD, uint8_t) == 0 && RF(o, 0xE, uint8_t) == 0)
                    RF(o, 0xE, uint8_t) = 1;
            }
        }
    }
    route_statemgr_exec(RAT(self, 0x158));
}
