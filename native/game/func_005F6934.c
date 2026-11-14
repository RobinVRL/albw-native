/* USA 005F6934 (EU 005F690C): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714F70;
extern uint32_t data_00714F74;
extern uint32_t data_00714F78;
extern uint32_t data_00714F7C;


void func_005F6934(void) {
    data_00714F70 = 0xFFFFFFFFu;
    data_00714F74 = 0xFFFFFFFFu;
    data_00714F78 = 0x00000000u;
    data_00714F7C = 0x00000000u;
}
