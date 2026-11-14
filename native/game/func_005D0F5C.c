/* USA 005D0F5C (EU 005D0F34): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 1 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714CA8;
extern uint32_t data_00714CC4;


void func_005D0F5C(void) {
    data_00714CC4 = (uint32_t)(uintptr_t)&data_00714CA8;
}
