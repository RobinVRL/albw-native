/* USA 005CBC9C (EU 005CBC74): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708860;
extern uint32_t data_00708864;
extern uint32_t data_00708868;
extern uint32_t data_0070886C;
extern uint32_t data_0072EBEC;
extern uint32_t data_0072EBF0;
extern uint32_t data_0072EBF4;
extern uint32_t data_0072EBF8;
extern uint32_t data_0072EC0C;
extern uint32_t data_0072EE54;
extern uint32_t data_0072EE58;
extern uint32_t data_0072EE5C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606768(void);


void func_005CBC9C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072EBEC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaGroundColor";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\222n\226\312\203J\203\211\201[\203G\203\212\203A";
    data_00708860 = 0xFFFFFFFFu;
    data_00708864 = 0xFFFFFFFFu;
    data_00708868 = 0x00000000u;
    data_0070886C = 0x00000000u;
    data_0072EBEC = 0x00000000u;
    data_0072EBF0 = 0x00000005u;
    data_0072EBF4 = (uintptr_t)&data_0072EBF8;
    func_0019B51C((uintptr_t)&data_0072EC0C, (uintptr_t)&func_00606768, 0x0000027Eu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072EBEC, (uintptr_t)((char *)stk + 24), 0x00000000u);
    data_0072EE54 = 0x00000000u /* 0.0 f */;
    data_0072EE58 = 0x00000000u /* 0.0 f */;
    data_0072EE5C = 0x00000000u /* 0.0 f */;
}
