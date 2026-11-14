/* USA 005B190C (EU 005B18E4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (11 names), 26 other stores, 11 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069A93C;
extern uint32_t data_0069A940;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B458;
extern uint32_t data_0070B45C;
extern uint32_t data_0070B460;
extern uint32_t data_0070B464;
extern uint32_t data_0070B468;
extern uint32_t data_0070B46C;
extern uint32_t data_0070B470;
extern uint32_t data_0070B474;
extern uint32_t data_0070B478;
extern uint32_t data_0070B480;
extern uint32_t data_0070B484;
extern uint32_t data_0070B488;
extern uint32_t data_0070B48C;
extern uint32_t data_0074BD0C;
extern uint32_t data_0074BD10;
extern uint32_t data_0074BD14;
extern uint32_t data_0074BD18;
extern uint32_t data_0074BD2C;
extern uint32_t data_0074BF74;
extern uint32_t data_0074BF78;
extern uint32_t data_0074BF7C;
extern uint32_t data_0074BF80;
extern uint32_t data_0074BF94;
extern uint32_t data_0074C1DC;
extern uint32_t data_0074C234;
extern uint32_t data_0074C238;
extern uint32_t data_0074C23C;
extern uint32_t data_0074C240;
extern uint32_t data_0074C244;
extern uint32_t data_0074C248;
extern uint32_t data_0074C24C;
extern uint32_t data_0074C294;
extern uint32_t data_0074C298;
extern uint32_t data_0074C29C;
extern uint32_t data_0074C2A0;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00118898(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC788(void);
void func_00603A70(void);
void func_006075BC(void);

static const char *const names_0074C1DC[11] = {
    "wait",
    "walk",
    "run",
    "jump_st",
    "jump_ed",
    "damage",
    "throw",
    "jitabata",
    "piyopiyo",
    "revival",
    "asunder",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B190C(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"EnemyStalfos";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203X\203^\203\213\203t\203H\203X";
    data_0070B480 = 0xFFFFFFFFu;
    data_0070B484 = 0xFFFFFFFFu;
    data_0070B488 = 0x00000000u;
    data_0070B48C = 0x00000000u;
    data_0074BD0C = 0x00000000u;
    data_0074BD10 = 0x00000005u;
    data_0074BD14 = (uintptr_t)&data_0074BD18;
    uintptr_t v0 = data_0070B458;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069A93C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074BD0C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074BD2C, (uintptr_t)&func_00603A70, 0x000001FEu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0074BD0C, (uintptr_t)((char *)stk + 40), v1);
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"EnemyStalfosBone";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\203X\203^\203\213\203t\203H\203X\215\234";
    data_0074BF74 = 0x00000000u;
    data_0074BF78 = 0x00000005u;
    data_0074BF7C = (uintptr_t)&data_0074BF80;
    uintptr_t v2 = data_0070B45C;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_0069A940 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074BF74;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074BF94, (uintptr_t)&func_006075BC, 0x000001FFu, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_0074BF74, (uintptr_t)((char *)stk + 56), v3);
    fill_names((sead_SafeString *)&data_0074C1DC, names_0074C1DC, 11);
    uintptr_t ret2 = func_00114608(0x4EC00000u, (uintptr_t)&func_00118898);
    data_0070B460 = ret2;
    uintptr_t ret3 = func_00114608(0x4C088889u, 0x00000000u);
    data_0070B464 = ret3;
    data_0074C234 = 0x00000000u /* 0.0 f */;
    data_0074C238 = 0x3FC00000u /* 1.5 f */;
    data_0074C23C = 0xBF4CCCCDu /* -0.800000011920929 f */;
    uintptr_t ret4 = func_00114608(0x4BC83FB8u, 0x00000000u);
    data_0070B468 = ret4;
    data_0074C240 = 0xBE99999Au /* -0.30000001192092896 f */;
    data_0074C244 = 0x00000000u /* 0.0 f */;
    data_0074C248 = 0x3F333333u /* 0.699999988079071 f */;
    uintptr_t ret5 = func_00114608(0x4D2AAAABu, 0x00000000u);
    data_0070B46C = ret5;
    uintptr_t ret6 = func_00114608(0x4E000000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B470 = ret6;
    func_004FC6FC((uintptr_t)&data_0074C24C, 0x00000001u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    data_0074C294 = 0x00000000u /* 0.0 f */;
    data_0074C298 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_0074C29C = 0x3E4CCCCDu /* 0.20000000298023224 f */;
    uintptr_t ret8 = func_00114608(0x4D82D82Eu, (uintptr_t)&func_004FC788);
    data_0070B474 = ret8;
    uintptr_t ret9 = func_00114608(0x4DAAAAABu, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000001u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 24) = 0x0u;
    *(uint8_t *)((char *)stk + 25) = 0x0u;
    *(uint8_t *)((char *)stk + 26) = 0x0u;
    *(uint8_t *)((char *)stk + 27) = 0xFFu;
    *(uint8_t *)((char *)stk + 28) = 0xFFu;
    data_0070B478 = ret9;
    func_004FC6FC((uintptr_t)&data_0074C2A0, 0x00000001u, 0x00000000u, 0x00000000u, 0x00000001u, (uintptr_t)((char *)stk + 24), 0x0000000Bu);
}
