/* USA 0059A2D4 (EU 0059A2AC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 6 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00714960;
extern uint32_t data_00714968;
extern uint32_t data_0071496C;
extern uint32_t data_00714970;
extern uint32_t data_00714974;
extern uint32_t data_0079CD28;
void func_0010DEB0(uintptr_t);
void func_005902C0(uintptr_t);


void func_0059A2D4(void) {
    data_00714960 = 0x00000000u;
    data_00714968 = 0xFFFFFFFFu;
    data_0071496C = 0xFFFFFFFFu;
    data_00714970 = 0x00000000u;
    data_00714974 = 0x00000000u;
    data_0079CD28 = 0x00000000u;
    func_0010DEB0((uintptr_t)&data_0079CD28);
    func_005902C0((uintptr_t)&data_0079CD28);
}
