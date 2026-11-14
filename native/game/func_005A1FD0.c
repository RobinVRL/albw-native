/* USA 005A1FD0 (EU 005A1FA8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 26 other stores, 7 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C1B8;
extern uint32_t data_0070C1BC;
extern uint32_t data_0070C1C0;
extern uint32_t data_0070C1C4;
extern uint32_t data_0070C1C8;
extern uint32_t data_0070C1CC;
extern uint32_t data_0070C1D0;
extern uint32_t data_0070C1D8;
extern uint32_t data_0070C1DC;
extern uint32_t data_0070C1E0;
extern uint32_t data_0070C1E4;
extern uint32_t data_0075D29C;
extern uint32_t data_0075D2A0;
extern uint32_t data_0075D2A4;
extern uint32_t data_0075D2A8;
extern uint32_t data_0075D2BC;
extern uint32_t data_0075D504;
extern uint32_t data_0075D514;
extern uint32_t data_0075D518;
extern uint32_t data_0075D51C;
extern uint32_t data_0075D520;
extern uint32_t data_0075D524;
extern uint32_t data_0075D528;
extern uint32_t data_0075D52C;
extern uint32_t data_0075D530;
extern uint32_t data_0075D534;
extern uint32_t data_0075D538;
extern uint32_t data_0075D53C;
extern uint32_t data_0075D540;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116C38(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B2CC(void);

static const char *const names_0075D504[2] = {
    "fire",
    "ice",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A1FD0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0075D504, names_0075D504, 2);
    data_0070C1D8 = 0xFFFFFFFFu;
    data_0070C1DC = 0xFFFFFFFFu;
    data_0070C1E0 = 0x00000000u;
    data_0070C1E4 = 0x00000000u;
    data_0075D514 = 0x00000000u /* 0.0 f */;
    data_0075D518 = 0x40000000u /* 2.0 f */;
    data_0075D51C = 0x00000000u /* 0.0 f */;
    data_0075D520 = 0x41200000u /* 10.0 f */;
    data_0075D524 = 0x3F800000u /* 1.0 f */;
    data_0075D528 = 0x40000000u /* 2.0 f */;
    data_0075D52C = 0x00000000u /* 0.0 f */;
    data_0075D530 = 0x40333333u /* 2.799999952316284 f */;
    data_0075D534 = 0x00000000u /* 0.0 f */;
    data_0075D538 = 0x41200000u /* 10.0 f */;
    data_0075D53C = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_0075D540 = 0x40000000u /* 2.0 f */;
    uintptr_t ret0 = func_00114608(0x4DAF37C0u, (uintptr_t)&func_00116C38);
    data_0070C1B8 = ret0;
    uintptr_t ret1 = func_00114608(0x4991A2B4u, 0x00000000u);
    data_0070C1BC = ret1;
    uintptr_t ret2 = func_00114608(0x4B888889u, 0x00000000u);
    data_0070C1C0 = ret2;
    uintptr_t ret3 = func_00114608(0x4D8E38E4u, 0x00000000u);
    data_0070C1C4 = ret3;
    data_0070C1C8 = ret1;
    uintptr_t ret4 = func_00114608(0x4B360B61u, (uintptr_t)&data_0070C1C8);
    data_0070C1CC = ret4;
    uintptr_t ret5 = func_00114608(0x4E555556u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0075D29C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203V\201[\203\\\201[\203\212\203t\203g";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojSeesaw";
    data_0070C1D0 = ret5;
    data_0075D29C = 0x00000000u;
    data_0075D2A0 = 0x00000005u;
    data_0075D2A4 = (uintptr_t)&data_0075D2A8;
    func_0019B51C((uintptr_t)&data_0075D2BC, (uintptr_t)&func_0060B2CC, 0x000000D8u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0075D29C, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
