/* USA 004777AC (EU 00477784): calc of a layout part (vtable data 006A5420): executes a pending
 * request byte +0x114 (1: 0051BF44(*data_007142C8, s8 +0x115, s8 +0x116), 2: 0051BDF0(g); then
 * cleared) unless 0058DEB8(g) is busy; in states 2..5 of the machine at +0xF0, raises +0x30D
 * when the linked part *(+0x1FC) has bytes +0xD == +0xE == 3 and bit 2 of the pane flags
 * (*(+0x14))+0x16 is set; then StateMgr::exec (StateMgr at +0xF0).
 * Route: HUD/menu layout state machine.
 * Bug: the state handler was called with no `this` (Ghidra `(*(code *)*piVar)()`).
 * Verified instruction by instruction against EU 00477784..00477898 (`sub #2; cmp #3; bhi`,
 * `ldrbeq/cmpeq`, `ldr r3, [r5, #0x104]!` owner).  Confidence: high. */
#include "route.h"

extern uint32_t data_007142C8[];
int func_0058DEB8(int g);
void func_0051BF44(int g, int a, int b);
void func_0051BDF0(int g);

void func_004777AC(char *self)
{
    if (RF(self, 0x114, uint8_t) != 0 && func_0058DEB8((int)data_007142C8[0]) == 0) {
        uint8_t req = RF(self, 0x114, uint8_t);
        if (req == 1) {
            func_0051BF44((int)data_007142C8[0], RF(self, 0x115, int8_t), RF(self, 0x116, int8_t));
            RF(self, 0x114, uint8_t) = 0;
        } else if (req == 2) {
            func_0051BDF0((int)data_007142C8[0]);
            RF(self, 0x114, uint8_t) = 0;
        }
    }
    if ((uint32_t)(RF(self, 0xF4, int8_t) - 2) <= 3) {
        char *p = RP(self, 0x1FC);
        if (RF(p, 0xD, uint8_t) == 3 && RF(p, 0xE, uint8_t) == 3 &&
            (RF(RP(self, 0x14), 0x16, uint16_t) & 4) != 0)
            RF(self, 0x30D, uint8_t) = 1;
    }
    route_statemgr_exec(RAT(self, 0xF0));
}
