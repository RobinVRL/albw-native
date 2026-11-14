/* USA 005B9628 (EU 005B9600): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715470;
extern uint32_t data_00715474;
extern uint32_t data_00715478;
extern uint32_t data_0071547C;


void func_005B9628(void) {
    data_00715470 = 0xFFFFFFFFu;
    data_00715474 = 0xFFFFFFFFu;
    data_00715478 = 0x00000000u;
    data_0071547C = 0x00000000u;
}
