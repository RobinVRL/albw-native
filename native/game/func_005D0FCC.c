/* USA 005D0FCC (EU 005D0FA4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706E00;
extern uint32_t data_00706E04;
extern uint32_t data_00706E08;
extern uint32_t data_00706E0C;


void func_005D0FCC(void) {
    data_00706E00 = 0xFFFFFFFFu;
    data_00706E04 = 0xFFFFFFFFu;
    data_00706E08 = 0x00000000u;
    data_00706E0C = 0x00000000u;
}
