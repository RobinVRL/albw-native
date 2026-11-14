/* USA 005AEAF8 (EU 005AEAD0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007A8FBC;
extern uint32_t data_007A8FC0;
extern uint32_t data_007A8FC4;
extern uint32_t data_007A8FC8;
extern uint32_t data_007A8FCC;
extern uint32_t data_007A8FD0;
extern uint32_t data_007A8FD4;
extern uint32_t data_007A901C;
extern uint32_t data_007A9020;
void func_003E2FBC(uintptr_t);


void func_005AEAF8(void) {
    data_007A8FBC = 0x00000000u;
    data_007A8FC0 = 0x00000000u;
    data_007A8FC4 = 0x00000000u;
    data_007A8FC8 = 0x00000000u;
    *(uint8_t *)&data_007A8FCC = 0x0u;
    data_007A8FD0 = 0x00000000u;
    *(uint8_t *)&data_007A8FD4 = 0x0u;
    *(uint8_t *)&data_007A901C = 0xA5u;
    func_003E2FBC((uintptr_t)&data_007A9020);
}
