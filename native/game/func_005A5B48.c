/* USA 005A5B48 (EU 005A5B20): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 5 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BCF0;
extern uint32_t data_0070BCF8;
extern uint32_t data_0070BCFC;
extern uint32_t data_0070BD00;
extern uint32_t data_0070BD04;


void func_005A5B48(void) {
    *(uint8_t *)&data_0070BCF0 = 0x0u;
    data_0070BCF8 = 0xFFFFFFFFu;
    data_0070BCFC = 0xFFFFFFFFu;
    data_0070BD00 = 0x00000000u;
    data_0070BD04 = 0x00000000u;
}
