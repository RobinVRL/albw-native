/* USA 005B9410 (EU 005B93E8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 1 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714C6C;
extern uint32_t data_00714C8C;


void func_005B9410(void) {
    data_00714C6C = (uint32_t)(uintptr_t)&data_00714C8C;
}
