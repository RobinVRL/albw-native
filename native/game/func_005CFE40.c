/* USA 005CFE40 (EU 005CFE18): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007110A0;
extern uint32_t data_007110A4;
extern uint32_t data_007110A8;
extern uint32_t data_007110AC;


void func_005CFE40(void) {
    data_007110A0 = 0xFFFFFFFFu;
    data_007110A4 = 0xFFFFFFFFu;
    data_007110A8 = 0x00000000u;
    data_007110AC = 0x00000000u;
}
