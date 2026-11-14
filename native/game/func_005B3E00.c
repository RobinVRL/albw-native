/* USA 005B3E00 (EU 005B3DD8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BD80;
extern uint32_t data_0070BD84;
extern uint32_t data_0070BD88;
extern uint32_t data_0070BD8C;
extern uint32_t data_0074FAE0;
extern uint32_t data_0074FAE4;
extern uint32_t data_0074FAE8;
extern uint32_t data_0074FAEC;
extern uint32_t data_0074FB00;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603C90(void);


void func_005B3E00(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074FAE0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojArrowWall";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225\307\202\251\202\347\226\356";
    data_0070BD80 = 0xFFFFFFFFu;
    data_0070BD84 = 0xFFFFFFFFu;
    data_0070BD88 = 0x00000000u;
    data_0070BD8C = 0x00000000u;
    data_0074FAE0 = 0x00000000u;
    data_0074FAE4 = 0x00000005u;
    data_0074FAE8 = (uintptr_t)&data_0074FAEC;
    func_0019B51C((uintptr_t)&data_0074FB00, (uintptr_t)&func_00603C90, 0x000000C1u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0074FAE0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
