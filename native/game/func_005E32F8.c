/* USA 005E32F8 (EU 005E32D0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00710DB4;
extern uint32_t data_00710DB8;
extern uint32_t data_00710DBC;
extern uint32_t data_00710DD0;
extern uint32_t data_00710DD4;
extern uint32_t data_00710DD8;
extern uint32_t data_00710DDC;
uintptr_t func_00114608(uintptr_t, uintptr_t);


void func_005E32F8(void) {
    data_00710DD0 = 0xFFFFFFFFu;
    data_00710DD4 = 0xFFFFFFFFu;
    data_00710DD8 = 0x00000000u;
    data_00710DDC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E555556u, 0xFFFFFFFFu);
    data_00710DB4 = ret0;
    uintptr_t ret1 = func_00114608(0x4E000000u, 0x00000000u);
    data_00710DB8 = ret1;
    uintptr_t ret2 = func_00114608(0x4C638E39u, 0x00000000u);
    data_00710DBC = ret2;
}
