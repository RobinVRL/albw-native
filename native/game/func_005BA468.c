/* USA 005BA468 (EU 005BA440): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 11 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069591C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A6C8;
extern uint32_t data_0070A6CC;
extern uint32_t data_0070A6D0;
extern uint32_t data_0070A6D4;
extern uint32_t data_0070A6D8;
extern uint32_t data_0070A6DC;
extern uint32_t data_007387C4;
extern uint32_t data_007387C8;
extern uint32_t data_007387CC;
extern uint32_t data_007387D0;
extern uint32_t data_007387E4;
extern uint32_t data_00738A2C;
extern uint32_t data_00738A30;
extern uint32_t data_00738A34;
extern uint32_t data_00738A38;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0019B5EC(void);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060478C(void);


void func_005BA468(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyBuzzBlob";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203o\203Y\203u\203\215\203u";
    data_0070A6D0 = 0xFFFFFFFFu;
    data_0070A6D4 = 0xFFFFFFFFu;
    data_0070A6D8 = 0x00000000u;
    data_0070A6DC = 0x00000000u;
    data_007387C4 = 0x00000000u;
    data_007387C8 = 0x00000005u;
    data_007387CC = (uintptr_t)&data_007387D0;
    uintptr_t v0 = data_0070A6C8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069591C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007387C4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007387E4, (uintptr_t)&func_0060478C, 0x000001FAu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007387C4, (uintptr_t)((char *)stk + 32), v1);
    uintptr_t ret1 = func_00114608(0x4B888889u, (uintptr_t)&func_0019B5EC);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x1u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070A6CC = ret1;
    data_00738A2C = 0x00000000u /* 0.0 f */;
    data_00738A30 = 0x3ECCCCCDu /* 0.4000000059604645 f */;
    data_00738A34 = 0xBECCCCCDu /* -0.4000000059604645 f */;
    func_004FC6FC((uintptr_t)&data_00738A38, 0x00000001u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
