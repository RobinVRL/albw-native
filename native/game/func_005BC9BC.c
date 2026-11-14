/* USA 005BC9BC (EU 005BC994): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (10 names), 9 other stores, 4 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069AB68;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B4E0;
extern uint32_t data_0070B4E4;
extern uint32_t data_0070B4E8;
extern uint32_t data_0070B4F0;
extern uint32_t data_0070B4F4;
extern uint32_t data_0070B4F8;
extern uint32_t data_0070B4FC;
extern uint32_t data_0070B500;
extern uint32_t data_0074CAF4;
extern uint32_t data_0074CAF8;
extern uint32_t data_0074CAFC;
extern uint32_t data_0074CB00;
extern uint32_t data_0074CB14;
extern uint32_t data_0074CD5C;
extern uint32_t data_0074CDA4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011E038(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604A88(void);

static const char *const names_0070B500[1] = {
    "Tektight",
};
static const char *const names_0074CD5C[9] = {
    "run",
    "jump_st",
    "jump",
    "jump_ed",
    "dead",
    "wait",
    "damage",
    "jitabata",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BC9BC(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyTektight";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203e\203N\203^\203C\203g";
    data_0070B4F0 = 0xFFFFFFFFu;
    data_0070B4F4 = 0xFFFFFFFFu;
    data_0070B4F8 = 0x00000000u;
    data_0070B4FC = 0x00000000u;
    data_0074CAF4 = 0x00000000u;
    data_0074CAF8 = 0x00000005u;
    data_0074CAFC = (uintptr_t)&data_0074CB00;
    uintptr_t v0 = data_0070B4E0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069AB68 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074CAF4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074CB14, (uintptr_t)&func_00604A88, 0x00000200u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074CAF4, (uintptr_t)((char *)stk + 32), v1);
    fill_names((sead_SafeString *)&data_0070B500, names_0070B500, 1);
    fill_names((sead_SafeString *)&data_0074CD5C, names_0074CD5C, 9);
    uintptr_t ret1 = func_00114608(0x4D638E39u, (uintptr_t)&func_0011E038);
    data_0070B4E4 = ret1;
    uintptr_t ret2 = func_00114608(0x4C360B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B4E8 = ret2;
    func_004FC6FC((uintptr_t)&data_0074CDA4, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
