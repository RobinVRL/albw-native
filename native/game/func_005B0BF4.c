/* USA 005B0BF4 (EU 005B0BCC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (17 names), 16 other stores, 4 calls, 4 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069A534;
extern uint32_t data_0069A538;
extern uint32_t data_0069A53C;
extern uint32_t data_0069A540;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B278;
extern uint32_t data_0070B27C;
extern uint32_t data_0070B280;
extern uint32_t data_0070B284;
extern uint32_t data_0070B288;
extern uint32_t data_0070B28C;
extern uint32_t data_0070B290;
extern uint32_t data_0070B294;
extern uint32_t data_007493AC;
extern uint32_t data_007493B0;
extern uint32_t data_007493B4;
extern uint32_t data_007493B8;
extern uint32_t data_007493CC;
extern uint32_t data_00749614;
extern uint32_t data_00749618;
extern uint32_t data_0074961C;
extern uint32_t data_00749620;
extern uint32_t data_00749634;
extern uint32_t data_0074987C;
extern uint32_t data_00749880;
extern uint32_t data_00749884;
extern uint32_t data_00749888;
extern uint32_t data_0074989C;
extern uint32_t data_00749AE4;
extern uint32_t data_00749AE8;
extern uint32_t data_00749AEC;
extern uint32_t data_00749AF0;
extern uint32_t data_00749B04;
extern uint32_t data_00749D4C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603A18(void);

static const char *const names_00749D4C[17] = {
    "archer_wait00",
    "archer_walk00",
    "archer_walk01",
    "archer_find00",
    "archer_kamae00",
    "archer_damage00",
    "archer_dead_front_st00",
    "archer_dead_front_ed00",
    "archer_dead_back_st00",
    "archer_dead_back_ed00",
    "archer_fall00",
    "archer_piyopiyo00",
    "archer_shot00",
    "archer_kusa_appear00",
    "archer_wait01",
    "bow_kamae00",
    "bow_shot00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B0BF4(void) {
    uintptr_t stk[22];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"EnemyShooterArrow";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225\272\216m(\225\\\201E\213|\226\356\201E\220\302)";
    fill_names((sead_SafeString *)&data_00749D4C, names_00749D4C, 17);
    data_0070B288 = 0xFFFFFFFFu;
    data_0070B28C = 0xFFFFFFFFu;
    data_0070B290 = 0x00000000u;
    data_0070B294 = 0x00000000u;
    data_007493AC = 0x00000000u;
    data_007493B0 = 0x00000005u;
    data_007493B4 = (uintptr_t)&data_007493B8;
    uintptr_t v0 = data_0070B278;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069A534 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007493AC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_007493CC, (uintptr_t)&func_00603A18, 0x00000213u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007493AC, (uintptr_t)((char *)stk + 24), v1);
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"EnemyShooterSpear";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\225\272\216m(\225\\\201E\223\212\221\204\201E\220\324)";
    data_00749614 = 0x00000000u;
    data_00749618 = 0x00000005u;
    data_0074961C = (uintptr_t)&data_00749620;
    uintptr_t v2 = data_0070B27C;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_0069A538 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00749614;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00749634, (uintptr_t)&func_00603A18, 0x00000214u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00749614, (uintptr_t)((char *)stk + 40), v3);
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"EnemyMoriblinShooterSpear";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\203\202\203\212\203u\203\212\203\223(\223\212\221\204)";
    data_0074987C = 0x00000000u;
    data_00749880 = 0x00000005u;
    data_00749884 = (uintptr_t)&data_00749888;
    uintptr_t v4 = data_0070B280;
    uintptr_t v5 = v4 == 0x0u ? (uintptr_t)&data_0069A53C : v4;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074987C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = v5;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074989C, (uintptr_t)&func_00603A18, 0x00000217u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_0074987C, (uintptr_t)((char *)stk + 56), v5);
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"EnemyShooterGreat";
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"\203\215\203E\203\211\203\213\225\272\216m(\223\212\221\204)";
    data_00749AE4 = 0x00000000u;
    data_00749AE8 = 0x00000005u;
    data_00749AEC = (uintptr_t)&data_00749AF0;
    uintptr_t v6 = data_0070B284;
    uintptr_t v7 = v6 == 0x0u ? (uintptr_t)&data_0069A540 : v6;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00749AE4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 72);
    *(uintptr_t *)((char *)stk + 8) = v7;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00749B04, (uintptr_t)&func_00603A18, 0x0000021Bu, (uintptr_t)((char *)stk + 64), (uintptr_t)&data_00749AE4, (uintptr_t)((char *)stk + 72), v7);
}
