/* USA 005A14A0 (EU 005A1478): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C988;
extern uint32_t data_0070C98C;
extern uint32_t data_0070C990;
extern uint32_t data_0070C994;


void func_005A14A0(void) {
    data_0070C988 = 0xFFFFFFFFu;
    data_0070C98C = 0xFFFFFFFFu;
    data_0070C990 = 0x00000000u;
    data_0070C994 = 0x00000000u;
}
