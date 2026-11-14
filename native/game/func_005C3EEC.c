/* USA 005C3EEC (EU 005C3EC4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B950;
extern uint32_t data_0070B954;
extern uint32_t data_0070B958;
extern uint32_t data_0070B95C;


void func_005C3EEC(void) {
    data_0070B950 = 0xFFFFFFFFu;
    data_0070B954 = 0xFFFFFFFFu;
    data_0070B958 = 0x00000000u;
    data_0070B95C = 0x00000000u;
}
