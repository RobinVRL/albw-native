/* USA 005E2BD4 (EU 005E2BAC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (10 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F7E8;
extern uint32_t data_0070F7EC;
extern uint32_t data_0070F7F0;
extern uint32_t data_0070F7F4;
extern uint32_t data_0078C494;
extern uint32_t data_0078C498;
extern uint32_t data_0078C49C;
extern uint32_t data_0078C4A0;
extern uint32_t data_0078C4B4;
extern uint32_t data_0078C6FC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607EDC(void);

static const char *const names_0078C6FC[10] = {
    "summonG",
    "summonB",
    "summonR",
    "summonG",
    "summonG",
    "summonR",
    "summonB",
    "summonR",
    "summonR",
    "summonR",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E2BD4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078C494;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"\203\201\203f\203B\203E\203\200\202\314\217\242\212\253\226\202\226@";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"ObjMediumSummons";
    fill_names((sead_SafeString *)&data_0078C6FC, names_0078C6FC, 10);
    data_0070F7E8 = 0xFFFFFFFFu;
    data_0070F7EC = 0xFFFFFFFFu;
    data_0070F7F0 = 0x00000000u;
    data_0070F7F4 = 0x00000000u;
    data_0078C494 = 0x00000000u;
    data_0078C498 = 0x00000005u;
    data_0078C49C = (uintptr_t)&data_0078C4A0;
    func_0019B51C((uintptr_t)&data_0078C4B4, (uintptr_t)&func_00607EDC, 0x00000065u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0078C494, (uintptr_t)((char *)stk + 16), 0x00000000u);
}
