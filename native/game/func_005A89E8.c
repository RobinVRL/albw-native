/* USA 005A89E8 (EU 005A89C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007153A0;
extern uint32_t data_007153A4;
extern uint32_t data_007153A8;
extern uint32_t data_007153AC;


void func_005A89E8(void) {
    data_007153A0 = 0xFFFFFFFFu;
    data_007153A4 = 0xFFFFFFFFu;
    data_007153A8 = 0x00000000u;
    data_007153AC = 0x00000000u;
}
