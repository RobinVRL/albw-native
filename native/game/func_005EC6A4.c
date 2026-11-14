/* USA 005EC6A4 (EU 005EC67C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00710F90;
extern uint32_t data_00710F94;
extern uint32_t data_00710F98;
extern uint32_t data_00710F9C;
extern uint32_t data_00710FA0;
extern uint32_t data_00710FA4;
extern uint32_t data_007960F8;
extern uint32_t data_007960FC;
extern uint32_t data_00796100;
uintptr_t func_00114608(uintptr_t, uintptr_t);


void func_005EC6A4(void) {
    data_00710F98 = 0xFFFFFFFFu;
    data_00710F9C = 0xFFFFFFFFu;
    data_00710FA0 = 0x00000000u;
    data_00710FA4 = 0x00000000u;
    data_007960F8 = 0x00000000u /* 0.0 f */;
    data_007960FC = 0x40C00000u /* 6.0 f */;
    data_00796100 = 0x3EE66666u /* 0.44999998807907104 f */;
    uintptr_t ret0 = func_00114608(0x4CCCCCCDu, 0x00000000u);
    data_00710F90 = ret0;
    uintptr_t ret1 = func_00114608(0x5781742Eu, 0x00000000u);
    data_00710F94 = ret1;
}
