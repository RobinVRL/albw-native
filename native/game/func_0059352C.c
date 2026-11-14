/* USA 0059352C (EU 00593504): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F910;
extern uint32_t data_0070F914;
extern uint32_t data_0070F918;
extern uint32_t data_0070F91C;
extern uint32_t data_0078F214;
extern uint32_t data_0078F218;
extern uint32_t data_0078F21C;
extern uint32_t data_0078F220;
extern uint32_t data_0078F234;
extern uint32_t data_0078F47C;
extern uint32_t data_0078F480;
extern uint32_t data_0078F484;
extern uint32_t data_0078F488;
extern uint32_t data_0078F49C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A444(void);


void func_0059352C(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078F214;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjPotLight";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\232\342(\214\365)ObjPot";
    data_0070F910 = 0xFFFFFFFFu;
    data_0070F914 = 0xFFFFFFFFu;
    data_0070F918 = 0x00000000u;
    data_0070F91C = 0x00000000u;
    data_0078F214 = 0x00000000u;
    data_0078F218 = 0x00000005u;
    data_0078F21C = (uintptr_t)&data_0078F220;
    func_0019B51C((uintptr_t)&data_0078F234, (uintptr_t)&func_0060A444, 0x0000002Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078F214, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078F47C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjPotSkull";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\232\342\201i\202\307\202\255\202\353\201jObjPot";
    data_0078F47C = 0x00000000u;
    data_0078F480 = 0x00000005u;
    data_0078F484 = (uintptr_t)&data_0078F488;
    func_0019B51C((uintptr_t)&data_0078F49C, (uintptr_t)&func_0060A444, 0x0000002Cu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0078F47C, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
