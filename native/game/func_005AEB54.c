/* USA 005AEB54 (EU 005AEB2C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 1 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714C8C;
extern uint32_t data_00714C94;


void func_005AEB54(void) {
    data_00714C94 = (uint32_t)(uintptr_t)&data_00714C8C;
}
