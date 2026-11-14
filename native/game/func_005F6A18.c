/* USA 005F6A18 (EU 005F69F0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715280;
extern uint32_t data_00715284;
extern uint32_t data_00715288;
extern uint32_t data_0071528C;


void func_005F6A18(void) {
    data_00715280 = 0xFFFFFFFFu;
    data_00715284 = 0xFFFFFFFFu;
    data_00715288 = 0x00000000u;
    data_0071528C = 0x00000000u;
}
