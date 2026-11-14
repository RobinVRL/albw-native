/* USA 005B94C0 (EU 005B9498): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007150A8;
extern uint32_t data_007150AC;
extern uint32_t data_007150B0;
extern uint32_t data_007150B4;


void func_005B94C0(void) {
    data_007150A8 = 0xFFFFFFFFu;
    data_007150AC = 0xFFFFFFFFu;
    data_007150B0 = 0x00000000u;
    data_007150B4 = 0x00000000u;
}
