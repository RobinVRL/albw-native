/* USA 005D0D9C (EU 005D0D74): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007150E0;
extern uint32_t data_007150E4;
extern uint32_t data_007150E8;
extern uint32_t data_007150EC;


void func_005D0D9C(void) {
    data_007150E0 = 0xFFFFFFFFu;
    data_007150E4 = 0xFFFFFFFFu;
    data_007150E8 = 0x00000000u;
    data_007150EC = 0x00000000u;
}
