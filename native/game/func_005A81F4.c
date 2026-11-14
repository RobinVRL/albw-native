/* USA 005A81F4 (EU 005A81CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714AE8;
extern uint32_t data_00714AEC;
extern uint32_t data_00714AF0;
extern uint32_t data_00714AF4;


void func_005A81F4(void) {
    data_00714AE8 = 0xFFFFFFFFu;
    data_00714AEC = 0xFFFFFFFFu;
    data_00714AF0 = 0x00000000u;
    data_00714AF4 = 0x00000000u;
}
