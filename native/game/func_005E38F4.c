/* USA 005E38F4 (EU 005E38CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00713210;
extern uint32_t data_00713214;
extern uint32_t data_00713218;
extern uint32_t data_0071321C;


void func_005E38F4(void) {
    data_00713210 = 0xFFFFFFFFu;
    data_00713214 = 0xFFFFFFFFu;
    data_00713218 = 0x00000000u;
    data_0071321C = 0x00000000u;
}
