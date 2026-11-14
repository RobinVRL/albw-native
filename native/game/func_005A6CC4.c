/* USA 005A6CC4 (EU 005A6C9C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 19 other stores, 3 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006A1490;
extern uint32_t data_006A1494;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F4D8;
extern uint32_t data_0070F4DC;
extern uint32_t data_0070F4E0;
extern uint32_t data_0070F4E4;
extern uint32_t data_0070F4E8;
extern uint32_t data_0070F4EC;
extern uint32_t data_00786824;
extern uint32_t data_00786828;
extern uint32_t data_0078682C;
extern uint32_t data_00786830;
extern uint32_t data_00786844;
extern uint32_t data_00786A8C;
extern uint32_t data_00786A90;
extern uint32_t data_00786A94;
extern uint32_t data_00786A98;
extern uint32_t data_00786AAC;
extern uint32_t data_00786CF4;
extern uint32_t data_00786CF8;
extern uint32_t data_00786CFC;
extern uint32_t data_00786D00;
extern uint32_t data_00786D14;
extern uint32_t data_00786F5C;
extern uint32_t data_00786F60;
extern uint32_t data_00786F64;
extern uint32_t data_00786F68;
extern uint32_t data_00786F6C;
extern uint32_t data_00786F70;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602EC0(void);


void func_005A6CC4(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00786824;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjGoroIwa";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203S\203\215\212\342";
    data_0070F4E0 = 0xFFFFFFFFu;
    data_0070F4E4 = 0xFFFFFFFFu;
    data_0070F4E8 = 0x00000000u;
    data_0070F4EC = 0x00000000u;
    data_00786824 = 0x00000000u;
    data_00786828 = 0x00000005u;
    data_0078682C = (uintptr_t)&data_00786830;
    func_0019B51C((uintptr_t)&data_00786844, (uintptr_t)&func_00602EC0, 0x00000045u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00786824, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"ObjGoroIron";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203S\203\215\223S\213\205";
    data_00786A8C = 0x00000000u;
    data_00786A90 = 0x00000005u;
    data_00786A94 = (uintptr_t)&data_00786A98;
    uintptr_t v0 = data_0070F4D8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006A1490 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00786A8C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00786AAC, (uintptr_t)&func_00602EC0, 0x00000046u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00786A8C, (uintptr_t)((char *)stk + 40), v1);
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"ObjGoroNeedle";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\203S\203\215\202\306\202\260\223S\213\205";
    data_00786CF4 = 0x00000000u;
    data_00786CF8 = 0x00000005u;
    data_00786CFC = (uintptr_t)&data_00786D00;
    uintptr_t v2 = data_0070F4DC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_006A1494 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00786CF4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00786D14, (uintptr_t)&func_00602EC0, 0x00000047u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_00786CF4, (uintptr_t)((char *)stk + 56), v3);
    data_00786F5C = 0x00000000u /* 0.0 f */;
    data_00786F60 = 0x00000000u /* 0.0 f */;
    data_00786F64 = 0x00000000u /* 0.0 f */;
    data_00786F68 = 0x00000000u /* 0.0 f */;
    data_00786F6C = 0x00000000u /* 0.0 f */;
    data_00786F70 = 0x00000000u /* 0.0 f */;
}
