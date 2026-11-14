/* USA 005C2060 (EU 005C2038): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007132D0;
extern uint32_t data_007132D4;
extern uint32_t data_007132D8;
extern uint32_t data_007132DC;


void func_005C2060(void) {
    data_007132D0 = 0xFFFFFFFFu;
    data_007132D4 = 0xFFFFFFFFu;
    data_007132D8 = 0x00000000u;
    data_007132DC = 0x00000000u;
}
