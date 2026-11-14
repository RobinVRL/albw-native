/* USA 005C1B48 (EU 005C1B20): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007123E0;
extern uint32_t data_007123E4;
extern uint32_t data_007123E8;
extern uint32_t data_007123EC;


void func_005C1B48(void) {
    data_007123E0 = 0xFFFFFFFFu;
    data_007123E4 = 0xFFFFFFFFu;
    data_007123E8 = 0x00000000u;
    data_007123EC = 0x00000000u;
}
