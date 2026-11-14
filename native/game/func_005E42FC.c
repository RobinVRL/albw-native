/* USA 005E42FC (EU 005E42D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007138B0;
extern uint32_t data_007138B4;
extern uint32_t data_007138B8;
extern uint32_t data_007138BC;


void func_005E42FC(void) {
    data_007138B0 = 0xFFFFFFFFu;
    data_007138B4 = 0xFFFFFFFFu;
    data_007138B8 = 0x00000000u;
    data_007138BC = 0x00000000u;
}
