/* USA 005A7F48 (EU 005A7F20): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007132B0;
extern uint32_t data_007132B4;
extern uint32_t data_007132B8;
extern uint32_t data_007132BC;


void func_005A7F48(void) {
    data_007132B0 = 0xFFFFFFFFu;
    data_007132B4 = 0xFFFFFFFFu;
    data_007132B8 = 0x00000000u;
    data_007132BC = 0x00000000u;
}
