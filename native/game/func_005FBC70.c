/* USA 005FBC70 (EU 005FBC48): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714E38;
extern uint32_t data_00714E3C;
extern uint32_t data_00714E40;
extern uint32_t data_00714E44;


void func_005FBC70(void) {
    data_00714E38 = 0xFFFFFFFFu;
    data_00714E3C = 0xFFFFFFFFu;
    data_00714E40 = 0x00000000u;
    data_00714E44 = 0x00000000u;
}
