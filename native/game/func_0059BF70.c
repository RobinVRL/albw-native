/* USA 0059BF70 (EU 0059BF48): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (2 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BE88;
extern uint32_t data_0070BE8C;
extern uint32_t data_0070BE90;
extern uint32_t data_0070BE94;
extern uint32_t data_0070BE98;
extern uint32_t data_007526C8;
extern uint32_t data_007526CC;
extern uint32_t data_007526D0;
extern uint32_t data_007526D4;
extern uint32_t data_007526E8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AB24(void);

static const char *const names_0070BE98[2] = {
    "Cloud",
    "Cloud",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_0059BF70(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007526C8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojCloud";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\211_";
    data_0070BE88 = 0xFFFFFFFFu;
    data_0070BE8C = 0xFFFFFFFFu;
    data_0070BE90 = 0x00000000u;
    data_0070BE94 = 0x00000000u;
    data_007526C8 = 0x00000000u;
    data_007526CC = 0x00000005u;
    data_007526D0 = (uintptr_t)&data_007526D4;
    func_0019B51C((uintptr_t)&data_007526E8, (uintptr_t)&func_0060AB24, 0x00000136u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007526C8, (uintptr_t)((char *)stk + 24), 0x00000000u);
    fill_names((sead_SafeString *)&data_0070BE98, names_0070BE98, 2);
}
