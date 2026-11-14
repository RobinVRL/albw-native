/* USA 005FDB90 (EU 005FDB68): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007256B0;
extern uint32_t data_007256B4;
extern uint32_t data_007256B8;
extern uint32_t data_007256BC;


void func_005FDB90(void) {
    data_007256B0 = 0xFFFFFFFFu;
    data_007256B4 = 0xFFFFFFFFu;
    data_007256B8 = 0x00000000u;
    data_007256BC = 0x00000000u;
}
