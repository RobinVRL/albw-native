/* USA 0059E00C (EU 0059DFE4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (34 names), 21 other stores, 6 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F468;
extern uint32_t data_0070F46C;
extern uint32_t data_0070F470;
extern uint32_t data_0070F474;
extern uint32_t data_0070F478;
extern uint32_t data_0070F480;
extern uint32_t data_0070F484;
extern uint32_t data_0070F488;
extern uint32_t data_0070F48C;
extern uint32_t data_00785D2C;
extern uint32_t data_00785E2C;
extern uint32_t data_00785E30;
extern uint32_t data_00785E34;
extern uint32_t data_00785E38;
extern uint32_t data_00785E4C;
extern uint32_t data_00786094;
extern uint32_t data_00786098;
extern uint32_t data_0078609C;
extern uint32_t data_007860A0;
extern uint32_t data_007860A4;
extern uint32_t data_007860A8;
extern uint32_t data_007860AC;
extern uint32_t data_007860B0;
extern uint32_t data_007860B4;
extern uint32_t data_007860B8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00117664(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AE34(void);

static const char *const names_00785D2C[32] = {
    "\202\310\202\265",
    "\214\225",
    "\217\202",
    "\213|",
    "\203u\201[\203\201\203\211\203\223",
    "\203o\203N\203_\203\223",
    "\203t\203@\203C\203\204\201[\203\215\203b\203h",
    "\203A\203C\203X\203\215\203b\203h",
    "\203T\203\223\203h\203\215\203b\203h",
    "\203g\203\213\203l\201[\203h\203\215\203b\203h",
    "\203n\203\223\203}\201[",
    "\203t\203b\203N\203V\203\207\203b\203g",
    "\203y\203K\203T\203X\203u\201[\203c",
    "\222\216\202\240\202\335",
    "\203J\203\223\203e\203\211",
    "\203q\203\223\203g\203\201\203K\203l",
    "\213\363\202\253\203r\203\223",
    "\220\324\202\255\202\267\202\350",
    "\211\251\203N\203X\203\212",
    "\216\207\203N\203X\203\212",
    "\220\302\203N\203X\203\212",
    "\227d\220\270",
    "\203n\203`",
    "\211\251\213\340\203n\203`",
    "\203_\203\212\203A\203\223",
    "\203h\203\215\203\223",
    "\203n\201[\203g",
    "\220\324\202\350\202\361\202\262",
    "\220\302\202\350\202\361\202\262",
    "\203\201\203b\203Z\201[\203W\203{\203g\203\213",
    "\213\215\223\373",
    "\217n\220\254\213\215\223\373",
};
static const char *const names_007860B8[2] = {
    "Fairy",
    "life",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059E00C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00785D2C, names_00785D2C, 32);
    data_0070F480 = 0xFFFFFFFFu;
    data_0070F484 = 0xFFFFFFFFu;
    data_0070F488 = 0x00000000u;
    data_0070F48C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4B6CA864u, (uintptr_t)&func_00117664);
    data_0070F468 = ret0;
    uintptr_t ret1 = func_00114608(0x4BA3D70Au, 0x00000000u);
    data_0070F46C = ret1;
    uintptr_t ret2 = func_00114608(0x4D2AAAABu, 0x00000000u);
    data_0070F470 = ret2;
    uintptr_t ret3 = func_00114608(0x4A91A2B4u, 0x00000000u);
    data_0070F474 = ret3;
    uintptr_t ret4 = func_00114608(0x4D638E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00785E2C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\227d\220\270";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjFairy";
    fill_names((sead_SafeString *)&data_007860B8, names_007860B8, 2);
    data_0070F478 = ret4;
    data_00785E2C = 0x00000000u;
    data_00785E30 = 0x00000005u;
    data_00785E34 = (uintptr_t)&data_00785E38;
    data_00786094 = 0xBE4CCCCDu /* -0.20000000298023224 f */;
    data_00786098 = 0x3FE66666u /* 1.7999999523162842 f */;
    data_0078609C = 0xBF000000u /* -0.5 f */;
    data_007860A0 = 0x3D4CCCCDu /* 0.05000000074505806 f */;
    data_007860A4 = 0x3D4CCCCDu /* 0.05000000074505806 f */;
    data_007860A8 = 0x00000000u /* 0.0 f */;
    data_007860AC = 0x3BA3D70Au /* 0.004999999888241291 f */;
    data_007860B0 = 0x3BA3D70Au /* 0.004999999888241291 f */;
    data_007860B4 = 0x00000000u /* 0.0 f */;
    func_0019B51C((uintptr_t)&data_00785E4C, (uintptr_t)&func_0060AE34, 0x00000042u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00785E2C, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
