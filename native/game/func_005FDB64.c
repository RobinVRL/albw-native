/* USA 005FDB64 (EU 005FDB3C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007258A8;
extern uint32_t data_007258AC;
extern uint32_t data_007258B0;
extern uint32_t data_007258B4;


void func_005FDB64(void) {
    data_007258A8 = 0xFFFFFFFFu;
    data_007258AC = 0xFFFFFFFFu;
    data_007258B0 = 0x00000000u;
    data_007258B4 = 0x00000000u;
}
