/* USA 005B8944 (EU 005B891C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 10 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00711030;
extern uint32_t data_00711034;
extern uint32_t data_00711038;
extern uint32_t data_0071103C;
extern uint32_t data_00796190;
extern uint32_t data_00796194;
extern uint32_t data_00796198;
extern uint32_t data_0079619C;
extern uint32_t data_007961B0;
extern uint32_t data_007963F8;
extern uint32_t data_00796418;
extern uint32_t data_0079641C;
extern uint32_t data_00796420;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060456C(void);

static const char *const names_007963F8[4] = {
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

void func_005B8944(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00796190;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"vC[IuWFNg";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"PlayerObject";
    fill_names((sead_SafeString *)&data_007963F8, names_007963F8, 4);
    data_00711030 = 0xFFFFFFFFu;
    data_00711034 = 0xFFFFFFFFu;
    data_00711038 = 0x00000000u;
    data_0071103C = 0x00000000u;
    data_00796190 = 0x00000000u;
    data_00796194 = 0x00000005u;
    data_00796198 = (uintptr_t)&data_0079619C;
    data_00796418 = 0x00000000u /* 0.0 f */;
    data_0079641C = 0x3FC00000u /* 1.5 f */;
    data_00796420 = 0x3F800000u /* 1.0 f */;
    func_0019B51C((uintptr_t)&data_007961B0, (uintptr_t)&func_0060456C, 0x00000020u, (uintptr_t)((char *)stk + 24));
}
