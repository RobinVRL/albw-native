/* USA 005B9518 (EU 005B94F0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714E98;
extern uint32_t data_00714E9C;
extern uint32_t data_00714EA0;
extern uint32_t data_00714EA4;


void func_005B9518(void) {
    data_00714E98 = 0xFFFFFFFFu;
    data_00714E9C = 0xFFFFFFFFu;
    data_00714EA0 = 0x00000000u;
    data_00714EA4 = 0x00000000u;
}
