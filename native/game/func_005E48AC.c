/* USA 005E48AC (EU 005E4884): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007147D0;
extern uint32_t data_007147D4;
extern uint32_t data_007147D8;
extern uint32_t data_007147DC;


void func_005E48AC(void) {
    data_007147D0 = 0xFFFFFFFFu;
    data_007147D4 = 0xFFFFFFFFu;
    data_007147D8 = 0x00000000u;
    data_007147DC = 0x00000000u;
}
