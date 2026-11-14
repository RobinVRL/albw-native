/* USA 005D0D70 (EU 005D0D48): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715150;
extern uint32_t data_00715154;
extern uint32_t data_00715158;
extern uint32_t data_0071515C;


void func_005D0D70(void) {
    data_00715150 = 0xFFFFFFFFu;
    data_00715154 = 0xFFFFFFFFu;
    data_00715158 = 0x00000000u;
    data_0071515C = 0x00000000u;
}
