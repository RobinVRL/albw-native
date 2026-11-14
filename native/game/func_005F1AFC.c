/* USA 005F1AFC (EU 005F1AD4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (8 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F8A8;
extern uint32_t data_0070F8AC;
extern uint32_t data_0070F8B0;
extern uint32_t data_0070F8B4;
extern uint32_t data_0070F8B8;
extern uint32_t data_0078EC3C;
extern uint32_t data_0078EC40;
extern uint32_t data_0078EC44;
extern uint32_t data_0078EC48;
extern uint32_t data_0078EC5C;
extern uint32_t data_0078EEA4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006098C4(void);

static const char *const names_0070F8B8[1] = {
    "paint",
};
static const char *const names_0078EEA4[7] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "appear",
    "wait",
    "put_picture",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F1AFC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078EC3C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203\211\203N\203`\203\203\202\314\212G";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjPictureSahasPupil";
    fill_names((sead_SafeString *)&data_0070F8B8, names_0070F8B8, 1);
    fill_names((sead_SafeString *)&data_0078EEA4, names_0078EEA4, 7);
    data_0070F8A8 = 0xFFFFFFFFu;
    data_0070F8AC = 0xFFFFFFFFu;
    data_0070F8B0 = 0x00000000u;
    data_0070F8B4 = 0x00000000u;
    data_0078EC3C = 0x00000000u;
    data_0078EC40 = 0x00000005u;
    data_0078EC44 = (uintptr_t)&data_0078EC48;
    func_0019B51C((uintptr_t)&data_0078EC5C, (uintptr_t)&func_006098C4, 0x00000086u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0078EC3C, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
