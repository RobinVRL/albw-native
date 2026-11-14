/* USA 005B559C (EU 005B5574): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (11 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C320;
extern uint32_t data_0070C324;
extern uint32_t data_0070C328;
extern uint32_t data_0070C32C;
extern uint32_t data_007605E4;
extern uint32_t data_007605E8;
extern uint32_t data_007605EC;
extern uint32_t data_007605F0;
extern uint32_t data_00760604;
extern uint32_t data_0076084C;
extern uint32_t data_00760850;
extern uint32_t data_00760854;
extern uint32_t data_00760858;
extern uint32_t data_0076086C;
extern uint32_t data_00760AB4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603E68(void);

static const char *const names_00760AB4[11] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "start",
    "save",
    "wait",
    "tornade",
    "appeal",
    "start",
    "save",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005B559C(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007605E4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojTelephone";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\223d\230b\203{\203b\203N\203X\201i\214\365\201j";
    fill_names((sead_SafeString *)&data_00760AB4, names_00760AB4, 11);
    data_0070C320 = 0xFFFFFFFFu;
    data_0070C324 = 0xFFFFFFFFu;
    data_0070C328 = 0x00000000u;
    data_0070C32C = 0x00000000u;
    data_007605E4 = 0x00000000u;
    data_007605E8 = 0x00000005u;
    data_007605EC = (uintptr_t)&data_007605F0;
    func_0019B51C((uintptr_t)&data_00760604, (uintptr_t)&func_00603E68, 0x00000118u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007605E4, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0076084C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojTelephoneDark";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\223d\230b\203{\203b\203N\203X\201i\210\305\201j";
    data_0076084C = 0x00000000u;
    data_00760850 = 0x00000005u;
    data_00760854 = (uintptr_t)&data_00760858;
    func_0019B51C((uintptr_t)&data_0076086C, (uintptr_t)&func_00603E68, 0x00000119u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0076084C, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
