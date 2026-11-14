/* USA 005E5BA4 (EU 005E5B7C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 4 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00696B8C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A9D8;
extern uint32_t data_0070A9DC;
extern uint32_t data_0070A9E0;
extern uint32_t data_0070A9E4;
extern uint32_t data_0070A9E8;
extern uint32_t data_0070A9EC;
extern uint32_t data_0070A9F0;
extern uint32_t data_0070A9F4;
extern uint32_t data_0073D394;
extern uint32_t data_0073D398;
extern uint32_t data_0073D39C;
extern uint32_t data_0073D3A0;
extern uint32_t data_0073D3B4;
extern uint32_t data_0073D5FC;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608278(void);


void func_005E5BA4(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    data_0070A9E8 = 0xFFFFFFFFu;
    data_0070A9EC = 0xFFFFFFFFu;
    data_0070A9F0 = 0x00000000u;
    data_0070A9F4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x00000000u, 0xFFFFFFFFu);
    data_0070A9DC = ret0;
    data_0070A9E0 = ret0;
    uintptr_t ret1 = func_00114608(0x4CE38E39u, (uintptr_t)&data_0070A9E0);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"HagureBoss_shield";
    *(uint8_t *)((char *)stk + 40) = 0x0u;
    *(uint8_t *)((char *)stk + 41) = 0x0u;
    *(uint8_t *)((char *)stk + 42) = 0x0u;
    *(uint8_t *)((char *)stk + 43) = 0xFFu;
    *(uint8_t *)((char *)stk + 44) = 0xFFu;
    data_0070A9E4 = ret1;
    func_004FC5F8((uintptr_t)&data_0073D5FC, (uintptr_t)((char *)stk + 16), 0x00000002u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 40), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202\315\202\256\202\352\203{\203X\227p\217\202";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"EnemyHagureShield";
    data_0073D394 = 0x00000000u;
    data_0073D398 = 0x00000005u;
    data_0073D39C = (uintptr_t)&data_0073D3A0;
    uintptr_t v0 = data_0070A9D8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00696B8C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073D394;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073D3B4, (uintptr_t)&func_00608278, 0x00000017u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0073D394, (uintptr_t)((char *)stk + 24), v1);
}
