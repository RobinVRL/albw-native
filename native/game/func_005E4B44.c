/* USA 005E4B44 (EU 005E4B1C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716708;
extern uint32_t data_0071670C;
extern uint32_t data_00716710;
extern uint32_t data_00716714;


void func_005E4B44(void) {
    data_00716708 = 0xFFFFFFFFu;
    data_0071670C = 0xFFFFFFFFu;
    data_00716710 = 0x00000000u;
    data_00716714 = 0x00000000u;
}
