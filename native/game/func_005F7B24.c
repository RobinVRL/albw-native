/* USA 005F7B24 (EU 005F7AFC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007162C8;
extern uint32_t data_007162CC;
extern uint32_t data_007162D0;
extern uint32_t data_007162D4;


void func_005F7B24(void) {
    data_007162C8 = 0xFFFFFFFFu;
    data_007162CC = 0xFFFFFFFFu;
    data_007162D0 = 0x00000000u;
    data_007162D4 = 0x00000000u;
}
