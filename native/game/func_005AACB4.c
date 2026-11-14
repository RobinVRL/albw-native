/* USA 005AACB4 (EU 005AAC8C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (11 names), 12 other stores, 4 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069ABD8;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B508;
extern uint32_t data_0070B50C;
extern uint32_t data_0070B510;
extern uint32_t data_0070B518;
extern uint32_t data_0070B51C;
extern uint32_t data_0070B520;
extern uint32_t data_0070B524;
extern uint32_t data_0074CDEC;
extern uint32_t data_0074CDF0;
extern uint32_t data_0074CDF4;
extern uint32_t data_0074CDF8;
extern uint32_t data_0074CE0C;
extern uint32_t data_0074D054;
extern uint32_t data_0074D0AC;
extern uint32_t data_0074D0B0;
extern uint32_t data_0074D0B4;
extern uint32_t data_0074D0B8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011D104(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006031BC(void);

static const char *const names_0074D054[11] = {
    "wait",
    "fly_st",
    "fly_l",
    "damage",
    "damage",
    "piyopiyo",
    "dead",
    "attack_st",
    "attack",
    "attack_ed",
    "hover",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AACB4(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0074D054, names_0074D054, 11);
    data_0070B518 = 0xFFFFFFFFu;
    data_0070B51C = 0xFFFFFFFFu;
    data_0070B520 = 0x00000000u;
    data_0070B524 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D2AAAABu, (uintptr_t)&func_0011D104);
    data_0070B50C = ret0;
    data_0074D0AC = 0x40A00000u /* 5.0 f */;
    data_0074D0B0 = 0x00000000u /* 0.0 f */;
    data_0074D0B4 = 0x40200000u /* 2.5 f */;
    uintptr_t ret1 = func_00114608(0x4BB60B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B510 = ret1;
    func_004FC6FC((uintptr_t)&data_0074D0B8, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyTendol";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203e\203\223\203h\203\213";
    data_0074CDEC = 0x00000000u;
    data_0074CDF0 = 0x00000005u;
    data_0074CDF4 = (uintptr_t)&data_0074CDF8;
    uintptr_t v0 = data_0070B508;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069ABD8 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074CDEC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074CE0C, (uintptr_t)&func_006031BC, 0x0000024Fu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074CDEC, (uintptr_t)((char *)stk + 32), v1);
}
