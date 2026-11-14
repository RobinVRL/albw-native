/* USA 005BD814 (EU 005BD7EC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B7F0;
extern uint32_t data_0070B7F4;
extern uint32_t data_0070B7F8;
extern uint32_t data_0070B7FC;


void func_005BD814(void) {
    data_0070B7F0 = 0xFFFFFFFFu;
    data_0070B7F4 = 0xFFFFFFFFu;
    data_0070B7F8 = 0x00000000u;
    data_0070B7FC = 0x00000000u;
}
