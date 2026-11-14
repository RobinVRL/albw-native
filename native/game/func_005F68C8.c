/* USA 005F68C8 (EU 005F68A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007159A8;
extern uint32_t data_007159AC;
extern uint32_t data_007159B0;
extern uint32_t data_007159B4;


void func_005F68C8(void) {
    data_007159A8 = 0xFFFFFFFFu;
    data_007159AC = 0xFFFFFFFFu;
    data_007159B0 = 0x00000000u;
    data_007159B4 = 0x00000000u;
}
