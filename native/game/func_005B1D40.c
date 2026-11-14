/* USA 005B1D40 (EU 005B1D18): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (8 names), 14 other stores, 4 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069B148;
extern uint32_t data_0069B14C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B5E8;
extern uint32_t data_0070B5EC;
extern uint32_t data_0070B5F0;
extern uint32_t data_0070B5F8;
extern uint32_t data_0070B5FC;
extern uint32_t data_0070B600;
extern uint32_t data_0070B604;
extern uint32_t data_0074E00C;
extern uint32_t data_0074E010;
extern uint32_t data_0074E014;
extern uint32_t data_0074E018;
extern uint32_t data_0074E02C;
extern uint32_t data_0074E274;
extern uint32_t data_0074E278;
extern uint32_t data_0074E27C;
extern uint32_t data_0074E280;
extern uint32_t data_0074E294;
extern uint32_t data_0074E4DC;
extern uint32_t data_0074E51C;
extern uint32_t data_0074E520;
extern uint32_t data_0074E524;
extern uint32_t data_0074E528;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011E118(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006069AC(void);
void func_006075E8(void);

static const char *const names_0074E4DC[8] = {
    "appear",
    "attack",
    "damage",
    "dead",
    "disappear",
    "jitabata",
    "piyopiyo",
    "wait",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B1D40(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0074E4DC, names_0074E4DC, 8);
    data_0070B5F8 = 0xFFFFFFFFu;
    data_0070B5FC = 0xFFFFFFFFu;
    data_0070B600 = 0x00000000u;
    data_0070B604 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C638E39u, (uintptr_t)&func_0011E118);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B5F0 = ret0;
    data_0074E51C = 0x00000000u /* 0.0 f */;
    data_0074E520 = 0x3F000000u /* 0.5 f */;
    data_0074E524 = 0x3E99999Au /* 0.30000001192092896 f */;
    func_004FC6FC((uintptr_t)&data_0074E528, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyWizrobeFire";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203E\203B\203Y\203\215\201[\203u(\211\212)";
    data_0074E00C = 0x00000000u;
    data_0074E010 = 0x00000005u;
    data_0074E014 = (uintptr_t)&data_0074E018;
    uintptr_t v0 = data_0070B5E8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069B148 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074E00C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074E02C, (uintptr_t)&func_006075E8, 0x00000268u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074E00C, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyWizrobeIce";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203E\203B\203Y\203\215\201[\203u(\225X)";
    data_0074E274 = 0x00000000u;
    data_0074E278 = 0x00000005u;
    data_0074E27C = (uintptr_t)&data_0074E280;
    uintptr_t v2 = data_0070B5EC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_0069B14C : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074E274;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074E294, (uintptr_t)&func_006069AC, 0x00000269u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0074E274, (uintptr_t)((char *)stk + 48), v3);
}
