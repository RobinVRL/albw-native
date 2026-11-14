/* USA 005FE680 (EU 005FE658): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 16 other stores, 5 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D280;
extern uint32_t data_0070D284;
extern uint32_t data_0070D288;
extern uint32_t data_0070D290;
extern uint32_t data_0070D294;
extern uint32_t data_0070D298;
extern uint32_t data_0070D29C;
extern uint32_t data_007687C8;
extern uint32_t data_007687CC;
extern uint32_t data_007687D0;
extern uint32_t data_007687D4;
extern uint32_t data_007687E8;
extern uint32_t data_00768A30;
extern uint32_t data_00768A34;
extern uint32_t data_00768A38;
extern uint32_t data_00768A3C;
extern uint32_t data_00768A50;
extern uint32_t data_00768C98;
extern uint32_t data_00768C9C;
extern uint32_t data_00768CA0;
extern uint32_t data_00768CA4;
extern uint32_t data_00768CB8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0019B5EC(void);
void func_006031E8(void);
void func_0060A858(void);
void func_0060B184(void);


void func_005FE680(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007687C8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MapVRSimple";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202u\202q\201i\212\356\226{\201j";
    data_0070D290 = 0xFFFFFFFFu;
    data_0070D294 = 0xFFFFFFFFu;
    data_0070D298 = 0x00000000u;
    data_0070D29C = 0x00000000u;
    data_007687C8 = 0x00000000u;
    data_007687CC = 0x00000005u;
    data_007687D0 = (uintptr_t)&data_007687D4;
    func_0019B51C((uintptr_t)&data_007687E8, (uintptr_t)&func_006031E8, 0x0000015Fu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007687C8, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00768A30;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MapVRHera";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\202u\202q\201i\203w\203\211\202\314\223\203\201j";
    data_00768A30 = 0x00000000u;
    data_00768A34 = 0x00000005u;
    data_00768A38 = (uintptr_t)&data_00768A3C;
    func_0019B51C((uintptr_t)&data_00768A50, (uintptr_t)&func_0060B184, 0x00000160u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00768A30, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00768C98;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"MapVRSky";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\202u\202q\201i\213\363\201E\211~\223\233\201j";
    data_00768C98 = 0x00000000u;
    data_00768C9C = 0x00000005u;
    data_00768CA0 = (uintptr_t)&data_00768CA4;
    func_0019B51C((uintptr_t)&data_00768CB8, (uintptr_t)&func_0060A858, 0x00000161u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_00768C98, (uintptr_t)((char *)stk + 56), 0x00000000u);
    uintptr_t ret3 = func_00114608(0x4911A2B4u, (uintptr_t)&func_0019B5EC);
    data_0070D280 = ret3;
    uintptr_t ret4 = func_00114608(0x48690453u, 0x00000000u);
    data_0070D284 = ret4;
    data_0070D288 = ret3;
}
