/* USA 005B8FC4 (EU 005B8F9C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714210;
extern uint32_t data_00714214;
extern uint32_t data_00714218;
extern uint32_t data_0071421C;


void func_005B8FC4(void) {
    data_00714210 = 0xFFFFFFFFu;
    data_00714214 = 0xFFFFFFFFu;
    data_00714218 = 0x00000000u;
    data_0071421C = 0x00000000u;
}
