/* USA 005D0D18 (EU 005D0CF0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007165B8;
extern uint32_t data_007165BC;
extern uint32_t data_007165C0;
extern uint32_t data_007165C4;


void func_005D0D18(void) {
    data_007165B8 = 0xFFFFFFFFu;
    data_007165BC = 0xFFFFFFFFu;
    data_007165C0 = 0x00000000u;
    data_007165C4 = 0x00000000u;
}
