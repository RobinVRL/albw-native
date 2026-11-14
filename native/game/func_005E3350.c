/* USA 005E3350 (EU 005E3328): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711D50;
extern uint32_t data_00711D54;
extern uint32_t data_00711D58;
extern uint32_t data_00711D60;
extern uint32_t data_00711D64;
extern uint32_t data_00711D68;
extern uint32_t data_00711D6C;
uintptr_t func_00114608(uintptr_t, uintptr_t);


void func_005E3350(void) {
    data_00711D50 = 0x3F5DB3D7u /* 0.8660253882408142 f */;
    data_00711D54 = 0x80000000u;
    data_00711D60 = 0xFFFFFFFFu;
    data_00711D64 = 0xFFFFFFFFu;
    data_00711D68 = 0x00000000u;
    data_00711D6C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D2AAAABu, 0x80000000u);
    data_00711D58 = ret0;
}
