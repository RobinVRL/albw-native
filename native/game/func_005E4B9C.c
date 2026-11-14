/* USA 005E4B9C (EU 005E4B74): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716640;
extern uint32_t data_00716644;
extern uint32_t data_00716648;
extern uint32_t data_0071664C;


void func_005E4B9C(void) {
    data_00716640 = 0xFFFFFFFFu;
    data_00716644 = 0xFFFFFFFFu;
    data_00716648 = 0x00000000u;
    data_0071664C = 0x00000000u;
}
