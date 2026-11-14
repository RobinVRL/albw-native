/* USA 005EC844 (EU 005EC81C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711D80;
extern uint32_t data_00711D84;
extern uint32_t data_00711D88;
extern uint32_t data_00711D8C;


void func_005EC844(void) {
    data_00711D80 = 0xFFFFFFFFu;
    data_00711D84 = 0xFFFFFFFFu;
    data_00711D88 = 0x00000000u;
    data_00711D8C = 0x00000000u;
}
