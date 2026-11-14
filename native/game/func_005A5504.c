/* USA 005A5504 (EU 005A54DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 8 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00698588;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AE40;
extern uint32_t data_0070AE44;
extern uint32_t data_0070AE48;
extern uint32_t data_0070AE4C;
extern uint32_t data_0070AE50;
extern uint32_t data_0070AE54;
extern uint32_t data_007438F8;
extern uint32_t data_007438FC;
extern uint32_t data_00743900;
extern uint32_t data_00743904;
extern uint32_t data_00743918;
extern uint32_t data_00743B60;
extern uint32_t data_00743BA8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DC48(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602960(void);

static const char *const names_00743B60[9] = {
    "walk",
    "turn",
    "struggle",
    "struggle_ed",
    "return",
    "jitabata",
    "jitabata_ura",
    "piyopiyo",
    "piyopiyo_ura",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A5504(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyPamet";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203p\203\201\203b\203g";
    data_0070AE48 = 0xFFFFFFFFu;
    data_0070AE4C = 0xFFFFFFFFu;
    data_0070AE50 = 0x00000000u;
    data_0070AE54 = 0x00000000u;
    data_007438F8 = 0x00000000u;
    data_007438FC = 0x00000005u;
    data_00743900 = (uintptr_t)&data_00743904;
    uintptr_t v0 = data_0070AE40;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00698588 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007438F8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00743918, (uintptr_t)&func_00602960, 0x00000201u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007438F8, (uintptr_t)((char *)stk + 32), v1);
    fill_names((sead_SafeString *)&data_00743B60, names_00743B60, 9);
    uintptr_t ret1 = func_00114608(0x4C088889u, (uintptr_t)&func_0011DC48);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070AE44 = ret1;
    func_004FC6FC((uintptr_t)&data_00743BA8, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
