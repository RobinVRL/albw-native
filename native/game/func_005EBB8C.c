/* USA 005EBB8C (EU 005EBB64): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 1 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714CA8;
extern uint32_t data_00714CAC;


void func_005EBB8C(void) {
    data_00714CAC = (uint32_t)(uintptr_t)&data_00714CA8;
}
