/* USA 005E6A14 (EU 005E69EC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C010;
extern uint32_t data_0070C014;
extern uint32_t data_0070C018;
extern uint32_t data_0070C01C;
extern uint32_t data_00757EC8;
extern uint32_t data_00757ECC;
extern uint32_t data_00757ED0;
extern uint32_t data_00757ED4;
extern uint32_t data_00757EE8;
extern uint32_t data_00758130;
extern uint32_t data_00758134;
extern uint32_t data_00758138;
extern uint32_t data_0075813C;
extern uint32_t data_00758150;
extern uint32_t data_00758398;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006085C4(void);

static const char *const names_00758398[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E6A14(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00757EC8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojHeartContainer";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203n\201[\203g\202\314\212\355";
    fill_names((sead_SafeString *)&data_00758398, names_00758398, 4);
    data_0070C010 = 0xFFFFFFFFu;
    data_0070C014 = 0xFFFFFFFFu;
    data_0070C018 = 0x00000000u;
    data_0070C01C = 0x00000000u;
    data_00757EC8 = 0x00000000u;
    data_00757ECC = 0x00000005u;
    data_00757ED0 = (uintptr_t)&data_00757ED4;
    func_0019B51C((uintptr_t)&data_00757EE8, (uintptr_t)&func_006085C4, 0x000000ACu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00757EC8, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00758130;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojHeartPiece";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203n\201[\203g\202\314\202\251\202\257\202\347";
    data_00758130 = 0x00000000u;
    data_00758134 = 0x00000005u;
    data_00758138 = (uintptr_t)&data_0075813C;
    func_0019B51C((uintptr_t)&data_00758150, (uintptr_t)&func_006085C4, 0x000000ADu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00758130, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
