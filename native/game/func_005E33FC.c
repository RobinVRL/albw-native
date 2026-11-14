/* USA 005E33FC (EU 005E33D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711F30;
extern uint32_t data_00711F34;
extern uint32_t data_00711F38;
extern uint32_t data_00711F3C;


void func_005E33FC(void) {
    data_00711F30 = 0xFFFFFFFFu;
    data_00711F34 = 0xFFFFFFFFu;
    data_00711F38 = 0x00000000u;
    data_00711F3C = 0x00000000u;
}
