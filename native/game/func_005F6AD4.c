/* USA 005F6AD4 (EU 005F6AAC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709EE8;
extern uint32_t data_00709EEC;
extern uint32_t data_00709EF0;
extern uint32_t data_00709EF4;


void func_005F6AD4(void) {
    data_00709EE8 = 0xFFFFFFFFu;
    data_00709EEC = 0xFFFFFFFFu;
    data_00709EF0 = 0x00000000u;
    data_00709EF4 = 0x00000000u;
}
