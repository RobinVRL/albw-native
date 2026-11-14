/* USA 005C1D50 (EU 005C1D28): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712920;
extern uint32_t data_00712924;
extern uint32_t data_00712928;
extern uint32_t data_0071292C;


void func_005C1D50(void) {
    data_00712920 = 0xFFFFFFFFu;
    data_00712924 = 0xFFFFFFFFu;
    data_00712928 = 0x00000000u;
    data_0071292C = 0x00000000u;
}
