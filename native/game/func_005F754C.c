/* USA 005F754C (EU 005F7524): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BF30;
extern uint32_t data_0070BF34;
extern uint32_t data_0070BF38;
extern uint32_t data_0070BF3C;
extern uint32_t data_0070BF40;
extern uint32_t data_00753AC8;
extern uint32_t data_00753ACC;
extern uint32_t data_00753AD0;
extern uint32_t data_00753AD4;
extern uint32_t data_00753AE8;
extern uint32_t data_00753D30;
extern uint32_t data_00753D34;
extern uint32_t data_00753D38;
extern uint32_t data_00753D3C;
extern uint32_t data_00753D50;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006084EC(void);
void func_00608518(void);

static const char *const names_0070BF40[2] = {
    "open",
    "open",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005F754C(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00753AC8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojDoorSwitchWind";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203X\203C\203b\203`\224\340\201i\225\227\202\314\212\331\223\374\214\373\201j";
    fill_names((sead_SafeString *)&data_0070BF40, names_0070BF40, 2);
    data_0070BF30 = 0xFFFFFFFFu;
    data_0070BF34 = 0xFFFFFFFFu;
    data_0070BF38 = 0x00000000u;
    data_0070BF3C = 0x00000000u;
    data_00753AC8 = 0x00000000u;
    data_00753ACC = 0x00000005u;
    data_00753AD0 = (uintptr_t)&data_00753AD4;
    func_0019B51C((uintptr_t)&data_00753AE8, (uintptr_t)&func_00608518, 0x000000B3u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00753AC8, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00753D30;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojDoorSwitchEast";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203X\203C\203b\203`\224\340\201i\223\214\202\314\220_\223a\223\374\214\373\201j";
    data_00753D30 = 0x00000000u;
    data_00753D34 = 0x00000005u;
    data_00753D38 = (uintptr_t)&data_00753D3C;
    func_0019B51C((uintptr_t)&data_00753D50, (uintptr_t)&func_006084EC, 0x000000B4u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00753D30, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
