/* USA 005AECD8 (EU 005AECB0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714CF8;
extern uint32_t data_00714CFC;
extern uint32_t data_00714D00;
extern uint32_t data_00714D04;


void func_005AECD8(void) {
    data_00714CF8 = 0xFFFFFFFFu;
    data_00714CFC = 0xFFFFFFFFu;
    data_00714D00 = 0x00000000u;
    data_00714D04 = 0x00000000u;
}
