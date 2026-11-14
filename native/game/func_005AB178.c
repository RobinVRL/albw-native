/* USA 005AB178 (EU 005AB150): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BC50;
extern uint32_t data_0070BC54;
extern uint32_t data_0070BC58;
extern uint32_t data_0070BC5C;


void func_005AB178(void) {
    data_0070BC50 = 0xFFFFFFFFu;
    data_0070BC54 = 0xFFFFFFFFu;
    data_0070BC58 = 0x00000000u;
    data_0070BC5C = 0x00000000u;
}
