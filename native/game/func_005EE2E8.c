/* USA 005EE2E8 (EU 005EE2C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A198;
extern uint32_t data_0070A19C;
extern uint32_t data_0070A1A0;
extern uint32_t data_0070A1A4;


void func_005EE2E8(void) {
    data_0070A198 = 0xFFFFFFFFu;
    data_0070A19C = 0xFFFFFFFFu;
    data_0070A1A0 = 0x00000000u;
    data_0070A1A4 = 0x00000000u;
}
