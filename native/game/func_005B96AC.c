/* USA 005B96AC (EU 005B9684): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715230;
extern uint32_t data_00715234;
extern uint32_t data_00715238;
extern uint32_t data_0071523C;


void func_005B96AC(void) {
    data_00715230 = 0xFFFFFFFFu;
    data_00715234 = 0xFFFFFFFFu;
    data_00715238 = 0x00000000u;
    data_0071523C = 0x00000000u;
}
