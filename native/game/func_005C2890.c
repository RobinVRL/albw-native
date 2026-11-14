/* USA 005C2890 (EU 005C2868): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 1 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714CA8;
extern uint32_t data_007164F4;


void func_005C2890(void) {
    data_007164F4 = (uint32_t)(uintptr_t)&data_00714CA8;
}
