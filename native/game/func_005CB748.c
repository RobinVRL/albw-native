/* USA 005CB748 (EU 005CB720): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715048;
extern uint32_t data_0071504C;
extern uint32_t data_00715050;
extern uint32_t data_00715054;


void func_005CB748(void) {
    data_00715048 = 0xFFFFFFFFu;
    data_0071504C = 0xFFFFFFFFu;
    data_00715050 = 0x00000000u;
    data_00715054 = 0x00000000u;
}
