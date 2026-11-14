/* USA 005993FC (EU 005993D4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 10 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C430;
extern uint32_t data_0070C434;
extern uint32_t data_0070C438;
extern uint32_t data_0070C43C;
extern uint32_t data_00765D80;
extern uint32_t data_00765D84;
extern uint32_t data_00765D88;
extern uint32_t data_00765D8C;
extern uint32_t data_00765DA0;
extern uint32_t data_00765FE8;
extern uint32_t data_00765FEC;
extern uint32_t data_00765FF0;
extern uint32_t data_00765FF4;
extern uint32_t data_00766008;
extern uint32_t data_00766250;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AB78(void);
void func_0060ABB0(void);

static const char *const names_00766250[4] = {
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

void func_005993FC(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00765D80;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojWindL";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\220\356\225\227\213@\202\314\225\227(\221\345)";
    fill_names((sead_SafeString *)&data_00766250, names_00766250, 4);
    data_0070C430 = 0xFFFFFFFFu;
    data_0070C434 = 0xFFFFFFFFu;
    data_0070C438 = 0x00000000u;
    data_0070C43C = 0x00000000u;
    data_00765D80 = 0x00000000u;
    data_00765D84 = 0x00000005u;
    data_00765D88 = (uintptr_t)&data_00765D8C;
    func_0019B51C((uintptr_t)&data_00765DA0, (uintptr_t)&func_0060AB78, 0x000000FDu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00765D80, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00765FE8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojWindS";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\220\356\225\227\213@\202\314\225\227(\217\254)";
    data_00765FE8 = 0x00000000u;
    data_00765FEC = 0x00000005u;
    data_00765FF0 = (uintptr_t)&data_00765FF4;
    func_0019B51C((uintptr_t)&data_00766008, (uintptr_t)&func_0060ABB0, 0x000000FCu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00765FE8, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
