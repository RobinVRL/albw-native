/* USA 005E4CBC (EU 005E4C94): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706D20;
extern uint32_t data_00706D24;
extern uint32_t data_00706D28;
extern uint32_t data_00706D2C;


void func_005E4CBC(void) {
    data_00706D20 = 0xFFFFFFFFu;
    data_00706D24 = 0xFFFFFFFFu;
    data_00706D28 = 0x00000000u;
    data_00706D2C = 0x00000000u;
}
