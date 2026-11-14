/* USA 005CB5E8 (EU 005CB5C0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714AC8;
extern uint32_t data_00714ACC;
extern uint32_t data_00714AD0;
extern uint32_t data_00714AD4;


void func_005CB5E8(void) {
    data_00714AC8 = 0xFFFFFFFFu;
    data_00714ACC = 0xFFFFFFFFu;
    data_00714AD0 = 0x00000000u;
    data_00714AD4 = 0x00000000u;
}
