/* USA 005EB99C (EU 005EB974): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714FE8;
extern uint32_t data_00714FEC;
extern uint32_t data_00714FF0;
extern uint32_t data_00714FF4;


void func_005EB99C(void) {
    data_00714FE8 = 0xFFFFFFFFu;
    data_00714FEC = 0xFFFFFFFFu;
    data_00714FF0 = 0x00000000u;
    data_00714FF4 = 0x00000000u;
}
