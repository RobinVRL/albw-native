/* USA 005EFD8C (EU 005EFD64): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714A10;
extern uint32_t data_00714A14;
extern uint32_t data_00714A18;
extern uint32_t data_00714A1C;


void func_005EFD8C(void) {
    data_00714A10 = 0xFFFFFFFFu;
    data_00714A14 = 0xFFFFFFFFu;
    data_00714A18 = 0x00000000u;
    data_00714A1C = 0x00000000u;
}
