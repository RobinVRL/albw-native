/* USA 005C252C (EU 005C2504): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00722A88;
extern uint32_t data_00722A8C;
extern uint32_t data_00722A90;
extern uint32_t data_00722A94;


void func_005C252C(void) {
    data_00722A88 = 0xFFFFFFFFu;
    data_00722A8C = 0xFFFFFFFFu;
    data_00722A90 = 0x00000000u;
    data_00722A94 = 0x00000000u;
}
