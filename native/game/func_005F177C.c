/* USA 005F177C (EU 005F1754): static initialiser, decompiled by tools/decomp_initializer.py.
 * 4 sead::SafeString name tables (8 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D9F8;
extern uint32_t data_0070D9FC;
extern uint32_t data_0070DA00;
extern uint32_t data_0070DA04;
extern uint32_t data_0070DA08;
extern uint32_t data_0070DA1C;
extern uint32_t data_0070DA28;
extern uint32_t data_00770F54;
extern uint32_t data_00770F58;
extern uint32_t data_00770F5C;
extern uint32_t data_00770F60;
extern uint32_t data_00770F74;
extern uint32_t data_007711BC;
extern uint32_t data_007711DC;
extern uint32_t data_007711E0;
extern uint32_t data_007711E4;
extern uint32_t data_007711E8;
extern uint32_t data_007711EC;
extern uint32_t data_007711F0;
extern uint32_t data_007711F4;
extern uint32_t data_007711F8;
extern uint32_t data_007711FA;
extern uint32_t data_007711FC;
extern uint32_t data_007711FD;
extern uint32_t data_007711FE;
extern uint32_t data_007711FF;
extern uint32_t data_00771200;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060981C(void);

static const char *const names_0070DA08[2] = {
    "FieldDark_22_BlackSmithWife_AfterGameOver",
    "wait",
};
static const char *const names_0070DA1C[1] = {
    "talk",
};
static const char *const names_0070DA28[1] = {
    "step",
};
static const char *const names_007711BC[4] = {
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

void func_005F177C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00770F54;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcBlacksmithWifeUra";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\222b\226\350\211\256\202\314\215\310\201i\210\305\201j";
    fill_names((sead_SafeString *)&data_0070DA08, names_0070DA08, 2);
    fill_names((sead_SafeString *)&data_0070DA1C, names_0070DA1C, 1);
    fill_names((sead_SafeString *)&data_0070DA28, names_0070DA28, 1);
    fill_names((sead_SafeString *)&data_007711BC, names_007711BC, 4);
    data_0070D9F8 = 0xFFFFFFFFu;
    data_0070D9FC = 0xFFFFFFFFu;
    data_0070DA00 = 0x00000000u;
    data_0070DA04 = 0x00000000u;
    data_00770F54 = 0x00000000u;
    data_00770F58 = 0x00000005u;
    data_00770F5C = (uintptr_t)&data_00770F60;
    data_007711DC = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_007711E0 = 0x3F800000u /* 1.0 f */;
    data_007711E4 = 0x3FC00000u /* 1.5 f */;
    data_007711E8 = 0x40A00000u /* 5.0 f */;
    data_007711EC = 0x40400000u /* 3.0 f */;
    data_007711F0 = 0x3F800000u /* 1.0 f */;
    data_007711F4 = 0x0000000Fu;
    *(uint16_t *)&data_007711F8 = 0x5Fu;
    *(uint16_t *)&data_007711FA = 0xB4u;
    *(uint8_t *)&data_007711FC = 0xEEu;
    *(uint8_t *)&data_007711FD = 0xECu;
    *(uint8_t *)&data_007711FE = 0xFu;
    *(uint8_t *)&data_007711FF = 0x1Eu;
    *(uint8_t *)&data_00771200 = 0xAu;
    func_0019B51C((uintptr_t)&data_00770F74, (uintptr_t)&func_0060981C, 0x000001B5u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00770F54, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
