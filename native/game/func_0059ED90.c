/* USA 0059ED90 (EU 0059ED68): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (10 names), 24 other stores, 8 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F710;
extern uint32_t data_0070F714;
extern uint32_t data_0070F718;
extern uint32_t data_0070F71C;
extern uint32_t data_0070F720;
extern uint32_t data_0070F724;
extern uint32_t data_0070F728;
extern uint32_t data_0070F72C;
extern uint32_t data_0070F730;
extern uint32_t data_0070F734;
extern uint32_t data_0070F738;
extern uint32_t data_0070F73C;
extern uint32_t data_0078B05C;
extern uint32_t data_0078B060;
extern uint32_t data_0078B064;
extern uint32_t data_0078B068;
extern uint32_t data_0078B07C;
extern uint32_t data_0078B2C4;
extern uint32_t data_0078B314;
extern uint32_t data_0078B318;
extern uint32_t data_0078B31C;
extern uint32_t data_0078B320;
extern uint32_t data_0078B324;
extern uint32_t data_0078B328;
extern uint32_t data_0078B32C;
extern uint32_t data_0078B330;
extern uint32_t data_0078B334;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_001169EC(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AEC4(void);

static const char *const names_0078B2C4[10] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "fly",
    "fly_talk",
    "fly_wait",
    "lower",
    "fly_wait",
    "lower",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059ED90(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0078B2C4, names_0078B2C4, 10);
    data_0070F730 = 0xFFFFFFFFu;
    data_0070F734 = 0xFFFFFFFFu;
    data_0070F738 = 0x00000000u;
    data_0070F73C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0xCE800000u, (uintptr_t)&func_001169EC);
    data_0070F710 = ret0;
    data_0078B314 = 0x3F333333u /* 0.699999988079071 f */;
    data_0078B318 = 0x40A00000u /* 5.0 f */;
    data_0078B31C = 0x00000000u /* 0.0 f */;
    uintptr_t ret1 = func_00114608(0x4A11A2B4u, 0x00000000u);
    data_0070F714 = ret1;
    uintptr_t ret2 = func_00114608(0x4B360B61u, 0x00000000u);
    data_0070F718 = ret2;
    data_0070F71C = ret2;
    uintptr_t ret3 = func_00114608(0x4D8E38E4u, (uintptr_t)&data_0070F71C);
    data_0070F720 = ret3;
    uintptr_t ret4 = func_00114608(0xCE000000u, 0x00000000u);
    data_0070F724 = ret4;
    uintptr_t ret5 = func_00114608(0x00000000u, 0x00000000u);
    data_0070F728 = ret5;
    uintptr_t ret6 = func_00114608(0x4BB60B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078B05C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203x\203\213\203\217\201[\203v\203\201\203C\203v\203\213";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjMaple";
    data_0070F72C = ret6;
    data_0078B05C = 0x00000000u;
    data_0078B060 = 0x00000005u;
    data_0078B064 = (uintptr_t)&data_0078B068;
    data_0078B320 = 0x00000000u /* 0.0 f */;
    data_0078B324 = 0xBE4CCCCDu /* -0.20000000298023224 f */;
    data_0078B328 = 0x00000000u /* 0.0 f */;
    data_0078B32C = 0xC0000000u /* -2.0 f */;
    data_0078B330 = 0x41A00000u /* 20.0 f */;
    data_0078B334 = 0x00000000u /* 0.0 f */;
    func_0019B51C((uintptr_t)&data_0078B07C, (uintptr_t)&func_0060AEC4, 0x00000015u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0078B05C, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
