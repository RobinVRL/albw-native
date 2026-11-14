/* USA 005EAC30 (EU 005EAC08): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713240;
extern uint32_t data_00713244;
extern uint32_t data_00713248;
extern uint32_t data_0071324C;


void func_005EAC30(void) {
    data_00713240 = 0xFFFFFFFFu;
    data_00713244 = 0xFFFFFFFFu;
    data_00713248 = 0x00000000u;
    data_0071324C = 0x00000000u;
}
