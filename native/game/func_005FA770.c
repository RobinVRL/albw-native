/* USA 005FA770 (EU 005FA748): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714DC0;
extern uint32_t data_00714DC4;
extern uint32_t data_00714DC8;
extern uint32_t data_00714DCC;


void func_005FA770(void) {
    data_00714DC0 = 0xFFFFFFFFu;
    data_00714DC4 = 0xFFFFFFFFu;
    data_00714DC8 = 0x00000000u;
    data_00714DCC = 0x00000000u;
}
