/* USA 005FBCC8 (EU 005FBCA0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BD38;
extern uint32_t data_0070BD3C;
extern uint32_t data_0070BD40;
extern uint32_t data_0070BD44;


void func_005FBCC8(void) {
    data_0070BD38 = 0xFFFFFFFFu;
    data_0070BD3C = 0xFFFFFFFFu;
    data_0070BD40 = 0x00000000u;
    data_0070BD44 = 0x00000000u;
}
