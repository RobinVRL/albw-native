/* USA 005DD098 (EU 005DD070): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 34 other stores, 10 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007087F0;
extern uint32_t data_007087F4;
extern uint32_t data_007087F8;
extern uint32_t data_007087FC;
extern uint32_t data_0072BFFC;
extern uint32_t data_0072C000;
extern uint32_t data_0072C004;
extern uint32_t data_0072C008;
extern uint32_t data_0072C01C;
extern uint32_t data_0072C264;
extern uint32_t data_0072C268;
extern uint32_t data_0072C26C;
extern uint32_t data_0072C270;
extern uint32_t data_0072C284;
extern uint32_t data_0072C4CC;
extern uint32_t data_0072C4D0;
extern uint32_t data_0072C4D4;
extern uint32_t data_0072C4D8;
extern uint32_t data_0072C4EC;
extern uint32_t data_0072C734;
extern uint32_t data_0072C738;
extern uint32_t data_0072C73C;
extern uint32_t data_0072C740;
extern uint32_t data_0072C754;
extern uint32_t data_0072C99C;
extern uint32_t data_0072C9A0;
extern uint32_t data_0072C9A4;
extern uint32_t data_0072C9A8;
extern uint32_t data_0072C9BC;
extern uint32_t data_0072CC04;
extern uint32_t data_0072CC08;
extern uint32_t data_0072CC0C;
extern uint32_t data_0072CC10;
extern uint32_t data_0072CC24;
extern uint32_t data_0072CE6C;
extern uint32_t data_0072CE70;
extern uint32_t data_0072CE74;
extern uint32_t data_0072CE78;
extern uint32_t data_0072CE8C;
extern uint32_t data_0072D0D4;
extern uint32_t data_0072D0D8;
extern uint32_t data_0072D0DC;
extern uint32_t data_0072D0E0;
extern uint32_t data_0072D0F4;
extern uint32_t data_0072D33C;
extern uint32_t data_0072D340;
extern uint32_t data_0072D344;
extern uint32_t data_0072D348;
extern uint32_t data_0072D35C;
extern uint32_t data_0072D5A4;
extern uint32_t data_0072D5A8;
extern uint32_t data_0072D5AC;
extern uint32_t data_0072D5B0;
extern uint32_t data_0072D5C4;
extern uint32_t data_0072D80C;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606700(void);
void func_00607424(void);
void func_00607460(void);
void func_006080C8(void);
void func_00608104(void);
void func_00608140(void);
void func_00608A20(void);
void func_00608FD4(void);
void func_00609010(void);
void func_0060904C(void);

static const char *const names_0072D80C[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005DD098(void) {
    uintptr_t stk[46];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072BFFC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaDropAppleTree";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"SºGA";
    fill_names((sead_SafeString *)&data_0072D80C, names_0072D80C, 4);
    data_007087F0 = 0xFFFFFFFFu;
    data_007087F4 = 0xFFFFFFFFu;
    data_007087F8 = 0x00000000u;
    data_007087FC = 0x00000000u;
    data_0072BFFC = 0x00000000u;
    data_0072C000 = 0x00000005u;
    data_0072C004 = (uintptr_t)&data_0072C008;
    func_0019B51C((uintptr_t)&data_0072C01C, (uintptr_t)&func_006080C8, 0x00000169u, (uintptr_t)((char *)stk + 16));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072C264;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"AreaDropKinStaTree";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"LX^ºGA";
    data_0072C264 = 0x00000000u;
    data_0072C268 = 0x00000005u;
    data_0072C26C = (uintptr_t)&data_0072C270;
    func_0019B51C((uintptr_t)&data_0072C284, (uintptr_t)&func_00608A20, 0x0000016Au, (uintptr_t)((char *)stk + 32));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072C4CC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"AreaDropOnSwitch";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"ËiXCb`IGA";
    data_0072C4CC = 0x00000000u;
    data_0072C4D0 = 0x00000005u;
    data_0072C4D4 = (uintptr_t)&data_0072C4D8;
    func_0019B51C((uintptr_t)&data_0072C4EC, (uintptr_t)&func_00607460, 0x0000016Bu, (uintptr_t)((char *)stk + 48));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072C734;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 72);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 64) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 68) = (uintptr_t)"AreaDropRupeeTree";
    *(uintptr_t *)((char *)stk + 72) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 76) = (uintptr_t)"s[ºGA";
    data_0072C734 = 0x00000000u;
    data_0072C738 = 0x00000005u;
    data_0072C73C = (uintptr_t)&data_0072C740;
    func_0019B51C((uintptr_t)&data_0072C754, (uintptr_t)&func_00608140, 0x0000016Cu, (uintptr_t)((char *)stk + 64));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072C99C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 88);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 80) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 84) = (uintptr_t)"AreaDropBombTree";
    *(uintptr_t *)((char *)stk + 88) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 92) = (uintptr_t)"oN_ºGA";
    data_0072C99C = 0x00000000u;
    data_0072C9A0 = 0x00000005u;
    data_0072C9A4 = (uintptr_t)&data_0072C9A8;
    func_0019B51C((uintptr_t)&data_0072C9BC, (uintptr_t)&func_00607424, 0x0000016Du, (uintptr_t)((char *)stk + 80));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072CC04;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 104);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 96) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 100) = (uintptr_t)"AreaDropFairyTree";
    *(uintptr_t *)((char *)stk + 104) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 108) = (uintptr_t)"d¸ºGA";
    data_0072CC04 = 0x00000000u;
    data_0072CC08 = 0x00000005u;
    data_0072CC0C = (uintptr_t)&data_0072CC10;
    func_0019B51C((uintptr_t)&data_0072CC24, (uintptr_t)&func_00608104, 0x0000016Eu, (uintptr_t)((char *)stk + 96));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072CE6C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 120);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 112) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 116) = (uintptr_t)"AreaDropBeeTree";
    *(uintptr_t *)((char *)stk + 120) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 124) = (uintptr_t)"n`ºGA";
    data_0072CE6C = 0x00000000u;
    data_0072CE70 = 0x00000005u;
    data_0072CE74 = (uintptr_t)&data_0072CE78;
    func_0019B51C((uintptr_t)&data_0072CE8C, (uintptr_t)&func_00606700, 0x0000016Fu, (uintptr_t)((char *)stk + 112));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072D0D4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 136);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 128) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 132) = (uintptr_t)"AreaDropRandom1Tree";
    *(uintptr_t *)((char *)stk + 136) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 140) = (uintptr_t)"_s[ºGA";
    data_0072D0D4 = 0x00000000u;
    data_0072D0D8 = 0x00000005u;
    data_0072D0DC = (uintptr_t)&data_0072D0E0;
    func_0019B51C((uintptr_t)&data_0072D0F4, (uintptr_t)&func_00608FD4, 0x00000170u, (uintptr_t)((char *)stk + 128));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072D33C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 152);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 144) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 148) = (uintptr_t)"AreaDropRandom2Tree";
    *(uintptr_t *)((char *)stk + 152) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 156) = (uintptr_t)"_ºGAid¸Èµj";
    data_0072D33C = 0x00000000u;
    data_0072D340 = 0x00000005u;
    data_0072D344 = (uintptr_t)&data_0072D348;
    func_0019B51C((uintptr_t)&data_0072D35C, (uintptr_t)&func_00609010, 0x00000171u, (uintptr_t)((char *)stk + 144));
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072D5A4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 168);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 160) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 164) = (uintptr_t)"AreaDropRandom3Tree";
    *(uintptr_t *)((char *)stk + 168) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 172) = (uintptr_t)"_ºGAid¸ èj";
    data_0072D5A4 = 0x00000000u;
    data_0072D5A8 = 0x00000005u;
    data_0072D5AC = (uintptr_t)&data_0072D5B0;
    func_0019B51C((uintptr_t)&data_0072D5C4, (uintptr_t)&func_0060904C, 0x00000172u, (uintptr_t)((char *)stk + 160));
}
