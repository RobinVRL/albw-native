/* USA 005C2E9C (EU 005C2E74): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A1B0;
extern uint32_t data_0070A1B4;
extern uint32_t data_0070A1B8;
extern uint32_t data_0070A1BC;


void func_005C2E9C(void) {
    data_0070A1B0 = 0xFFFFFFFFu;
    data_0070A1B4 = 0xFFFFFFFFu;
    data_0070A1B8 = 0x00000000u;
    data_0070A1BC = 0x00000000u;
}
