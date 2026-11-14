/* USA 005B2E6C (EU 005B2E44): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B9C0;
extern uint32_t data_0070B9C4;
extern uint32_t data_0070B9C8;
extern uint32_t data_0070B9CC;


void func_005B2E6C(void) {
    data_0070B9C0 = 0xFFFFFFFFu;
    data_0070B9C4 = 0xFFFFFFFFu;
    data_0070B9C8 = 0x00000000u;
    data_0070B9CC = 0x00000000u;
}
