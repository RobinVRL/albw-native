/* USA 005A7F74 (EU 005A7F4C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007132E0;
extern uint32_t data_007132E4;
extern uint32_t data_007132E8;
extern uint32_t data_007132EC;


void func_005A7F74(void) {
    data_007132E0 = 0xFFFFFFFFu;
    data_007132E4 = 0xFFFFFFFFu;
    data_007132E8 = 0x00000000u;
    data_007132EC = 0x00000000u;
}
