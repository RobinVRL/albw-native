/* USA 005F32A8 (EU 005F3280): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708820;
extern uint32_t data_00708824;
extern uint32_t data_00708828;
extern uint32_t data_0070882C;
extern uint32_t data_0072E20C;
extern uint32_t data_0072E210;
extern uint32_t data_0072E214;
extern uint32_t data_0072E218;
extern uint32_t data_0072E22C;
extern uint32_t data_0072E474;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609AD8(void);

static const char *const names_0072E474[4] = {
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

void func_005F32A8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072E20C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203G\203s\203\215\201[\203O\211\357\230b\203G\203\212\203A";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"AreaEventTalkEpilogue";
    fill_names((sead_SafeString *)&data_0072E474, names_0072E474, 4);
    data_00708820 = 0xFFFFFFFFu;
    data_00708824 = 0xFFFFFFFFu;
    data_00708828 = 0x00000000u;
    data_0070882C = 0x00000000u;
    data_0072E20C = 0x00000000u;
    data_0072E210 = 0x00000005u;
    data_0072E214 = (uintptr_t)&data_0072E218;
    func_0019B51C((uintptr_t)&data_0072E22C, (uintptr_t)&func_00609AD8, 0x0000017Cu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0072E20C, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
