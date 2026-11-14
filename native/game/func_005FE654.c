/* USA 005FE654 (EU 005FE62C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007125C8;
extern uint32_t data_007125CC;
extern uint32_t data_007125D0;
extern uint32_t data_007125D4;


void func_005FE654(void) {
    data_007125C8 = 0xFFFFFFFFu;
    data_007125CC = 0xFFFFFFFFu;
    data_007125D0 = 0x00000000u;
    data_007125D4 = 0x00000000u;
}
