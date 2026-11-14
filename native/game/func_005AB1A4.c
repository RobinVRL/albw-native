/* USA 005AB1A4 (EU 005AB17C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BD08;
extern uint32_t data_0070BD0C;
extern uint32_t data_0070BD10;
extern uint32_t data_0070BD14;


void func_005AB1A4(void) {
    data_0070BD08 = 0xFFFFFFFFu;
    data_0070BD0C = 0xFFFFFFFFu;
    data_0070BD10 = 0x00000000u;
    data_0070BD14 = 0x00000000u;
}
