/* USA 005AF154 (EU 005AF12C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00709E40;
extern uint32_t data_00709E44;
extern uint32_t data_00709E48;
extern uint32_t data_00709E4C;


void func_005AF154(void) {
    data_00709E40 = 0xFFFFFFFFu;
    data_00709E44 = 0xFFFFFFFFu;
    data_00709E48 = 0x00000000u;
    data_00709E4C = 0x00000000u;
}
