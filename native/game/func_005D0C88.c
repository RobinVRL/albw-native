/* USA 005D0C88 (EU 005D0C60): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715958;
extern uint32_t data_0071595C;
extern uint32_t data_00715960;
extern uint32_t data_00715964;


void func_005D0C88(void) {
    data_00715958 = 0xFFFFFFFFu;
    data_0071595C = 0xFFFFFFFFu;
    data_00715960 = 0x00000000u;
    data_00715964 = 0x00000000u;
}
