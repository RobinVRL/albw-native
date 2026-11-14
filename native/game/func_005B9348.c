/* USA 005B9348 (EU 005B9320): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 3 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007A88F4;
extern uint32_t data_007A88F8;
extern uint32_t data_007A88FC;
void func_005902C0(uintptr_t);


void func_005B9348(void) {
    data_007A88F4 = 0x00000000u;
    data_007A88F8 = 0x00000000u;
    data_007A88FC = 0xFFFFFFFFu;
    func_005902C0((uintptr_t)&data_007A88F4);
}
