/* USA 005CB01C (EU 005CAFF4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712F60;
extern uint32_t data_00712F64;
extern uint32_t data_00712F68;
extern uint32_t data_00712F6C;


void func_005CB01C(void) {
    data_00712F60 = 0xFFFFFFFFu;
    data_00712F64 = 0xFFFFFFFFu;
    data_00712F68 = 0x00000000u;
    data_00712F6C = 0x00000000u;
}
