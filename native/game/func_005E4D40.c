/* USA 005E4D40 (EU 005E4D18): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007086B0;
extern uint32_t data_007086B4;
extern uint32_t data_007086B8;
extern uint32_t data_007086BC;


void func_005E4D40(void) {
    data_007086B0 = 0xFFFFFFFFu;
    data_007086B4 = 0xFFFFFFFFu;
    data_007086B8 = 0x00000000u;
    data_007086BC = 0x00000000u;
}
