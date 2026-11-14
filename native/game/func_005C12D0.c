/* USA 005C12D0 (EU 005C12A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 17 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006A2CA4;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FA78;
extern uint32_t data_0070FA80;
extern uint32_t data_0070FA84;
extern uint32_t data_0070FA88;
extern uint32_t data_0070FA8C;
extern uint32_t data_007941D0;
extern uint32_t data_007941D4;
extern uint32_t data_007941D8;
extern uint32_t data_007941DC;
extern uint32_t data_007941F0;
extern uint32_t data_00794438;
extern uint32_t data_0079443C;
extern uint32_t data_00794440;
extern uint32_t data_00794444;
extern uint32_t data_00794458;
extern uint32_t data_007946A0;
extern uint32_t data_007946A4;
extern uint32_t data_007946A8;
extern uint32_t data_007946AC;
extern uint32_t data_007946B0;
extern uint32_t data_007946B4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060561C(void);


void func_005C12D0(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    data_0070FA80 = 0xFFFFFFFFu;
    data_0070FA84 = 0xFFFFFFFFu;
    data_0070FA88 = 0x00000000u;
    data_0070FA8C = 0x00000000u;
    data_007946A0 = 0x00000000u /* 0.0 f */;
    data_007946A4 = 0x00000000u /* 0.0 f */;
    data_007946A8 = 0x00000000u /* 0.0 f */;
    data_007946AC = 0x00000000u /* 0.0 f */;
    data_007946B0 = 0x3F000000u /* 0.5 f */;
    data_007946B4 = 0xBF800000u /* -1.0 f */;
    uintptr_t ret0 = func_00114608(0xCDAAAAABu, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007941D0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = (uintptr_t)&data_006A2CA4;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjTainonWall";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"^Cm²¯oµ";
    data_0070FA78 = ret0;
    data_007941D0 = 0x00000000u;
    data_007941D4 = 0x00000005u;
    data_007941D8 = (uintptr_t)&data_007941DC;
    func_0019B51C((uintptr_t)&data_007941F0, (uintptr_t)&func_0060561C, 0x00000263u, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00794438;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = (uintptr_t)&data_006A2CA4;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"EnemyTainonFake";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"^Cm(U)";
    data_00794438 = 0x00000000u;
    data_0079443C = 0x00000005u;
    data_00794440 = (uintptr_t)&data_00794444;
    func_0019B51C((uintptr_t)&data_00794458, (uintptr_t)&func_0060561C, 0x00000265u, (uintptr_t)((char *)stk + 32));
}
