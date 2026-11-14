/* USA 005A3FAC (EU 005A3F84): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A1F0;
extern uint32_t data_0070A1F4;
extern uint32_t data_0070A1F8;
extern uint32_t data_0070A1FC;


void func_005A3FAC(void) {
    data_0070A1F0 = 0xFFFFFFFFu;
    data_0070A1F4 = 0xFFFFFFFFu;
    data_0070A1F8 = 0x00000000u;
    data_0070A1FC = 0x00000000u;
}
