/* USA 005F2F04 (EU 005F2EDC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00725720;
extern uint32_t data_00725724;
extern uint32_t data_00725728;
extern uint32_t data_0072572C;


void func_005F2F04(void) {
    data_00725720 = 0xFFFFFFFFu;
    data_00725724 = 0xFFFFFFFFu;
    data_00725728 = 0x00000000u;
    data_0072572C = 0x00000000u;
}
