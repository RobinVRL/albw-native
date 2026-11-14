/* USA 0059AC6C (EU 0059AC44): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 23 other stores, 10 calls, 5 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006986D8;
extern uint32_t data_006986DC;
extern uint32_t data_006986E0;
extern uint32_t data_006986E4;
extern uint32_t data_006986E8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AE90;
extern uint32_t data_0070AE94;
extern uint32_t data_0070AE98;
extern uint32_t data_0070AE9C;
extern uint32_t data_0070AEA0;
extern uint32_t data_0070AEA4;
extern uint32_t data_0070AEA8;
extern uint32_t data_0070AEAC;
extern uint32_t data_0070AEB0;
extern uint32_t data_0070AEB8;
extern uint32_t data_0070AEBC;
extern uint32_t data_0070AEC0;
extern uint32_t data_0070AEC4;
extern uint32_t data_00744418;
extern uint32_t data_0074441C;
extern uint32_t data_00744420;
extern uint32_t data_00744424;
extern uint32_t data_00744438;
extern uint32_t data_00744680;
extern uint32_t data_00744684;
extern uint32_t data_00744688;
extern uint32_t data_0074468C;
extern uint32_t data_007446A0;
extern uint32_t data_007448E8;
extern uint32_t data_007448EC;
extern uint32_t data_007448F0;
extern uint32_t data_007448F4;
extern uint32_t data_00744908;
extern uint32_t data_00744B50;
extern uint32_t data_00744B54;
extern uint32_t data_00744B58;
extern uint32_t data_00744B5C;
extern uint32_t data_00744B70;
extern uint32_t data_00744DB8;
extern uint32_t data_00744DBC;
extern uint32_t data_00744DC0;
extern uint32_t data_00744DC4;
extern uint32_t data_00744DD8;
extern uint32_t data_00745020;
extern uint32_t data_00745068;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_001187B8(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006027D8(void);
void func_00605888(void);
void func_006068F0(void);
void func_0060823C(void);
void func_0060A6E0(void);

static const char *const names_00745020[9] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "move00",
    "appeal00",
    "piyopiyo00",
    "damage00",
    "dead00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059AC6C(void) {
    uintptr_t stk[28];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00745020, names_00745020, 9);
    data_0070AEB8 = 0xFFFFFFFFu;
    data_0070AEBC = 0xFFFFFFFFu;
    data_0070AEC0 = 0x00000000u;
    data_0070AEC4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E2AAAABu, (uintptr_t)&func_001187B8);
    data_0070AEA4 = ret0;
    uintptr_t ret1 = func_00114608(0x4C638E39u, 0x00000000u);
    data_0070AEA8 = ret1;
    uintptr_t ret2 = func_00114608(0x4D638E39u, 0x00000000u);
    data_0070AEAC = ret2;
    uintptr_t ret3 = func_00114608(0x4C360B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070AEB0 = ret3;
    func_004FC6FC((uintptr_t)&data_00745068, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyGraveyardPoe";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\225\346\217\352\203|\203D";
    data_00744418 = 0x00000000u;
    data_0074441C = 0x00000005u;
    data_00744420 = (uintptr_t)&data_00744424;
    uintptr_t v0 = data_0070AE90;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006986D8 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00744418;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00744438, (uintptr_t)&func_0060823C, 0x00000239u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00744418, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyForestPoe";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\226\300\202\242\202\314\220X\203|\203D";
    data_00744680 = 0x00000000u;
    data_00744684 = 0x00000005u;
    data_00744688 = (uintptr_t)&data_0074468C;
    uintptr_t v2 = data_0070AE94;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_006986DC : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00744680;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007446A0, (uintptr_t)&func_00605888, 0x0000023Au, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00744680, (uintptr_t)((char *)stk + 48), v3);
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"EnemyHyu";
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"\203q\203\205\201[";
    data_007448E8 = 0x00000000u;
    data_007448EC = 0x00000005u;
    data_007448F0 = (uintptr_t)&data_007448F4;
    uintptr_t v4 = data_0070AE98;
    uintptr_t v5 = v4 == 0x0u ? (uintptr_t)&data_006986E0 : v4;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007448E8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 64);
    *(uintptr_t *)((char *)stk + 8) = v5;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00744908, (uintptr_t)&func_0060A6E0, 0x0000023Bu, (uintptr_t)((char *)stk + 56), (uintptr_t)&data_007448E8, (uintptr_t)((char *)stk + 64), v5);
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"EnemyGhini";
    *(uintptr_t *)((char *)stk + 80) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 84) = (uintptr_t)"\203M\201[\203j";
    data_00744B50 = 0x00000000u;
    data_00744B54 = 0x00000005u;
    data_00744B58 = (uintptr_t)&data_00744B5C;
    uintptr_t v6 = data_0070AE9C;
    uintptr_t v7 = v6 == 0x0u ? (uintptr_t)&data_006986E4 : v6;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00744B50;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 80);
    *(uintptr_t *)((char *)stk + 8) = v7;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00744B70, (uintptr_t)&func_006027D8, 0x0000023Cu, (uintptr_t)((char *)stk + 72), (uintptr_t)&data_00744B50, (uintptr_t)((char *)stk + 80), v7);
    *(uintptr_t *)((char *)stk + 88) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 92) = (uintptr_t)"EnemyLightGhini";
    *(uintptr_t *)((char *)stk + 96) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 100) = (uintptr_t)"\203M\201[\203j\201i\214\365\201j";
    data_00744DB8 = 0x00000000u;
    data_00744DBC = 0x00000005u;
    data_00744DC0 = (uintptr_t)&data_00744DC4;
    uintptr_t v8 = data_0070AEA0;
    uintptr_t v9 = v8 == 0x0u ? (uintptr_t)&data_006986E8 : v8;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00744DB8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 96);
    *(uintptr_t *)((char *)stk + 8) = v9;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00744DD8, (uintptr_t)&func_006068F0, 0x0000023Du, (uintptr_t)((char *)stk + 88), (uintptr_t)&data_00744DB8, (uintptr_t)((char *)stk + 96), v9);
}
