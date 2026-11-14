/* USA 005CFD54 (EU 005CFD2C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00710FC8;
extern uint32_t data_00710FC9;
extern uint32_t data_00710FCA;
extern uint32_t data_00710FCB;
extern uint32_t data_00710FCC;
extern uint32_t data_00710FD0;
extern uint32_t data_00710FD4;
extern uint32_t data_00710FD8;
extern uint32_t data_00710FDC;
uintptr_t func_00114608(uintptr_t, uintptr_t);


void func_005CFD54(void) {
    *(uint8_t *)&data_00710FC8 = 0xFFu;
    *(uint8_t *)&data_00710FC9 = 0x48u;
    *(uint8_t *)&data_00710FCA = 0xFFu;
    *(uint8_t *)&data_00710FCB = 0xFFu;
    data_00710FD0 = 0xFFFFFFFFu;
    data_00710FD4 = 0xFFFFFFFFu;
    data_00710FD8 = 0x00000000u;
    data_00710FDC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x00000000u, 0x00000048u);
    data_00710FCC = ret0;
}
