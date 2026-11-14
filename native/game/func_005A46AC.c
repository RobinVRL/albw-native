/* USA 005A46AC (EU 005A4684): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (9 names), 18 other stores, 3 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006968A0;
extern uint32_t data_006968A4;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A8C8;
extern uint32_t data_0070A8CC;
extern uint32_t data_0070A8D0;
extern uint32_t data_0070A8D1;
extern uint32_t data_0070A8D2;
extern uint32_t data_0070A8D3;
extern uint32_t data_0070A8D4;
extern uint32_t data_0070A8D8;
extern uint32_t data_0070A8DC;
extern uint32_t data_0070A8E0;
extern uint32_t data_0070A8E4;
extern uint32_t data_0073C380;
extern uint32_t data_0073C384;
extern uint32_t data_0073C388;
extern uint32_t data_0073C38C;
extern uint32_t data_0073C3A0;
extern uint32_t data_0073C5E8;
extern uint32_t data_0073C5EC;
extern uint32_t data_0073C5F0;
extern uint32_t data_0073C5F4;
extern uint32_t data_0073C608;
extern uint32_t data_0073C850;
extern uint32_t data_0073C898;
extern uint32_t data_0073C89C;
extern uint32_t data_0073C8A0;
extern uint32_t data_0073C8A4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060279C(void);
void func_0060286C(void);

static const char *const names_0073C850[9] = {
    "wait",
    "run",
    "damage",
    "jitabata",
    "piyopiyo",
    "dead",
    "dead_st",
    "dead_ed",
    "jitabata_sand",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A46AC(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"EnemyGooze";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203O\201[\203Y";
    data_0070A8D8 = 0xFFFFFFFFu;
    data_0070A8DC = 0xFFFFFFFFu;
    data_0070A8E0 = 0x00000000u;
    data_0070A8E4 = 0x00000000u;
    data_0073C380 = 0x00000000u;
    data_0073C384 = 0x00000005u;
    data_0073C388 = (uintptr_t)&data_0073C38C;
    uintptr_t v0 = data_0070A8C8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006968A0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073C380;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073C3A0, (uintptr_t)&func_0060286C, 0x0000021Cu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0073C380, (uintptr_t)((char *)stk + 24), v1);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"EnemyGeeze";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203M\201[\203Y";
    data_0073C5E8 = 0x00000000u;
    data_0073C5EC = 0x00000005u;
    data_0073C5F0 = (uintptr_t)&data_0073C5F4;
    uintptr_t v2 = data_0070A8CC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_006968A4 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073C5E8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073C608, (uintptr_t)&func_0060279C, 0x0000025Du, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0073C5E8, (uintptr_t)((char *)stk + 40), v3);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)&data_0070A8D0;
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    fill_names((sead_SafeString *)&data_0073C850, names_0073C850, 9);
    *(uint8_t *)&data_0070A8D0 = 0x0u;
    *(uint8_t *)&data_0070A8D1 = 0x0u;
    *(uint8_t *)&data_0070A8D2 = 0x1u;
    *(uint8_t *)&data_0070A8D3 = 0xFFu;
    *(uint8_t *)&data_0070A8D4 = 0xFFu;
    data_0073C898 = 0x00000000u /* 0.0 f */;
    data_0073C89C = 0x3F000000u /* 0.5 f */;
    data_0073C8A0 = 0x00000000u /* 0.0 f */;
    func_004FC6FC((uintptr_t)&data_0073C8A4, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)&data_0070A8D0, 0x0000000Bu);
}
