/* USA 005CA2A0 (EU 005CA278): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712440;
extern uint32_t data_00712444;
extern uint32_t data_00712448;
extern uint32_t data_0071244C;


void func_005CA2A0(void) {
    data_00712440 = 0xFFFFFFFFu;
    data_00712444 = 0xFFFFFFFFu;
    data_00712448 = 0x00000000u;
    data_0071244C = 0x00000000u;
}
