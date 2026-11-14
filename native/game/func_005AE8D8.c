/* USA 005AE8D8 (EU 005AE8B0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714198;
extern uint32_t data_0071419C;
extern uint32_t data_007141A0;
extern uint32_t data_007141A4;


void func_005AE8D8(void) {
    data_00714198 = 0xFFFFFFFFu;
    data_0071419C = 0xFFFFFFFFu;
    data_007141A0 = 0x00000000u;
    data_007141A4 = 0x00000000u;
}
