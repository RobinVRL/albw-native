/* USA 005FB810 (EU 005FB7E8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712F48;
extern uint32_t data_00712F4C;
extern uint32_t data_00712F50;
extern uint32_t data_00712F54;


void func_005FB810(void) {
    data_00712F48 = 0xFFFFFFFFu;
    data_00712F4C = 0xFFFFFFFFu;
    data_00712F50 = 0x00000000u;
    data_00712F54 = 0x00000000u;
}
