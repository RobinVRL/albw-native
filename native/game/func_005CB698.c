/* USA 005CB698 (EU 005CB670): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714DE8;
extern uint32_t data_00714DEC;
extern uint32_t data_00714DF0;
extern uint32_t data_00714DF4;


void func_005CB698(void) {
    data_00714DE8 = 0xFFFFFFFFu;
    data_00714DEC = 0xFFFFFFFFu;
    data_00714DF0 = 0x00000000u;
    data_00714DF4 = 0x00000000u;
}
