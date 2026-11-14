/* USA 005B202C (EU 005B2004): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (13 names), 15 other stores, 5 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069B1D4;
extern uint32_t data_0069B1D8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B608;
extern uint32_t data_0070B60C;
extern uint32_t data_0070B610;
extern uint32_t data_0070B614;
extern uint32_t data_0070B618;
extern uint32_t data_0070B61C;
extern uint32_t data_0070B620;
extern uint32_t data_0070B624;
extern uint32_t data_0070B628;
extern uint32_t data_0074E570;
extern uint32_t data_0074E574;
extern uint32_t data_0074E578;
extern uint32_t data_0074E57C;
extern uint32_t data_0074E590;
extern uint32_t data_0074E7D8;
extern uint32_t data_0074E7DC;
extern uint32_t data_0074E7E0;
extern uint32_t data_0074E7E4;
extern uint32_t data_0074E7F8;
extern uint32_t data_0074EA40;
extern uint32_t data_0074EAA0;
extern uint32_t data_0074EAA4;
extern uint32_t data_0074EAA8;
extern uint32_t data_0074EAAC;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00117A54(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603A9C(void);

static const char *const names_0070B628[1] = {
    "Zazakku",
};
static const char *const names_0074EA40[12] = {
    "wait0",
    "wait1",
    "walk0",
    "walk1",
    "find",
    "fall",
    "piyopiyo",
    "damage",
    "dead_st",
    "dead_ed",
    "appear",
    "catch",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B202C(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070B628, names_0070B628, 1);
    fill_names((sead_SafeString *)&data_0074EA40, names_0074EA40, 12);
    data_0070B618 = 0xFFFFFFFFu;
    data_0070B61C = 0xFFFFFFFFu;
    data_0070B620 = 0x00000000u;
    data_0070B624 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E638E39u, (uintptr_t)&func_00117A54);
    data_0070B610 = ret0;
    uintptr_t ret1 = func_00114608(0x4E000000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B614 = ret1;
    data_0074EAA0 = 0x00000000u /* 0.0 f */;
    data_0074EAA4 = 0x3ECCCCCDu /* 0.4000000059604645 f */;
    data_0074EAA8 = 0xBECCCCCDu /* -0.4000000059604645 f */;
    func_004FC6FC((uintptr_t)&data_0074EAAC, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyZazakku";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203U\201[\203U\203b\203N(\220\302)";
    data_0074E570 = 0x00000000u;
    data_0074E574 = 0x00000005u;
    data_0074E578 = (uintptr_t)&data_0074E57C;
    uintptr_t v0 = data_0070B608;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069B1D4 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074E570;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074E590, (uintptr_t)&func_00603A9C, 0x00000234u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074E570, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyZazakkuRed";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203U\201[\203U\203b\203N(\220\324)";
    data_0074E7D8 = 0x00000000u;
    data_0074E7DC = 0x00000005u;
    data_0074E7E0 = (uintptr_t)&data_0074E7E4;
    uintptr_t v2 = data_0070B60C;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_0069B1D8 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074E7D8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074E7F8, (uintptr_t)&func_00603A9C, 0x00000235u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0074E7D8, (uintptr_t)((char *)stk + 48), v3);
}
