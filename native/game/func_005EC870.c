/* USA 005EC870 (EU 005EC848): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711F10;
extern uint32_t data_00711F14;
extern uint32_t data_00711F18;
extern uint32_t data_00711F1C;


void func_005EC870(void) {
    data_00711F10 = 0xFFFFFFFFu;
    data_00711F14 = 0xFFFFFFFFu;
    data_00711F18 = 0x00000000u;
    data_00711F1C = 0x00000000u;
}
