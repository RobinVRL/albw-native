/* USA 005E495C (EU 005E4934): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 1 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00716480;
extern uint32_t data_00716484;


void func_005E495C(void) {
    data_00716484 = (uint32_t)(uintptr_t)&data_00716480;
}
