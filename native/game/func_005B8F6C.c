/* USA 005B8F6C (EU 005B8F44): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713350;
extern uint32_t data_00713354;
extern uint32_t data_00713358;
extern uint32_t data_0071335C;


void func_005B8F6C(void) {
    data_00713350 = 0xFFFFFFFFu;
    data_00713354 = 0xFFFFFFFFu;
    data_00713358 = 0x00000000u;
    data_0071335C = 0x00000000u;
}
