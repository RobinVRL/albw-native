/* USA 005EF0F4 (EU 005EF0CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712930;
extern uint32_t data_00712934;
extern uint32_t data_00712938;
extern uint32_t data_0071293C;


void func_005EF0F4(void) {
    data_00712930 = 0xFFFFFFFFu;
    data_00712934 = 0xFFFFFFFFu;
    data_00712938 = 0x00000000u;
    data_0071293C = 0x00000000u;
}
