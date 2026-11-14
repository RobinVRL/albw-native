/* USA 0059F908 (EU 0059F8E0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007089A0;
extern uint32_t data_007089A4;
extern uint32_t data_007089A8;
extern uint32_t data_007089AC;


void func_0059F908(void) {
    data_007089A0 = 0xFFFFFFFFu;
    data_007089A4 = 0xFFFFFFFFu;
    data_007089A8 = 0x00000000u;
    data_007089AC = 0x00000000u;
}
