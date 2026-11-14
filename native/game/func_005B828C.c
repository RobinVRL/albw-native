/* USA 005B828C (EU 005B8264): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (3 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F620;
extern uint32_t data_0070F624;
extern uint32_t data_0070F628;
extern uint32_t data_0070F62C;
extern uint32_t data_0070F630;
extern uint32_t data_0078920C;
extern uint32_t data_00789210;
extern uint32_t data_00789214;
extern uint32_t data_00789218;
extern uint32_t data_0078922C;
extern uint32_t data_00789474;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060446C(void);

static const char *const names_0070F630[1] = {
    "JewelMask",
};
static const char *const names_00789474[2] = {
    "wait",
    "break",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B828C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078920C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203W\203\205\203G\203\213\203}\203X\203N";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjJewelMask";
    fill_names((sead_SafeString *)&data_0070F630, names_0070F630, 1);
    fill_names((sead_SafeString *)&data_00789474, names_00789474, 2);
    data_0070F620 = 0xFFFFFFFFu;
    data_0070F624 = 0xFFFFFFFFu;
    data_0070F628 = 0x00000000u;
    data_0070F62C = 0x00000000u;
    data_0078920C = 0x00000000u;
    data_00789210 = 0x00000005u;
    data_00789214 = (uintptr_t)&data_00789218;
    func_0019B51C((uintptr_t)&data_0078922C, (uintptr_t)&func_0060446C, 0x00000092u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0078920C, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
