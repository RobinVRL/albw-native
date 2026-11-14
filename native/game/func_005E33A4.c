/* USA 005E33A4 (EU 005E337C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711E48;
extern uint32_t data_00711E4C;
extern uint32_t data_00711E50;
extern uint32_t data_00711E54;


void func_005E33A4(void) {
    data_00711E48 = 0xFFFFFFFFu;
    data_00711E4C = 0xFFFFFFFFu;
    data_00711E50 = 0x00000000u;
    data_00711E54 = 0x00000000u;
}
