/* USA 005F007C (EU 005F0054): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714CE8;
extern uint32_t data_00714CEC;
extern uint32_t data_00714CF0;
extern uint32_t data_00714CF4;


void func_005F007C(void) {
    data_00714CE8 = 0xFFFFFFFFu;
    data_00714CEC = 0xFFFFFFFFu;
    data_00714CF0 = 0x00000000u;
    data_00714CF4 = 0x00000000u;
}
