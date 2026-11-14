/* USA 005CB774 (EU 005CB74C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007151A8;
extern uint32_t data_007151AC;
extern uint32_t data_007151B0;
extern uint32_t data_007151B4;


void func_005CB774(void) {
    data_007151A8 = 0xFFFFFFFFu;
    data_007151AC = 0xFFFFFFFFu;
    data_007151B0 = 0x00000000u;
    data_007151B4 = 0x00000000u;
}
