/* USA 005ADA54 (EU 005ADA2C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F920;
extern uint32_t data_0070F924;
extern uint32_t data_0070F928;
extern uint32_t data_0070F92C;
extern uint32_t data_0078F6E4;
extern uint32_t data_0078F6E8;
extern uint32_t data_0078F6EC;
extern uint32_t data_0078F6F0;
extern uint32_t data_0078F704;
extern uint32_t data_0078F94C;
extern uint32_t data_0078F950;
extern uint32_t data_0078F954;
extern uint32_t data_0078F958;
extern uint32_t data_0078F96C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060376C(void);


void func_005ADA54(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078F6E4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjPotMagic";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\226\202\226@\202\250\202\316\202\316\202\314\203c\203{";
    data_0070F920 = 0xFFFFFFFFu;
    data_0070F924 = 0xFFFFFFFFu;
    data_0070F928 = 0x00000000u;
    data_0070F92C = 0x00000000u;
    data_0078F6E4 = 0x00000000u;
    data_0078F6E8 = 0x00000005u;
    data_0078F6EC = (uintptr_t)&data_0078F6F0;
    func_0019B51C((uintptr_t)&data_0078F704, (uintptr_t)&func_0060376C, 0x0000005Fu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078F6E4, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078F94C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjPotMagicS";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203A\203C\203\212\203\223\202\314\203c\203{";
    data_0078F94C = 0x00000000u;
    data_0078F950 = 0x00000005u;
    data_0078F954 = (uintptr_t)&data_0078F958;
    func_0019B51C((uintptr_t)&data_0078F96C, (uintptr_t)&func_0060376C, 0x00000060u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0078F94C, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
