/* USA 005CF6CC (EU 005CF6A4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (15 names), 21 other stores, 5 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F8E0;
extern uint32_t data_0070F8E4;
extern uint32_t data_0070F8E8;
extern uint32_t data_0070F8EC;
extern uint32_t data_0070F8F0;
extern uint32_t data_0070F8F8;
extern uint32_t data_0070F8FC;
extern uint32_t data_0070F900;
extern uint32_t data_0070F904;
extern uint32_t data_0070F908;
extern uint32_t data_0078EF18;
extern uint32_t data_0078EF1C;
extern uint32_t data_0078EF20;
extern uint32_t data_0078EF24;
extern uint32_t data_0078EF38;
extern uint32_t data_0078F180;
extern uint32_t data_0078F1F0;
extern uint32_t data_0078F1F4;
extern uint32_t data_0078F1F8;
extern uint32_t data_0078F1FC;
extern uint32_t data_0078F200;
extern uint32_t data_0078F204;
extern uint32_t data_0078F208;
extern uint32_t data_0078F20C;
extern uint32_t data_0078F210;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00117BA4(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607270(void);

static const char *const names_0070F908[1] = {
    "off",
};
static const char *const names_0078F180[14] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "wait",
    "carry",
    "carry_wait",
    "appear",
    "catch",
    "magic_hold",
    "magic_hold_loop",
    "wait_hold",
    "talk_hold",
    "step_carry",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005CF6CC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070F908, names_0070F908, 1);
    fill_names((sead_SafeString *)&data_0078F180, names_0078F180, 14);
    data_0070F8F8 = 0xFFFFFFFFu;
    data_0070F8FC = 0xFFFFFFFFu;
    data_0070F900 = 0x00000000u;
    data_0070F904 = 0x00000000u;
    data_0078F1F0 = 0x3F000000u /* 0.5 f */;
    data_0078F1F4 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_0078F1F8 = 0xBF99999Au /* -1.2000000476837158 f */;
    uintptr_t ret0 = func_00114608(0x4BB60B61u, (uintptr_t)&func_00117BA4);
    data_0070F8E0 = ret0;
    uintptr_t ret1 = func_00114608(0x4CE38E39u, 0x00000000u);
    data_0070F8E4 = ret1;
    uintptr_t ret2 = func_00114608(0x00000000u, 0x00000000u);
    data_0070F8E8 = ret2;
    data_0078F1FC = 0x00000000u /* 0.0 f */;
    data_0078F200 = 0x3FB33333u /* 1.399999976158142 f */;
    data_0078F204 = 0x00000000u /* 0.0 f */;
    uintptr_t ret3 = func_00114608(0xCBB60B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078EF18;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203[\203\213\203_\202\314\212G";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjPictureZelda";
    data_0070F8EC = ret3;
    data_0070F8F0 = ret2;
    data_0078EF18 = 0x00000000u;
    data_0078EF1C = 0x00000005u;
    data_0078EF20 = (uintptr_t)&data_0078EF24;
    data_0078F208 = 0x00000000u /* 0.0 f */;
    data_0078F20C = 0x00000000u /* 0.0 f */;
    data_0078F210 = 0x40400000u /* 3.0 f */;
    func_0019B51C((uintptr_t)&data_0078EF38, (uintptr_t)&func_00607270, 0x00000085u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0078EF18, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
