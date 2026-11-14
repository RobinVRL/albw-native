/* USA 005AB00C (EU 005AAFE4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B8E8;
extern uint32_t data_0070B8EC;
extern uint32_t data_0070B8F0;
extern uint32_t data_0070B8F4;


void func_005AB00C(void) {
    data_0070B8E8 = 0xFFFFFFFFu;
    data_0070B8EC = 0xFFFFFFFFu;
    data_0070B8F0 = 0x00000000u;
    data_0070B8F4 = 0x00000000u;
}
