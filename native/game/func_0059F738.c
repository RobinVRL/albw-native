/* USA 0059F738 (EU 0059F710): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714740;
extern uint32_t data_00714744;
extern uint32_t data_00714748;
extern uint32_t data_0071474C;


void func_0059F738(void) {
    data_00714740 = 0xFFFFFFFFu;
    data_00714744 = 0xFFFFFFFFu;
    data_00714748 = 0x00000000u;
    data_0071474C = 0x00000000u;
}
