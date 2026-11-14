/* USA 005B4D48 (EU 005B4D20): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C0D0;
extern uint32_t data_0070C0D4;
extern uint32_t data_0070C0D8;
extern uint32_t data_0070C0DC;
extern uint32_t data_00759EF8;
extern uint32_t data_00759EFC;
extern uint32_t data_00759F00;
extern uint32_t data_00759F04;
extern uint32_t data_00759F18;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603DBC(void);


void func_005B4D48(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00759EF8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojLightHole";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\212\202\251\202\347\202\314\214\365";
    data_0070C0D0 = 0xFFFFFFFFu;
    data_0070C0D4 = 0xFFFFFFFFu;
    data_0070C0D8 = 0x00000000u;
    data_0070C0DC = 0x00000000u;
    data_00759EF8 = 0x00000000u;
    data_00759EFC = 0x00000005u;
    data_00759F00 = (uintptr_t)&data_00759F04;
    func_0019B51C((uintptr_t)&data_00759F18, (uintptr_t)&func_00603DBC, 0x00000124u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00759EF8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
