/* USA 005EFFCC (EU 005EFFA4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715180;
extern uint32_t data_00715184;
extern uint32_t data_00715188;
extern uint32_t data_0071518C;


void func_005EFFCC(void) {
    data_00715180 = 0xFFFFFFFFu;
    data_00715184 = 0xFFFFFFFFu;
    data_00715188 = 0x00000000u;
    data_0071518C = 0x00000000u;
}
