/* USA 005F3190 (EU 005F3168): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708708;
extern uint32_t data_0070870C;
extern uint32_t data_00708710;
extern uint32_t data_00708714;


void func_005F3190(void) {
    data_00708708 = 0xFFFFFFFFu;
    data_0070870C = 0xFFFFFFFFu;
    data_00708710 = 0x00000000u;
    data_00708714 = 0x00000000u;
}
