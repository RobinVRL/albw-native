/* USA 005AF540 (EU 005AF518): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (30 names), 14 other stores, 4 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00695CD8;
extern uint32_t data_00695CDC;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A768;
extern uint32_t data_0070A76C;
extern uint32_t data_0070A770;
extern uint32_t data_0070A778;
extern uint32_t data_0070A77C;
extern uint32_t data_0070A780;
extern uint32_t data_0070A784;
extern uint32_t data_00739E3C;
extern uint32_t data_00739E40;
extern uint32_t data_00739E44;
extern uint32_t data_00739E48;
extern uint32_t data_00739E5C;
extern uint32_t data_0073A0A4;
extern uint32_t data_0073A0A8;
extern uint32_t data_0073A0AC;
extern uint32_t data_0073A0B0;
extern uint32_t data_0073A0C4;
extern uint32_t data_0073A30C;
extern uint32_t data_0073A3FC;
extern uint32_t data_0073A400;
extern uint32_t data_0073A404;
extern uint32_t data_0073A408;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011A7E4(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006038F0(void);

static const char *const names_0073A30C[30] = {
    "DeguTail1",
    "DeguTail2",
    "DeguTail3",
    "wait01",
    "wait11",
    "op01",
    "damage_hit01",
    "damage01",
    "piyo01",
    "end01",
    "wait02",
    "wait12",
    "op02",
    "damage_hit02",
    "damage02",
    "piyo02",
    "end02",
    "wait03",
    "wait13",
    "op03",
    "damage_hit03",
    "damage03",
    "piyo03",
    "end03",
    "damage_color01",
    "end01",
    "damage_color02",
    "end02",
    "damage_color03",
    "end03",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AF540(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073A30C, names_0073A30C, 30);
    data_0070A778 = 0xFFFFFFFFu;
    data_0070A77C = 0xFFFFFFFFu;
    data_0070A780 = 0x00000000u;
    data_0070A784 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C638E39u, (uintptr_t)&func_0011A7E4);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070A770 = ret0;
    data_0073A3FC = 0x00000000u /* 0.0 f */;
    data_0073A400 = 0x00000000u /* 0.0 f */;
    data_0073A404 = 0x00000000u /* 0.0 f */;
    func_004FC5F8((uintptr_t)&data_0073A408, (uintptr_t)&data_0073A30C, 0x00000004u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyDegTail";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203f\203O\203e\201[\203\213";
    data_00739E3C = 0x00000000u;
    data_00739E40 = 0x00000005u;
    data_00739E44 = (uintptr_t)&data_00739E48;
    uintptr_t v0 = data_0070A768;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00695CD8 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00739E3C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00739E5C, (uintptr_t)&func_006038F0, 0x00000209u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00739E3C, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyDegTail2";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203f\203O\203e\201[\203\213\202Q";
    data_0073A0A4 = 0x00000000u;
    data_0073A0A8 = 0x00000005u;
    data_0073A0AC = (uintptr_t)&data_0073A0B0;
    uintptr_t v2 = data_0070A76C;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00695CDC : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073A0A4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073A0C4, (uintptr_t)&func_006038F0, 0x0000020Au, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073A0A4, (uintptr_t)((char *)stk + 48), v3);
}
