/* USA 005DD7F0 (EU 005DD7C8): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007089C0;
extern uint32_t data_007089C4;
extern uint32_t data_007089C8;
extern uint32_t data_007089CC;


void func_005DD7F0(void) {
    data_007089C0 = 0xFFFFFFFFu;
    data_007089C4 = 0xFFFFFFFFu;
    data_007089C8 = 0x00000000u;
    data_007089CC = 0x00000000u;
}
