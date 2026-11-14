/* USA 005BD02C (EU 005BD004): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (14 names), 69 other stores, 19 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069AE98;
extern uint32_t data_0069AE9C;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B548;
extern uint32_t data_0070B54C;
extern uint32_t data_0070B550;
extern uint32_t data_0070B554;
extern uint32_t data_0070B558;
extern uint32_t data_0070B55C;
extern uint32_t data_0070B560;
extern uint32_t data_0070B564;
extern uint32_t data_0070B568;
extern uint32_t data_0070B56C;
extern uint32_t data_0070B570;
extern uint32_t data_0070B574;
extern uint32_t data_0070B578;
extern uint32_t data_0070B57C;
extern uint32_t data_0070B580;
extern uint32_t data_0070B584;
extern uint32_t data_0070B588;
extern uint32_t data_0070B58C;
extern uint32_t data_0070B590;
extern uint32_t data_0070B594;
extern uint32_t data_0070B598;
extern uint32_t data_0070B59C;
extern uint32_t data_0070B5A0;
extern uint32_t data_0070B5A4;
extern uint32_t data_0070B5A8;
extern uint32_t data_0070B5B0;
extern uint32_t data_0070B5B4;
extern uint32_t data_0070B5B8;
extern uint32_t data_0070B5BC;
extern uint32_t data_0070B5C0;
extern uint32_t data_0074D454;
extern uint32_t data_0074D458;
extern uint32_t data_0074D45C;
extern uint32_t data_0074D460;
extern uint32_t data_0074D474;
extern uint32_t data_0074D6BC;
extern uint32_t data_0074D6C0;
extern uint32_t data_0074D6C4;
extern uint32_t data_0074D6C8;
extern uint32_t data_0074D6DC;
extern uint32_t data_0074D924;
extern uint32_t data_0074D98C;
extern uint32_t data_0074D990;
extern uint32_t data_0074D994;
extern uint32_t data_0074D998;
extern uint32_t data_0074D99C;
extern uint32_t data_0074D9A0;
extern uint32_t data_0074D9A4;
extern uint32_t data_0074D9A8;
extern uint32_t data_0074D9AC;
extern uint32_t data_0074D9B0;
extern uint32_t data_0074D9B4;
extern uint32_t data_0074D9B8;
extern uint32_t data_0074D9BC;
extern uint32_t data_0074D9C0;
extern uint32_t data_0074D9C4;
extern uint32_t data_0074D9C8;
extern uint32_t data_0074D9CC;
extern uint32_t data_0074D9D0;
extern uint32_t data_0074D9D4;
extern uint32_t data_0074D9D8;
extern uint32_t data_0074D9DC;
extern uint32_t data_0074D9E0;
extern uint32_t data_0074D9E4;
extern uint32_t data_0074D9E8;
extern uint32_t data_0074D9EC;
extern uint32_t data_0074D9F0;
extern uint32_t data_0074D9F4;
extern uint32_t data_0074D9F8;
extern uint32_t data_0074D9FC;
extern uint32_t data_0074DA00;
extern uint32_t data_0074DA04;
extern uint32_t data_0074DA08;
extern uint32_t data_0074DA0C;
extern uint32_t data_0074DA10;
extern uint32_t data_0074DA14;
extern uint32_t data_0074DA18;
extern uint32_t data_0074DA1C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00119F78(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604AE0(void);

static const char *const names_0070B5C0[1] = {
    "eye_scroll",
};
static const char *const names_0074D924[13] = {
    "wait",
    "beam_st",
    "beam_md",
    "beam_ed",
    "jump_st",
    "jump_md_up",
    "jump_md_wait",
    "jump_md_down",
    "jump_ed",
    "opening",
    "transform",
    "end_st",
    "end_ed",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BD02C(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070B5C0, names_0070B5C0, 1);
    fill_names((sead_SafeString *)&data_0074D924, names_0074D924, 13);
    data_0070B5B0 = 0xFFFFFFFFu;
    data_0070B5B4 = 0xFFFFFFFFu;
    data_0070B5B8 = 0x00000000u;
    data_0070B5BC = 0x00000000u;
    data_0074D98C = 0x00000000u /* 0.0 f */;
    data_0074D990 = 0xC0400000u /* -3.0 f */;
    data_0074D994 = 0xBF800000u /* -1.0 f */;
    data_0074D998 = 0x00000000u /* 0.0 f */;
    data_0074D99C = 0xC0400000u /* -3.0 f */;
    data_0074D9A0 = 0xBF800000u /* -1.0 f */;
    data_0074D9A4 = 0x00000000u /* 0.0 f */;
    data_0074D9A8 = 0xC0000000u /* -2.0 f */;
    data_0074D9AC = 0xBFC00000u /* -1.5 f */;
    data_0074D9B0 = 0x00000000u /* 0.0 f */;
    data_0074D9B4 = 0x00000000u /* 0.0 f */;
    data_0074D9B8 = 0x3F400000u /* 0.75 f */;
    data_0074D9BC = 0x00000000u /* 0.0 f */;
    data_0074D9C0 = 0x00000000u /* 0.0 f */;
    data_0074D9C4 = 0xBF800000u /* -1.0 f */;
    data_0074D9C8 = 0x00000000u /* 0.0 f */;
    data_0074D9CC = 0xBF800000u /* -1.0 f */;
    data_0074D9D0 = 0x3F000000u /* 0.5 f */;
    data_0074D9D4 = 0x00000000u /* 0.0 f */;
    data_0074D9D8 = 0x3F000000u /* 0.5 f */;
    data_0074D9DC = 0xBFC00000u /* -1.5 f */;
    data_0074D9E0 = 0x00000000u /* 0.0 f */;
    data_0074D9E4 = 0x3F000000u /* 0.5 f */;
    data_0074D9E8 = 0x3E800000u /* 0.25 f */;
    data_0074D9EC = 0x00000000u /* 0.0 f */;
    data_0074D9F0 = 0x3FC00000u /* 1.5 f */;
    data_0074D9F4 = 0xBE800000u /* -0.25 f */;
    data_0074D9F8 = 0x00000000u /* 0.0 f */;
    data_0074D9FC = 0x40200000u /* 2.5 f */;
    data_0074DA00 = 0xBE800000u /* -0.25 f */;
    uintptr_t ret0 = func_00114608(0xCE800000u, (uintptr_t)&func_00119F78);
    data_0070B550 = ret0;
    uintptr_t ret1 = func_00114608(0x4DCCCCCDu, 0x00000000u);
    data_0070B554 = ret1;
    uintptr_t ret2 = func_00114608(0x4E2AAAABu, 0x00000000u);
    data_0070B558 = ret2;
    uintptr_t ret3 = func_00114608(0xCE2AAAABu, 0x00000000u);
    data_0070B55C = ret3;
    uintptr_t ret4 = func_00114608(0x00000000u, 0x00000000u);
    data_0070B560 = ret4;
    uintptr_t ret5 = func_00114608(0x4E800000u, 0x00000000u);
    data_0070B564 = ret5;
    data_0074DA04 = 0x00000000u /* 0.0 f */;
    data_0074DA08 = 0xBFE00000u /* -1.75 f */;
    data_0074DA0C = 0x3FE00000u /* 1.75 f */;
    data_0074DA10 = 0x00000000u /* 0.0 f */;
    data_0074DA14 = 0x00000000u /* 0.0 f */;
    data_0074DA18 = 0x00000000u /* 0.0 f */;
    uintptr_t ret6 = func_00114608(0x4E8E38E4u, 0x00000000u);
    data_0070B568 = ret6;
    uintptr_t ret7 = func_00114608(0xCE416C17u, 0x00000000u);
    data_0070B56C = ret7;
    uintptr_t ret8 = func_00114608(0x4DAAAAABu, 0x00000000u);
    data_0070B570 = ret8;
    uintptr_t ret9 = func_00114608(0x4CE38E39u, 0x00000000u);
    data_0070B574 = ret9;
    data_0070B578 = ret9;
    uintptr_t ret10 = func_00114608(0x4BB60B61u, 0x00000000u);
    data_0070B57C = ret10;
    data_0070B580 = ret9;
    uintptr_t ret11 = func_00114608(0x48690453u, (uintptr_t)&data_0070B580);
    data_0070B584 = ret11;
    data_0070B588 = ret11;
    uintptr_t ret12 = func_00114608(0x4B360B61u, (uintptr_t)&data_0070B588);
    data_0070B58C = ret12;
    uintptr_t ret13 = func_00114608(0x4C088889u, 0x00000000u);
    data_0070B590 = ret13;
    data_0070B594 = ret9;
    uintptr_t ret14 = func_00114608(0x48E90453u, 0x00000000u);
    data_0070B598 = ret14;
    data_0070B59C = ret14;
    data_0070B5A0 = ret10;
    uintptr_t ret15 = func_00114608(0x4E000000u, (uintptr_t)&data_0070B59C);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x1u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B5A4 = ret15;
    data_0070B5A8 = ret9;
    func_004FC6FC((uintptr_t)&data_0074DA1C, 0x00000004u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyWirtBody";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203\217\201[\203g\226{\221\314";
    data_0074D454 = 0x00000000u;
    data_0074D458 = 0x00000005u;
    data_0074D45C = (uintptr_t)&data_0074D460;
    uintptr_t v0 = data_0070B548;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069AE98 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074D454;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074D474, (uintptr_t)&func_00604AE0, 0x0000023Eu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074D454, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyUraWirtBody";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\203\215\203E\203\211\203\213\227p\203\217\201[\203g\226{\221\314";
    data_0074D6BC = 0x00000000u;
    data_0074D6C0 = 0x00000005u;
    data_0074D6C4 = (uintptr_t)&data_0074D6C8;
    uintptr_t v2 = data_0070B54C;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_0069AE9C : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074D6BC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074D6DC, (uintptr_t)&func_00604AE0, 0x00000240u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0074D6BC, (uintptr_t)((char *)stk + 48), v3);
}
