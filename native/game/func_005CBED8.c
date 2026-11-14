/* USA 005CBED8 (EU 005CBEB0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709C68;
extern uint32_t data_00709C6C;
extern uint32_t data_00709C70;
extern uint32_t data_00709C74;


void func_005CBED8(void) {
    data_00709C68 = 0xFFFFFFFFu;
    data_00709C6C = 0xFFFFFFFFu;
    data_00709C70 = 0x00000000u;
    data_00709C74 = 0x00000000u;
}
