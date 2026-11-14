/* USA 005B860C (EU 005B85E4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (3 names), 14 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F9E8;
extern uint32_t data_0070F9E9;
extern uint32_t data_0070F9EA;
extern uint32_t data_0070F9EB;
extern uint32_t data_0070F9F0;
extern uint32_t data_0070F9F4;
extern uint32_t data_0070F9F8;
extern uint32_t data_0070F9FC;
extern uint32_t data_00791AAC;
extern uint32_t data_00791AB0;
extern uint32_t data_00791AB4;
extern uint32_t data_00791AB8;
extern uint32_t data_00791ACC;
extern uint32_t data_00791D14;
extern uint32_t data_00791D2C;
extern uint32_t data_00791D30;
extern uint32_t data_00791D34;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006044EC(void);

static const char *const names_00791D14[3] = {
    "damage",
    "damage",
    "dead",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B860C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00791AAC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\202\251\202\251\202\265";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjScarecrow";
    fill_names((sead_SafeString *)&data_00791D14, names_00791D14, 3);
    *(uint8_t *)&data_0070F9E8 = 0xDCu;
    *(uint8_t *)&data_0070F9E9 = 0xFFu;
    *(uint8_t *)&data_0070F9EA = 0xFFu;
    *(uint8_t *)&data_0070F9EB = 0xFFu;
    data_0070F9F0 = 0xFFFFFFFFu;
    data_0070F9F4 = 0xFFFFFFFFu;
    data_0070F9F8 = 0x00000000u;
    data_0070F9FC = 0x00000000u;
    data_00791AAC = 0x00000000u;
    data_00791AB0 = 0x00000005u;
    data_00791AB4 = (uintptr_t)&data_00791AB8;
    data_00791D2C = 0x00000000u /* 0.0 f */;
    data_00791D30 = 0x3FD9999Au /* 1.7000000476837158 f */;
    data_00791D34 = 0x00000000u /* 0.0 f */;
    func_0019B51C((uintptr_t)&data_00791ACC, (uintptr_t)&func_006044EC, 0x00000080u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00791AAC, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
