/* USA 005C0CA8 (EU 005C0C80): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 12 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F820;
extern uint32_t data_0070F824;
extern uint32_t data_0070F828;
extern uint32_t data_0070F82C;
extern uint32_t data_0070F830;
extern uint32_t data_0070F834;
extern uint32_t data_0078CC28;
extern uint32_t data_0078CC2C;
extern uint32_t data_0078CC30;
extern uint32_t data_0078CC34;
extern uint32_t data_0078CC48;
extern uint32_t data_0078CE90;
extern uint32_t data_0078CEA0;
extern uint32_t data_0078CEA4;
extern uint32_t data_0078CEA8;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DCB8(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605598(void);

static const char *const names_0078CE90[2] = {
    "Wait",
    "Erupton",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C0CA8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0078CE90, names_0078CE90, 2);
    data_0070F828 = 0xFFFFFFFFu;
    data_0070F82C = 0xFFFFFFFFu;
    data_0070F830 = 0x00000000u;
    data_0070F834 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4DE38E39u, (uintptr_t)&func_0011DCB8);
    data_0070F820 = ret0;
    uintptr_t ret1 = func_00114608(0x00000000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078CC28;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\211\316\216R\222e\203}\203l\201[\203W\203\203";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjMeganeLava";
    data_0070F824 = ret1;
    data_0078CC28 = 0x00000000u;
    data_0078CC2C = 0x00000005u;
    data_0078CC30 = (uintptr_t)&data_0078CC34;
    data_0078CEA0 = 0x00000000u /* 0.0 f */;
    data_0078CEA4 = 0x3F800000u /* 1.0 f */;
    data_0078CEA8 = 0x00000000u /* 0.0 f */;
    func_0019B51C((uintptr_t)&data_0078CC48, (uintptr_t)&func_00605598, 0x00000043u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0078CC28, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
