/* USA 005EB76C (EU 005EB744): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_006F5C84;
extern uint32_t data_00714F60;
extern uint32_t data_00714F64;
extern uint32_t data_00714F68;
extern uint32_t data_00714F6C;
extern uint32_t data_0079DD58;
extern uint32_t data_0079DD5C;
extern uint32_t data_0079DD60;
extern uint32_t data_0079DD64;
extern uint32_t data_0079DF63;
void func_005902C0(void);


void func_005EB76C(void) {
    data_00714F60 = 0xFFFFFFFFu;
    data_00714F64 = 0xFFFFFFFFu;
    data_00714F68 = 0x00000000u;
    data_00714F6C = 0x00000000u;
    data_0079DD58 = (uintptr_t)&data_006F5C84;
    data_0079DD5C = (uintptr_t)&data_0079DD64;
    data_0079DD60 = 0x00000200u;
    *(uint8_t *)&data_0079DD64 = 0x0u;
    *(uint8_t *)&data_0079DF63 = 0x0u;
    func_005902C0();
}
