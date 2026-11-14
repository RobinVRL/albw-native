/* USA 005B0428 (EU 005B0400): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (13 names), 13 other stores, 4 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00697630;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070ABF0;
extern uint32_t data_0070AC04;
extern uint32_t data_0070AC08;
extern uint32_t data_0070AC0C;
extern uint32_t data_0070AC10;
extern uint32_t data_0070AC14;
extern uint32_t data_0070AC18;
extern uint32_t data_0070AC1C;
extern uint32_t data_00740924;
extern uint32_t data_00740928;
extern uint32_t data_0074092C;
extern uint32_t data_00740930;
extern uint32_t data_00740944;
extern uint32_t data_00740B8C;
extern uint32_t data_00740BF4;
extern uint32_t data_00740BF8;
extern uint32_t data_00740BFC;
extern uint32_t data_00740C00;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00117BDC(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603998(void);

static const char *const names_00740B8C[13] = {
    "wait",
    "walk",
    "turn_st",
    "turn_ed",
    "fire_st",
    "fire_md",
    "fire_ed",
    "damage",
    "wait",
    "dead_st",
    "dead_ed",
    "piyopiyo",
    "jitabata",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B0428(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00740B8C, names_00740B8C, 13);
    data_0070AC10 = 0xFFFFFFFFu;
    data_0070AC14 = 0xFFFFFFFFu;
    data_0070AC18 = 0x00000000u;
    data_0070AC1C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E2AAAABu, (uintptr_t)&func_00117BDC);
    data_0070AC04 = ret0;
    data_0070AC08 = ret0;
    uintptr_t ret1 = func_00114608(0x4B360B61u, (uintptr_t)&data_0070AC08);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070AC0C = ret1;
    data_00740BF4 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00740BF8 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00740BFC = 0x40A66666u /* 5.199999809265137 f */;
    func_004FC6FC((uintptr_t)&data_00740C00, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyKodongo";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203R\203h\203\223\203S";
    data_00740924 = 0x00000000u;
    data_00740928 = 0x00000005u;
    data_0074092C = (uintptr_t)&data_00740930;
    uintptr_t v0 = data_0070ABF0;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00697630 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00740924;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00740944, (uintptr_t)&func_00603998, 0x00000246u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00740924, (uintptr_t)((char *)stk + 32), v1);
}
