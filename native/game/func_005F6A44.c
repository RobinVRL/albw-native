/* USA 005F6A44 (EU 005F6A1C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715198;
extern uint32_t data_0071519C;
extern uint32_t data_007151A0;
extern uint32_t data_007151A4;


void func_005F6A44(void) {
    data_00715198 = 0xFFFFFFFFu;
    data_0071519C = 0xFFFFFFFFu;
    data_007151A0 = 0x00000000u;
    data_007151A4 = 0x00000000u;
}
