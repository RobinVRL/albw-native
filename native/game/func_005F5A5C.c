/* USA 005F5A5C (EU 005F5A34): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712730;
extern uint32_t data_00712734;
extern uint32_t data_00712738;
extern uint32_t data_0071273C;
extern uint32_t data_00799FD0;
extern uint32_t data_00799FD4;
extern uint32_t data_00799FD8;
extern uint32_t data_00799FDC;
extern uint32_t data_00799FF0;
extern uint32_t data_0079A238;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609F10(void);

static const char *const names_0079A238[4] = {
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

void func_005F5A5C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00799FD0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203\215\203E\203\211\203\213\203R\203\215\203V\203A\203\200\203X\203^\201[\203g";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"TagMiniGameTowerStart";
    fill_names((sead_SafeString *)&data_0079A238, names_0079A238, 4);
    data_00712730 = 0xFFFFFFFFu;
    data_00712734 = 0xFFFFFFFFu;
    data_00712738 = 0x00000000u;
    data_0071273C = 0x00000000u;
    data_00799FD0 = 0x00000000u;
    data_00799FD4 = 0x00000005u;
    data_00799FD8 = (uintptr_t)&data_00799FDC;
    func_0019B51C((uintptr_t)&data_00799FF0, (uintptr_t)&func_00609F10, 0x0000009Fu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00799FD0, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
