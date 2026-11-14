/* USA 005E5068 (EU 005E5040): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709DB8;
extern uint32_t data_00709DBC;
extern uint32_t data_00709DC0;
extern uint32_t data_00709DC4;


void func_005E5068(void) {
    data_00709DB8 = 0xFFFFFFFFu;
    data_00709DBC = 0xFFFFFFFFu;
    data_00709DC0 = 0x00000000u;
    data_00709DC4 = 0x00000000u;
}
