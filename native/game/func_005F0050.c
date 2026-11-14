/* USA 005F0050 (EU 005F0028): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007153F8;
extern uint32_t data_007153FC;
extern uint32_t data_00715400;
extern uint32_t data_00715404;


void func_005F0050(void) {
    data_007153F8 = 0xFFFFFFFFu;
    data_007153FC = 0xFFFFFFFFu;
    data_00715400 = 0x00000000u;
    data_00715404 = 0x00000000u;
}
