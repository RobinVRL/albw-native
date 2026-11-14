/* USA 005CFDB0 (EU 005CFD88): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00710FE0;
extern uint32_t data_00710FE4;
extern uint32_t data_00710FE8;
extern uint32_t data_00710FEC;


void func_005CFDB0(void) {
    data_00710FE0 = 0xFFFFFFFFu;
    data_00710FE4 = 0xFFFFFFFFu;
    data_00710FE8 = 0x00000000u;
    data_00710FEC = 0x00000000u;
}
