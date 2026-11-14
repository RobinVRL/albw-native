/* USA 005C27B4 (EU 005C278C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715200;
extern uint32_t data_00715204;
extern uint32_t data_00715208;
extern uint32_t data_0071520C;


void func_005C27B4(void) {
    data_00715200 = 0xFFFFFFFFu;
    data_00715204 = 0xFFFFFFFFu;
    data_00715208 = 0x00000000u;
    data_0071520C = 0x00000000u;
}
