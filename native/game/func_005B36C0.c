/* USA 005B36C0 (EU 005B3698): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C908;
extern uint32_t data_0070C90C;
extern uint32_t data_0070C910;
extern uint32_t data_0070C914;
extern uint32_t data_00767B80;
extern uint32_t data_00767B84;
extern uint32_t data_00767B88;
extern uint32_t data_00767B8C;
extern uint32_t data_00767BA0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603B2C(void);


void func_005B36C0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00767B80;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapPartsMove";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211\302\223\256\203}\203b\203v\203p\201[\203c";
    data_0070C908 = 0xFFFFFFFFu;
    data_0070C90C = 0xFFFFFFFFu;
    data_0070C910 = 0x00000000u;
    data_0070C914 = 0x00000000u;
    data_00767B80 = 0x00000000u;
    data_00767B84 = 0x00000005u;
    data_00767B88 = (uintptr_t)&data_00767B8C;
    func_0019B51C((uintptr_t)&data_00767BA0, (uintptr_t)&func_00603B2C, 0x00000005u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00767B80, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
