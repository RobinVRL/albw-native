/* USA 005C25A4 (EU 005C257C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714A20;
extern uint32_t data_00714A24;
extern uint32_t data_00714A28;
extern uint32_t data_00714A2C;


void func_005C25A4(void) {
    data_00714A20 = 0xFFFFFFFFu;
    data_00714A24 = 0xFFFFFFFFu;
    data_00714A28 = 0x00000000u;
    data_00714A2C = 0x00000000u;
}
