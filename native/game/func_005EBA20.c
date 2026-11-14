/* USA 005EBA20 (EU 005EB9F8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715038;
extern uint32_t data_0071503C;
extern uint32_t data_00715040;
extern uint32_t data_00715044;


void func_005EBA20(void) {
    data_00715038 = 0xFFFFFFFFu;
    data_0071503C = 0xFFFFFFFFu;
    data_00715040 = 0x00000000u;
    data_00715044 = 0x00000000u;
}
