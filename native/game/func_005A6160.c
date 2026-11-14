/* USA 005A6160 (EU 005A6138): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BF90;
extern uint32_t data_0070BF94;
extern uint32_t data_0070BF98;
extern uint32_t data_0070BF9C;
extern uint32_t data_0070BFA0;
extern uint32_t data_007555C0;
extern uint32_t data_007555C4;
extern uint32_t data_007555C8;
extern uint32_t data_007555CC;
extern uint32_t data_007555E0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602A48(void);

static const char *const names_0070BFA0[1] = {
    "DoorKey",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005A6160(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007555C0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\214\256\203h\203A";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojDoorKey";
    fill_names((sead_SafeString *)&data_0070BFA0, names_0070BFA0, 1);
    data_0070BF90 = 0xFFFFFFFFu;
    data_0070BF94 = 0xFFFFFFFFu;
    data_0070BF98 = 0x00000000u;
    data_0070BF9C = 0x00000000u;
    data_007555C0 = 0x00000000u;
    data_007555C4 = 0x00000005u;
    data_007555C8 = (uintptr_t)&data_007555CC;
    func_0019B51C((uintptr_t)&data_007555E0, (uintptr_t)&func_00602A48, 0x000000B0u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007555C0, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
