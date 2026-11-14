/* USA 005F5C24 (EU 005F5BFC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007133B0;
extern uint32_t data_007133B4;
extern uint32_t data_007133B8;
extern uint32_t data_007133BC;


void func_005F5C24(void) {
    data_007133B0 = 0xFFFFFFFFu;
    data_007133B4 = 0xFFFFFFFFu;
    data_007133B8 = 0x00000000u;
    data_007133BC = 0x00000000u;
}
