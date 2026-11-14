/* USA 005E4A24 (EU 005E49FC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715B18;
extern uint32_t data_00715B1C;
extern uint32_t data_00715B20;
extern uint32_t data_00715B24;


void func_005E4A24(void) {
    data_00715B18 = 0xFFFFFFFFu;
    data_00715B1C = 0xFFFFFFFFu;
    data_00715B20 = 0x00000000u;
    data_00715B24 = 0x00000000u;
}
