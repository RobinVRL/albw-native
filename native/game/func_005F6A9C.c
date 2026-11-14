/* USA 005F6A9C (EU 005F6A74): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007A8798;
extern uint32_t data_007A87CC;
extern uint32_t data_007A87D0;
extern uint32_t data_007A87D4;
void func_005902C0(uintptr_t);


void func_005F6A9C(void) {
    *(uint8_t *)&data_007A8798 = 0x0u;
    data_007A87CC = 0x00000000u;
    data_007A87D0 = 0x00000000u;
    data_007A87D4 = 0xFFFFFFFFu;
    func_005902C0((uintptr_t)&data_007A8798);
}
