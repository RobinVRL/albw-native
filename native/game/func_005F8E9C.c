/* USA 005F8E9C (EU 005F8E74): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00722A28;
extern uint32_t data_00722A2C;
extern uint32_t data_00722A30;
extern uint32_t data_00722A34;


void func_005F8E9C(void) {
    data_00722A28 = 0xFFFFFFFFu;
    data_00722A2C = 0xFFFFFFFFu;
    data_00722A30 = 0x00000000u;
    data_00722A34 = 0x00000000u;
}
