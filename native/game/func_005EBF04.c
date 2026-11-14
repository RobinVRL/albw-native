/* USA 005EBF04 (EU 005EBEDC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 8 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00699110;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AF98;
extern uint32_t data_0070AF9C;
extern uint32_t data_0070AFA0;
extern uint32_t data_0070AFA4;
extern uint32_t data_0070AFA8;
extern uint32_t data_0070AFAC;
extern uint32_t data_00746838;
extern uint32_t data_0074683C;
extern uint32_t data_00746840;
extern uint32_t data_00746844;
extern uint32_t data_00746858;
extern uint32_t data_00746AA0;
extern uint32_t data_00746AC0;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DFAC(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608AC4(void);

static const char *const names_00746AA0[4] = {
    "fly_st",
    "fly",
    "damage",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005EBF04(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00746AA0, names_00746AA0, 4);
    data_0070AFA0 = 0xFFFFFFFFu;
    data_0070AFA4 = 0xFFFFFFFFu;
    data_0070AFA8 = 0x00000000u;
    data_0070AFAC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D4CCCCDu, (uintptr_t)&func_0011DFAC);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070AF9C = ret0;
    func_004FC6FC((uintptr_t)&data_00746AC0, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemySandBossChild";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\215\273\224\231\202\314\220_\223a\203{\203X\201i\216q\201j";
    data_00746838 = 0x00000000u;
    data_0074683C = 0x00000005u;
    data_00746840 = (uintptr_t)&data_00746844;
    uintptr_t v0 = data_0070AF98;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00699110 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00746838;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00746858, (uintptr_t)&func_00608AC4, 0x0000022Bu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00746838, (uintptr_t)((char *)stk + 32), v1);
}
