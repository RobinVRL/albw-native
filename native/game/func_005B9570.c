/* USA 005B9570 (EU 005B9548): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714EA8;
extern uint32_t data_00714EAC;
extern uint32_t data_00714EB0;
extern uint32_t data_00714EB4;


void func_005B9570(void) {
    data_00714EA8 = 0xFFFFFFFFu;
    data_00714EAC = 0xFFFFFFFFu;
    data_00714EB0 = 0x00000000u;
    data_00714EB4 = 0x00000000u;
}
