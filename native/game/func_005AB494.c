/* USA 005AB494 (EU 005AB46C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BE40;
extern uint32_t data_0070BE44;
extern uint32_t data_0070BE48;
extern uint32_t data_0070BE4C;
extern uint32_t data_00750E58;
extern uint32_t data_00750E5C;
extern uint32_t data_00750E60;
extern uint32_t data_00750E64;
extern uint32_t data_00750E78;
extern uint32_t data_007510C0;
extern uint32_t data_007510C4;
extern uint32_t data_007510C8;
extern uint32_t data_007510CC;
extern uint32_t data_007510E0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006032D4(void);
void func_00608B1C(void);


void func_005AB494(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00750E58;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojBossSand";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\215\273\217\260(\215\273\224\231\203{\203X)";
    data_0070BE40 = 0xFFFFFFFFu;
    data_0070BE44 = 0xFFFFFFFFu;
    data_0070BE48 = 0x00000000u;
    data_0070BE4C = 0x00000000u;
    data_00750E58 = 0x00000000u;
    data_00750E5C = 0x00000005u;
    data_00750E60 = (uintptr_t)&data_00750E64;
    func_0019B51C((uintptr_t)&data_00750E78, (uintptr_t)&func_006032D4, 0x0000010Du, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00750E58, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007510C0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojBossSandThrough";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\227\254\215\273\223\336\227\216(\215\273\224\231\203{\203X)";
    data_007510C0 = 0x00000000u;
    data_007510C4 = 0x00000005u;
    data_007510C8 = (uintptr_t)&data_007510CC;
    func_0019B51C((uintptr_t)&data_007510E0, (uintptr_t)&func_00608B1C, 0x0000010Eu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_007510C0, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
