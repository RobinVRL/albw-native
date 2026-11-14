/* USA 005D0C5C (EU 005D0C34): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00722A40;
extern uint32_t data_00722A44;
extern uint32_t data_00722A48;
extern uint32_t data_00722A4C;


void func_005D0C5C(void) {
    data_00722A40 = 0xFFFFFFFFu;
    data_00722A44 = 0xFFFFFFFFu;
    data_00722A48 = 0x00000000u;
    data_00722A4C = 0x00000000u;
}
