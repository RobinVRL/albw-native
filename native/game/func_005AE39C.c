/* USA 005AE39C (EU 005AE374): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (8 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FA20;
extern uint32_t data_0070FA24;
extern uint32_t data_0070FA28;
extern uint32_t data_0070FA2C;
extern uint32_t data_0070FA30;
extern uint32_t data_00793A60;
extern uint32_t data_00793A64;
extern uint32_t data_00793A68;
extern uint32_t data_00793A6C;
extern uint32_t data_00793A80;
extern uint32_t data_00793CC8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006037C0(void);

static const char *const names_0070FA30[4] = {
    "Head",
    "Body",
    "Tail_1",
    "Tail_2",
};
static const char *const names_00793CC8[4] = {
    "wait",
    "eat",
    "search",
    "walk",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005AE39C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00793A60;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203\212\203X";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjSquirrel";
    fill_names((sead_SafeString *)&data_0070FA30, names_0070FA30, 4);
    fill_names((sead_SafeString *)&data_00793CC8, names_00793CC8, 4);
    data_0070FA20 = 0xFFFFFFFFu;
    data_0070FA24 = 0xFFFFFFFFu;
    data_0070FA28 = 0x00000000u;
    data_0070FA2C = 0x00000000u;
    data_00793A60 = 0x00000000u;
    data_00793A64 = 0x00000005u;
    data_00793A68 = (uintptr_t)&data_00793A6C;
    func_0019B51C((uintptr_t)&data_00793A80, (uintptr_t)&func_006037C0, 0x00000076u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00793A60, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
