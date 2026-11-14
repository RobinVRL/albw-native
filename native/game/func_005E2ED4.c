/* USA 005E2ED4 (EU 005E2EAC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (8 names), 10 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FAD0;
extern uint32_t data_0070FAD4;
extern uint32_t data_0070FAD8;
extern uint32_t data_0070FADC;
extern uint32_t data_0070FAE0;
extern uint32_t data_00794BB8;
extern uint32_t data_00794BBC;
extern uint32_t data_00794BC0;
extern uint32_t data_00794BC4;
extern uint32_t data_00794BD8;
extern uint32_t data_00794E20;
extern uint32_t data_00794E58;
extern uint32_t data_00794E5C;
extern uint32_t data_00794E60;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607F30(void);

static const char *const names_0070FAE0[1] = {
    "TriForce_get_event",
};
static const char *const names_00794E20[7] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "up",
    "wait",
    "get",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E2ED4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00794BB8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ECÌ©½Üè";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjTriForceBrave";
    fill_names((sead_SafeString *)&data_0070FAE0, names_0070FAE0, 1);
    fill_names((sead_SafeString *)&data_00794E20, names_00794E20, 7);
    data_0070FAD0 = 0xFFFFFFFFu;
    data_0070FAD4 = 0xFFFFFFFFu;
    data_0070FAD8 = 0x00000000u;
    data_0070FADC = 0x00000000u;
    data_00794BB8 = 0x00000000u;
    data_00794BBC = 0x00000005u;
    data_00794BC0 = (uintptr_t)&data_00794BC4;
    data_00794E58 = 0x00000000u /* 0.0 f */;
    data_00794E5C = 0x00000000u /* 0.0 f */;
    data_00794E60 = 0x00000000u /* 0.0 f */;
    func_0019B51C((uintptr_t)&data_00794BD8, (uintptr_t)&func_00607F30, 0x00000052u, (uintptr_t)((char *)stk + 24));
}
