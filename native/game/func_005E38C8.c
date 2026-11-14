/* USA 005E38C8 (EU 005E38A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712EF8;
extern uint32_t data_00712EFC;
extern uint32_t data_00712F00;
extern uint32_t data_00712F04;


void func_005E38C8(void) {
    data_00712EF8 = 0xFFFFFFFFu;
    data_00712EFC = 0xFFFFFFFFu;
    data_00712F00 = 0x00000000u;
    data_00712F04 = 0x00000000u;
}
