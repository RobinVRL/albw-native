/* USA 005BB730 (EU 005BB708): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (13 names), 15 other stores, 6 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00696DD0;
extern uint32_t data_00696DD4;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AA68;
extern uint32_t data_0070AA6C;
extern uint32_t data_0070AA70;
extern uint32_t data_0070AA74;
extern uint32_t data_0070AA78;
extern uint32_t data_0070AA7C;
extern uint32_t data_0070AA80;
extern uint32_t data_0070AA84;
extern uint32_t data_0073E1D4;
extern uint32_t data_0073E1D8;
extern uint32_t data_0073E1DC;
extern uint32_t data_0073E1E0;
extern uint32_t data_0073E1F4;
extern uint32_t data_0073E43C;
extern uint32_t data_0073E440;
extern uint32_t data_0073E444;
extern uint32_t data_0073E448;
extern uint32_t data_0073E45C;
extern uint32_t data_0073E6A4;
extern uint32_t data_0073E70C;
extern uint32_t data_0073E754;
extern uint32_t data_0073E758;
extern uint32_t data_0073E75C;
extern uint32_t data_0073E760;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011A1A8(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC5F8(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006048A8(void);
void func_006090B4(void);

static const char *const names_0073E6A4[13] = {
    "wait",
    "jump",
    "dead",
    "piyopiyo",
    "jitabata",
    "lift",
    "wait_body",
    "jump_body",
    "dead_body",
    "piyopiyo_body",
    "jitabata_body",
    "lift_body",
    "bound",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BB730(void) {
    uintptr_t stk[24];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0073E6A4, names_0073E6A4, 13);
    data_0070AA78 = 0xFFFFFFFFu;
    data_0070AA7C = 0xFFFFFFFFu;
    data_0070AA80 = 0x00000000u;
    data_0070AA84 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4D2AAAABu, (uintptr_t)&func_0011A1A8);
    data_0070AA70 = ret0;
    uintptr_t ret1 = func_00114608(0x4C088889u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"HockBock_Head";
    *(uint8_t *)((char *)stk + 48) = 0x0u;
    *(uint8_t *)((char *)stk + 49) = 0x0u;
    *(uint8_t *)((char *)stk + 50) = 0x0u;
    *(uint8_t *)((char *)stk + 51) = 0xFFu;
    *(uint8_t *)((char *)stk + 52) = 0xFFu;
    data_0070AA74 = ret1;
    func_004FC5F8((uintptr_t)&data_0073E70C, (uintptr_t)((char *)stk + 24), 0x00000000u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 48), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"EnemyHockBock";
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"\203z\203b\203N\203{\203b\203N";
    data_0073E1D4 = 0x00000000u;
    data_0073E1D8 = 0x00000005u;
    data_0073E1DC = (uintptr_t)&data_0073E1E0;
    uintptr_t v0 = data_0070AA68;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00696DD0 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073E1D4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 64);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073E1F4, (uintptr_t)&func_006048A8, 0x00000253u, (uintptr_t)((char *)stk + 56), (uintptr_t)&data_0073E1D4, (uintptr_t)((char *)stk + 64), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyHockBockBullet";
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"\203z\203b\203N\203{\203b\203N\222e";
    data_0073E43C = 0x00000000u;
    data_0073E440 = 0x00000005u;
    data_0073E444 = (uintptr_t)&data_0073E448;
    uintptr_t v2 = data_0070AA6C;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_00696DD4 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0073E43C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 72);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073E45C, (uintptr_t)&func_006090B4, 0x00000254u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0073E43C, (uintptr_t)((char *)stk + 72), v3);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 32) = 0x0u;
    *(uint8_t *)((char *)stk + 33) = 0x0u;
    *(uint8_t *)((char *)stk + 34) = 0x0u;
    *(uint8_t *)((char *)stk + 35) = 0xFFu;
    *(uint8_t *)((char *)stk + 36) = 0xFFu;
    *(uintptr_t *)((char *)stk + 80) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 84) = (uintptr_t)"HockBock_Body";
    data_0073E754 = 0x00000000u /* 0.0 f */;
    data_0073E758 = 0x00000000u /* 0.0 f */;
    data_0073E75C = 0x00000000u /* 0.0 f */;
    func_004FC5F8((uintptr_t)&data_0073E760, (uintptr_t)((char *)stk + 80), 0x00000001u, 0x00000001u, 0x00000000u, (uintptr_t)((char *)stk + 32), 0x0000000Bu);
}
