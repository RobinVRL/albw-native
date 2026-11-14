/* USA 005C1BCC (EU 005C1BA4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712568;
extern uint32_t data_0071256C;
extern uint32_t data_00712570;
extern uint32_t data_00712574;


void func_005C1BCC(void) {
    data_00712568 = 0xFFFFFFFFu;
    data_0071256C = 0xFFFFFFFFu;
    data_00712570 = 0x00000000u;
    data_00712574 = 0x00000000u;
}
