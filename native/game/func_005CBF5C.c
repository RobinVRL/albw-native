/* USA 005CBF5C (EU 005CBF34): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006964A8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A830;
extern uint32_t data_0070A838;
extern uint32_t data_0070A83C;
extern uint32_t data_0070A840;
extern uint32_t data_0070A844;
extern uint32_t data_0073B454;
extern uint32_t data_0073B458;
extern uint32_t data_0073B45C;
extern uint32_t data_0073B460;
extern uint32_t data_0073B474;
extern uint32_t data_0073B6BC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606848(void);


void func_005CBF5C(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyFallMaster";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203t\203H\201[\203\213\203}\203X\203^";
    data_0070A838 = 0xFFFFFFFFu;
    data_0070A83C = 0xFFFFFFFFu;
    data_0070A840 = 0x00000000u;
    data_0070A844 = 0x00000000u;
    data_0073B454 = 0x00000000u;
    data_0073B458 = 0x00000005u;
    data_0073B45C = (uintptr_t)&data_0073B460;
    uintptr_t v0 = data_0070A830;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006964A8 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073B454;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073B474, (uintptr_t)&func_00606848, 0x00000012u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0073B454, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x1u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    func_004FC6FC((uintptr_t)&data_0073B6BC, 0x00000004u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
