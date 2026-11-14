/* USA 005EBD44 (EU 005EBD1C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709F70;
extern uint32_t data_00709F74;
extern uint32_t data_00709F78;
extern uint32_t data_00709F7C;


void func_005EBD44(void) {
    data_00709F70 = 0xFFFFFFFFu;
    data_00709F74 = 0xFFFFFFFFu;
    data_00709F78 = 0x00000000u;
    data_00709F7C = 0x00000000u;
}
