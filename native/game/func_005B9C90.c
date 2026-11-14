/* USA 005B9C90 (EU 005B9C68): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709C58;
extern uint32_t data_00709C5C;
extern uint32_t data_00709C60;
extern uint32_t data_00709C64;


void func_005B9C90(void) {
    data_00709C58 = 0xFFFFFFFFu;
    data_00709C5C = 0xFFFFFFFFu;
    data_00709C60 = 0x00000000u;
    data_00709C64 = 0x00000000u;
}
