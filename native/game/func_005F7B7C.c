/* USA 005F7B7C (EU 005F7B54): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007166F8;
extern uint32_t data_007166FC;
extern uint32_t data_00716700;
extern uint32_t data_00716704;


void func_005F7B7C(void) {
    data_007166F8 = 0xFFFFFFFFu;
    data_007166FC = 0xFFFFFFFFu;
    data_00716700 = 0x00000000u;
    data_00716704 = 0x00000000u;
}
