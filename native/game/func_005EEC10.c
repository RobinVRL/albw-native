/* USA 005EEC10 (EU 005EEBE8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711CE0;
extern uint32_t data_00711CE4;
extern uint32_t data_00711CE8;
extern uint32_t data_00711CEC;


void func_005EEC10(void) {
    data_00711CE0 = 0xFFFFFFFFu;
    data_00711CE4 = 0xFFFFFFFFu;
    data_00711CE8 = 0x00000000u;
    data_00711CEC = 0x00000000u;
}
