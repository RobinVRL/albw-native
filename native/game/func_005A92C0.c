/* USA 005A92C0 (EU 005A9298): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709A18;
extern uint32_t data_00709A1C;
extern uint32_t data_00709A20;
extern uint32_t data_00709A24;


void func_005A92C0(void) {
    data_00709A18 = 0xFFFFFFFFu;
    data_00709A1C = 0xFFFFFFFFu;
    data_00709A20 = 0x00000000u;
    data_00709A24 = 0x00000000u;
}
