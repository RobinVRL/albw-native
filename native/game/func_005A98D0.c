/* USA 005A98D0 (EU 005A98A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (6 names), 11 other stores, 4 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00695B74;
extern uint32_t data_00695B78;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A728;
extern uint32_t data_0070A72C;
extern uint32_t data_0070A730;
extern uint32_t data_0070A738;
extern uint32_t data_0070A73C;
extern uint32_t data_0070A740;
extern uint32_t data_0070A744;
extern uint32_t data_007395E4;
extern uint32_t data_007395E8;
extern uint32_t data_007395EC;
extern uint32_t data_007395F0;
extern uint32_t data_00739604;
extern uint32_t data_0073984C;
extern uint32_t data_00739850;
extern uint32_t data_00739854;
extern uint32_t data_00739858;
extern uint32_t data_0073986C;
extern uint32_t data_00739AB4;
extern uint32_t data_00739AE4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011E01C(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060307C(void);

static const char *const names_00739AB4[6] = {
    "wait",
    "fly",
    "fly",
    "damage",
    "dead",
    "piyopiyo",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A98D0(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00739AB4, names_00739AB4, 6);
    data_0070A738 = 0xFFFFFFFFu;
    data_0070A73C = 0xFFFFFFFFu;
    data_0070A740 = 0x00000000u;
    data_0070A744 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D2AAAABu, (uintptr_t)&func_0011E01C);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070A730 = ret0;
    func_004FC6FC((uintptr_t)&data_00739AE4, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyCrowly";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203N\203\215\203E\203\212\201[";
    data_007395E4 = 0x00000000u;
    data_007395E8 = 0x00000005u;
    data_007395EC = (uintptr_t)&data_007395F0;
    uintptr_t v0 = data_0070A728;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00695B74 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007395E4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00739604, (uintptr_t)&func_0060307C, 0x00000205u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007395E4, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyKyune";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203L\203\205\201[\203l";
    data_0073984C = 0x00000000u;
    data_00739850 = 0x00000005u;
    data_00739854 = (uintptr_t)&data_00739858;
    uintptr_t v2 = data_0070A72C;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00695B78 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073984C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073986C, (uintptr_t)&func_0060307C, 0x00000206u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073984C, (uintptr_t)((char *)stk + 48), v3);
}
