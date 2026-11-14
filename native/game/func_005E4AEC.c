/* USA 005E4AEC (EU 005E4AC4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716570;
extern uint32_t data_00716574;
extern uint32_t data_00716578;
extern uint32_t data_0071657C;


void func_005E4AEC(void) {
    data_00716570 = 0xFFFFFFFFu;
    data_00716574 = 0xFFFFFFFFu;
    data_00716578 = 0x00000000u;
    data_0071657C = 0x00000000u;
}
