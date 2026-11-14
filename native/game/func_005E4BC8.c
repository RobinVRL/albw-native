/* USA 005E4BC8 (EU 005E4BA0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007150F0;
extern uint32_t data_007150F4;
extern uint32_t data_007150F8;
extern uint32_t data_007150FC;


void func_005E4BC8(void) {
    data_007150F0 = 0xFFFFFFFFu;
    data_007150F4 = 0xFFFFFFFFu;
    data_007150F8 = 0x00000000u;
    data_007150FC = 0x00000000u;
}
