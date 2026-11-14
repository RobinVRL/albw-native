/* USA 005AEA70 (EU 005AEA48): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714AA0;
extern uint32_t data_00714AA4;
extern uint32_t data_00714AA8;
extern uint32_t data_00714AAC;


void func_005AEA70(void) {
    data_00714AA0 = 0xFFFFFFFFu;
    data_00714AA4 = 0xFFFFFFFFu;
    data_00714AA8 = 0x00000000u;
    data_00714AAC = 0x00000000u;
}
