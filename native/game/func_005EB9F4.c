/* USA 005EB9F4 (EU 005EB9CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714F98;
extern uint32_t data_00714F9C;
extern uint32_t data_00714FA0;
extern uint32_t data_00714FA4;


void func_005EB9F4(void) {
    data_00714F98 = 0xFFFFFFFFu;
    data_00714F9C = 0xFFFFFFFFu;
    data_00714FA0 = 0x00000000u;
    data_00714FA4 = 0x00000000u;
}
