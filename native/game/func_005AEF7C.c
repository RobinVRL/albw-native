/* USA 005AEF7C (EU 005AEF54): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709CA8;
extern uint32_t data_00709CAC;
extern uint32_t data_00709CB0;
extern uint32_t data_00709CB4;


void func_005AEF7C(void) {
    data_00709CA8 = 0xFFFFFFFFu;
    data_00709CAC = 0xFFFFFFFFu;
    data_00709CB0 = 0x00000000u;
    data_00709CB4 = 0x00000000u;
}
