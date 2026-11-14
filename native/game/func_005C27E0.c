/* USA 005C27E0 (EU 005C27B8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715028;
extern uint32_t data_0071502C;
extern uint32_t data_00715030;
extern uint32_t data_00715034;


void func_005C27E0(void) {
    data_00715028 = 0xFFFFFFFFu;
    data_0071502C = 0xFFFFFFFFu;
    data_00715030 = 0x00000000u;
    data_00715034 = 0x00000000u;
}
