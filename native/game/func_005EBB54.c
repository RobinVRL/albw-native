/* USA 005EBB54 (EU 005EBB2C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007A06A0;
extern uint32_t data_007A06E4;
extern uint32_t data_007A06E8;
extern uint32_t data_007A06EC;
void func_005902C0(uintptr_t);


void func_005EBB54(void) {
    *(uint8_t *)&data_007A06A0 = 0x0u;
    data_007A06E4 = 0x00000000u;
    data_007A06E8 = 0x00000000u;
    data_007A06EC = 0xFFFFFFFFu;
    func_005902C0((uintptr_t)&data_007A06A0);
}
