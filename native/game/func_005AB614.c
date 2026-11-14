/* USA 005AB614 (EU 005AB5EC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BF00;
extern uint32_t data_0070BF04;
extern uint32_t data_0070BF08;
extern uint32_t data_0070BF0C;
extern uint32_t data_0070BF10;
extern uint32_t data_007535D0;
extern uint32_t data_007535D4;
extern uint32_t data_007535D8;
extern uint32_t data_007535DC;
extern uint32_t data_007535F0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603300(void);

static const char *const names_0070BF10[1] = {
    "DoorBoss",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AB614(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007535D0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203{\203X\203h\203A";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojDoorBoss";
    fill_names((sead_SafeString *)&data_0070BF10, names_0070BF10, 1);
    data_0070BF00 = 0xFFFFFFFFu;
    data_0070BF04 = 0xFFFFFFFFu;
    data_0070BF08 = 0x00000000u;
    data_0070BF0C = 0x00000000u;
    data_007535D0 = 0x00000000u;
    data_007535D4 = 0x00000005u;
    data_007535D8 = (uintptr_t)&data_007535DC;
    func_0019B51C((uintptr_t)&data_007535F0, (uintptr_t)&func_00603300, 0x000000AEu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007535D0, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
