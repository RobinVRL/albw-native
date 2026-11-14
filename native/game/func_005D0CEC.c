/* USA 005D0CEC (EU 005D0CC4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00722AC0;
extern uint32_t data_00722AC4;
extern uint32_t data_00722AC8;
extern uint32_t data_00722ACC;


void func_005D0CEC(void) {
    data_00722AC0 = 0xFFFFFFFFu;
    data_00722AC4 = 0xFFFFFFFFu;
    data_00722AC8 = 0x00000000u;
    data_00722ACC = 0x00000000u;
}
