/* USA 0059A43C (EU 0059A414): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 6 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0071617C;
extern uint32_t data_00716180;
extern uint32_t data_00716184;
extern uint32_t data_00716188;
extern uint32_t data_007A3330;
extern uint32_t data_007A333C;
void func_0010DEB0(uintptr_t);
void func_005902C0(uintptr_t);


void func_0059A43C(void) {
    data_007A3330 = 0x00000000u;
    func_0010DEB0((uintptr_t)&data_007A3330);
    data_0071617C = 0x00000000u;
    data_00716180 = 0x00000000u;
    data_00716184 = 0x00000000u;
    *(uint8_t *)&data_00716188 = 0x1u;
    data_007A333C = 0x00000000u;
    func_0010DEB0((uintptr_t)&data_007A333C);
    func_005902C0((uintptr_t)&data_007A333C);
}
