/* USA 005E3920 (EU 005E38F8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007132F0;
extern uint32_t data_007132F4;
extern uint32_t data_007132F8;
extern uint32_t data_007132FC;


void func_005E3920(void) {
    data_007132F0 = 0xFFFFFFFFu;
    data_007132F4 = 0xFFFFFFFFu;
    data_007132F8 = 0x00000000u;
    data_007132FC = 0x00000000u;
}
