/* USA 005EB9C8 (EU 005EB9A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714EF0;
extern uint32_t data_00714EF4;
extern uint32_t data_00714EF8;
extern uint32_t data_00714EFC;


void func_005EB9C8(void) {
    data_00714EF0 = 0xFFFFFFFFu;
    data_00714EF4 = 0xFFFFFFFFu;
    data_00714EF8 = 0x00000000u;
    data_00714EFC = 0x00000000u;
}
