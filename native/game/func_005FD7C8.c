/* USA 005FD7C8 (EU 005FD7A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714FF8;
extern uint32_t data_00714FFC;
extern uint32_t data_00715000;
extern uint32_t data_00715004;


void func_005FD7C8(void) {
    data_00714FF8 = 0xFFFFFFFFu;
    data_00714FFC = 0xFFFFFFFFu;
    data_00715000 = 0x00000000u;
    data_00715004 = 0x00000000u;
}
