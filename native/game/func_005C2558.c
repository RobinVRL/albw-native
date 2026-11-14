/* USA 005C2558 (EU 005C2530): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 1 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007257A4;
extern uint32_t data_007257A8;


void func_005C2558(void) {
    data_007257A4 = (uint32_t)(uintptr_t)&data_007257A8;
}
