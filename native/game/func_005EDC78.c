/* USA 005EDC78 (EU 005EDC50): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007159D8;
extern uint32_t data_007159DC;
extern uint32_t data_007159E0;
extern uint32_t data_007159E4;


void func_005EDC78(void) {
    data_007159D8 = 0xFFFFFFFFu;
    data_007159DC = 0xFFFFFFFFu;
    data_007159E0 = 0x00000000u;
    data_007159E4 = 0x00000000u;
}
