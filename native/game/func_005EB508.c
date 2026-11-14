/* USA 005EB508 (EU 005EB4E0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714AB8;
extern uint32_t data_00714ABC;
extern uint32_t data_00714AC0;
extern uint32_t data_00714AC4;


void func_005EB508(void) {
    data_00714AB8 = 0xFFFFFFFFu;
    data_00714ABC = 0xFFFFFFFFu;
    data_00714AC0 = 0x00000000u;
    data_00714AC4 = 0x00000000u;
}
