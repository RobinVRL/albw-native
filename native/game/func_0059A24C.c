/* USA 0059A24C (EU 0059A224): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00725820;
extern uint32_t data_00725824;
extern uint32_t data_00725828;
extern uint32_t data_0072582C;


void func_0059A24C(void) {
    data_00725820 = 0xFFFFFFFFu;
    data_00725824 = 0xFFFFFFFFu;
    data_00725828 = 0x00000000u;
    data_0072582C = 0x00000000u;
}
