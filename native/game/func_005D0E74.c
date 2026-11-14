/* USA 005D0E74 (EU 005D0E4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 5 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5948;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716728;
extern uint32_t data_00716730;
extern uint32_t data_00716734;
extern uint32_t data_00716738;
extern uint32_t data_0071673C;


void func_005D0E74(void) {
    data_00716728 = (uint32_t)(uintptr_t)&data_006F5948;
    data_00716730 = 0xFFFFFFFFu;
    data_00716734 = 0xFFFFFFFFu;
    data_00716738 = 0x00000000u;
    data_0071673C = 0x00000000u;
}
