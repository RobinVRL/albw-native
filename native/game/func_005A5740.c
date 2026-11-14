/* USA 005A5740 (EU 005A5718): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (7 names), 10 other stores, 3 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698678;
extern uint32_t data_0069867C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AE78;
extern uint32_t data_0070AE7C;
extern uint32_t data_0070AE80;
extern uint32_t data_0070AE84;
extern uint32_t data_0070AE88;
extern uint32_t data_0070AE8C;
extern uint32_t data_00743EC8;
extern uint32_t data_00743ECC;
extern uint32_t data_00743ED0;
extern uint32_t data_00743ED4;
extern uint32_t data_00743EE8;
extern uint32_t data_00744130;
extern uint32_t data_00744134;
extern uint32_t data_00744138;
extern uint32_t data_0074413C;
extern uint32_t data_00744150;
extern uint32_t data_00744398;
extern uint32_t data_007443D0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060298C(void);
void func_0060A6A8(void);

static const char *const names_00744398[7] = {
    "wait",
    "walk",
    "run",
    "damage",
    "jitabata",
    "piyopiyo",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A5740(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_00744398, names_00744398, 7);
    data_0070AE80 = 0xFFFFFFFFu;
    data_0070AE84 = 0xFFFFFFFFu;
    data_0070AE88 = 0x00000000u;
    data_0070AE8C = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_007443D0, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyPeace";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203s\201[\203X";
    data_00743EC8 = 0x00000000u;
    data_00743ECC = 0x00000005u;
    data_00743ED0 = (uintptr_t)&data_00743ED4;
    uintptr_t v0 = data_0070AE78;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698678 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00743EC8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00743EE8, (uintptr_t)&func_0060298C, 0x00000242u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00743EC8, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyGoo";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203O\201[";
    data_00744130 = 0x00000000u;
    data_00744134 = 0x00000005u;
    data_00744138 = (uintptr_t)&data_0074413C;
    uintptr_t v2 = data_0070AE7C;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_0069867C : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00744130;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00744150, (uintptr_t)&func_0060A6A8, 0x00000243u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00744130, (uintptr_t)((char *)stk + 48), v3);
}
