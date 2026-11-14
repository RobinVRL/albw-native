/* USA 005BBB3C (EU 005BBB14): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00697090;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AAC0;
extern uint32_t data_0070AAC8;
extern uint32_t data_0070AACC;
extern uint32_t data_0070AAD0;
extern uint32_t data_0070AAD4;
extern uint32_t data_0073ED78;
extern uint32_t data_0073ED7C;
extern uint32_t data_0073ED80;
extern uint32_t data_0073ED84;
extern uint32_t data_0073ED98;
extern uint32_t data_0073EFE0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060490C(void);


void func_005BBB3C(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyIronBall";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\223S\213\205";
    data_0070AAC8 = 0xFFFFFFFFu;
    data_0070AACC = 0xFFFFFFFFu;
    data_0070AAD0 = 0x00000000u;
    data_0070AAD4 = 0x00000000u;
    data_0073ED78 = 0x00000000u;
    data_0073ED7C = 0x00000005u;
    data_0073ED80 = (uintptr_t)&data_0073ED84;
    uintptr_t v0 = data_0070AAC0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00697090 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073ED78;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073ED98, (uintptr_t)&func_0060490C, 0x000001FCu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073ED78, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    func_004FC6FC((uintptr_t)&data_0073EFE0, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
