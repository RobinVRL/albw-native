/* USA 005B95C8 (EU 005B95A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715068;
extern uint32_t data_0071506C;
extern uint32_t data_00715070;
extern uint32_t data_00715074;


void func_005B95C8(void) {
    data_00715068 = 0xFFFFFFFFu;
    data_0071506C = 0xFFFFFFFFu;
    data_00715070 = 0x00000000u;
    data_00715074 = 0x00000000u;
}
