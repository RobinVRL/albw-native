/* USA 005F2FB0 (EU 005F2F88): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714D48;
extern uint32_t data_00714D4C;
extern uint32_t data_00714D50;
extern uint32_t data_00714D54;


void func_005F2FB0(void) {
    data_00714D48 = 0xFFFFFFFFu;
    data_00714D4C = 0xFFFFFFFFu;
    data_00714D50 = 0x00000000u;
    data_00714D54 = 0x00000000u;
}
