/* USA 005A4EB0 (EU 005A4E88): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (5 names), 17 other stores, 7 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069745C;
extern uint32_t data_00697460;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070ABB0;
extern uint32_t data_0070ABB4;
extern uint32_t data_0070ABB8;
extern uint32_t data_0070ABBC;
extern uint32_t data_0070ABC0;
extern uint32_t data_0070ABC4;
extern uint32_t data_0070ABC8;
extern uint32_t data_0070ABCC;
extern uint32_t data_0070ABD0;
extern uint32_t data_0070ABD4;
extern uint32_t data_0074011C;
extern uint32_t data_00740120;
extern uint32_t data_00740124;
extern uint32_t data_00740128;
extern uint32_t data_0074013C;
extern uint32_t data_00740384;
extern uint32_t data_00740388;
extern uint32_t data_0074038C;
extern uint32_t data_00740390;
extern uint32_t data_007403A4;
extern uint32_t data_007405EC;
extern uint32_t data_00740614;
extern uint32_t data_00740618;
extern uint32_t data_0074061C;
extern uint32_t data_00740620;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DD0C(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060290C(void);

static const char *const names_007405EC[5] = {
    "fly00",
    "damage00",
    "wait00",
    "piyopiyo00",
    "dead00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A4EB0(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_007405EC, names_007405EC, 5);
    data_0070ABC8 = 0xFFFFFFFFu;
    data_0070ABCC = 0xFFFFFFFFu;
    data_0070ABD0 = 0x00000000u;
    data_0070ABD4 = 0x00000000u;
    data_00740614 = 0x00000000u /* 0.0 f */;
    data_00740618 = 0x3F000000u /* 0.5 f */;
    data_0074061C = 0xBF000000u /* -0.5 f */;
    uintptr_t ret0 = func_00114608(0x4D2AAAABu, (uintptr_t)&func_0011DD0C);
    data_0070ABB8 = ret0;
    uintptr_t ret1 = func_00114608(0x4EAAAAABu, 0x00000000u);
    data_0070ABBC = ret1;
    uintptr_t ret2 = func_00114608(0x4991A2B4u, 0x00000000u);
    data_0070ABC0 = ret2;
    uintptr_t ret3 = func_00114608(0x4C360B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070ABC4 = ret3;
    func_004FC6FC((uintptr_t)&data_00740620, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyKeese";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203L\201[\203X";
    data_0074011C = 0x00000000u;
    data_00740120 = 0x00000005u;
    data_00740124 = (uintptr_t)&data_00740128;
    uintptr_t v0 = data_0070ABB0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069745C : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074011C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074013C, (uintptr_t)&func_0060290C, 0x0000025Fu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074011C, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyChasupa";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203`\203\203\203X\203p";
    data_00740384 = 0x00000000u;
    data_00740388 = 0x00000005u;
    data_0074038C = (uintptr_t)&data_00740390;
    uintptr_t v2 = data_0070ABB4;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00697460 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00740384;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007403A4, (uintptr_t)&func_0060290C, 0x00000260u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_00740384, (uintptr_t)((char *)stk + 48), v3);
}
