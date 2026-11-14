/* USA 0059F8DC (EU 0059F8B4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00706CE0;
extern uint32_t data_00706CE4;
extern uint32_t data_00706CE8;
extern uint32_t data_00706CEC;


void func_0059F8DC(void) {
    data_00706CE0 = 0xFFFFFFFFu;
    data_00706CE4 = 0xFFFFFFFFu;
    data_00706CE8 = 0x00000000u;
    data_00706CEC = 0x00000000u;
}
