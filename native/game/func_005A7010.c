/* USA 005A7010 (EU 005A6FE8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (5 names), 11 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F878;
extern uint32_t data_0070F880;
extern uint32_t data_0070F884;
extern uint32_t data_0070F888;
extern uint32_t data_0070F88C;
extern uint32_t data_0070F890;
extern uint32_t data_0078D878;
extern uint32_t data_0078D87C;
extern uint32_t data_0078D880;
extern uint32_t data_0078D884;
extern uint32_t data_0078D898;
extern uint32_t data_0078DAE0;
extern uint32_t data_0078DB00;
extern uint32_t data_0078DB04;
extern uint32_t data_0078DB08;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011E230(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602F50(void);

static const char *const names_0078DAE0[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};
static const char *const names_0070F890[1] = {
    "Pendant",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A7010(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078D878;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjPendant";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203y\203\223\203_\203\223\203g";
    fill_names((sead_SafeString *)&data_0078DAE0, names_0078DAE0, 4);
    data_0070F880 = 0xFFFFFFFFu;
    data_0070F884 = 0xFFFFFFFFu;
    data_0070F888 = 0x00000000u;
    data_0070F88C = 0x00000000u;
    data_0078D878 = 0x00000000u;
    data_0078D87C = 0x00000005u;
    data_0078D880 = (uintptr_t)&data_0078D884;
    func_0019B51C((uintptr_t)&data_0078D898, (uintptr_t)&func_00602F50, 0x0000006Cu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078D878, (uintptr_t)((char *)stk + 24), 0x00000000u);
    fill_names((sead_SafeString *)&data_0070F890, names_0070F890, 1);
    data_0078DB00 = 0x00000000u /* 0.0 f */;
    data_0078DB04 = 0x3F800000u /* 1.0 f */;
    data_0078DB08 = 0x00000000u /* 0.0 f */;
    uintptr_t ret1 = func_00114608(0x4C088889u, (uintptr_t)&func_0011E230);
    data_0070F878 = ret1;
}
