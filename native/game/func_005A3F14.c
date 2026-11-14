/* USA 005A3F14 (EU 005A3EEC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708948;
extern uint32_t data_0070894C;
extern uint32_t data_00708950;
extern uint32_t data_00708954;
extern uint32_t data_00708958;
extern uint32_t data_00708960;
extern uint32_t data_00708964;
extern uint32_t data_00708968;
extern uint32_t data_0070896C;
uintptr_t func_00114608(uintptr_t, uintptr_t);


void func_005A3F14(void) {
    data_00708948 = 0x3EDF66F3u /* 0.4363323152065277 f */;
    data_00708960 = 0xFFFFFFFFu;
    data_00708964 = 0xFFFFFFFFu;
    data_00708968 = 0x00000000u;
    data_0070896C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C638E39u, 0xFFFFFFFFu);
    data_0070894C = ret0;
    data_00708950 = ret0;
    uintptr_t ret1 = func_00114608(0x00000000u, (uintptr_t)&data_00708950);
    data_00708954 = ret1;
    data_00708958 = ret1;
}
