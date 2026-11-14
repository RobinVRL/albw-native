/* USA 005C59A0 (EU 005C5978): static initialiser, decompiled by tools/decomp_initializer.py.
 * 10 sead::SafeString name tables (13 names), 38 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DF40;
extern uint32_t data_0070DF44;
extern uint32_t data_0070DF48;
extern uint32_t data_0070DF4C;
extern uint32_t data_0070DF50;
extern uint32_t data_0070DF5C;
extern uint32_t data_0070DF68;
extern uint32_t data_0070DF74;
extern uint32_t data_0070DF80;
extern uint32_t data_0070DF8C;
extern uint32_t data_0070DF98;
extern uint32_t data_0070DFA4;
extern uint32_t data_0070DFB0;
extern uint32_t data_00773A54;
extern uint32_t data_00773A58;
extern uint32_t data_00773A5C;
extern uint32_t data_00773A60;
extern uint32_t data_00773A74;
extern uint32_t data_00773CBC;
extern uint32_t data_00773CC0;
extern uint32_t data_00773CC4;
extern uint32_t data_00773CC8;
extern uint32_t data_00773CDC;
extern uint32_t data_00773F24;
extern uint32_t data_00773F44;
extern uint32_t data_00773F48;
extern uint32_t data_00773F4C;
extern uint32_t data_00773F50;
extern uint32_t data_00773F54;
extern uint32_t data_00773F58;
extern uint32_t data_00773F5C;
extern uint32_t data_00773F60;
extern uint32_t data_00773F62;
extern uint32_t data_00773F64;
extern uint32_t data_00773F65;
extern uint32_t data_00773F66;
extern uint32_t data_00773F67;
extern uint32_t data_00773F68;
extern uint32_t data_00773F6C;
extern uint32_t data_00773F70;
extern uint32_t data_00773F74;
extern uint32_t data_00773F78;
extern uint32_t data_00773F7C;
extern uint32_t data_00773F80;
extern uint32_t data_00773F84;
extern uint32_t data_00773F88;
extern uint32_t data_00773F8A;
extern uint32_t data_00773F8C;
extern uint32_t data_00773F8D;
extern uint32_t data_00773F8E;
extern uint32_t data_00773F8F;
extern uint32_t data_00773F90;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606028(void);
void func_00608D88(void);

static const char *const names_0070DF50[1] = {
    "wait",
};
static const char *const names_0070DF5C[1] = {
    "talk",
};
static const char *const names_0070DF68[1] = {
    "step",
};
static const char *const names_0070DF74[1] = {
    "walk",
};
static const char *const names_0070DF80[1] = {
    "swing",
};
static const char *const names_0070DF8C[1] = {
    "run",
};
static const char *const names_0070DF98[1] = {
    "wait",
};
static const char *const names_0070DFA4[1] = {
    "talk",
};
static const char *const names_0070DFB0[1] = {
    "step",
};
static const char *const names_00773F24[4] = {
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

void func_005C59A0(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00773A54;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcGameStadium";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203\215\203E\203\211\203\213\203X\203^\203W\203A\203\200\211\256\201i\222j\202\314\216q\201j";
    fill_names((sead_SafeString *)&data_0070DF50, names_0070DF50, 1);
    fill_names((sead_SafeString *)&data_0070DF5C, names_0070DF5C, 1);
    fill_names((sead_SafeString *)&data_0070DF68, names_0070DF68, 1);
    fill_names((sead_SafeString *)&data_0070DF74, names_0070DF74, 1);
    fill_names((sead_SafeString *)&data_0070DF80, names_0070DF80, 1);
    fill_names((sead_SafeString *)&data_0070DF8C, names_0070DF8C, 1);
    fill_names((sead_SafeString *)&data_0070DF98, names_0070DF98, 1);
    fill_names((sead_SafeString *)&data_0070DFA4, names_0070DFA4, 1);
    fill_names((sead_SafeString *)&data_0070DFB0, names_0070DFB0, 1);
    fill_names((sead_SafeString *)&data_00773F24, names_00773F24, 4);
    data_0070DF40 = 0xFFFFFFFFu;
    data_0070DF44 = 0xFFFFFFFFu;
    data_0070DF48 = 0x00000000u;
    data_0070DF4C = 0x00000000u;
    data_00773A54 = 0x00000000u;
    data_00773A58 = 0x00000005u;
    data_00773A5C = (uintptr_t)&data_00773A60;
    data_00773F44 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00773F48 = 0x3F800000u /* 1.0 f */;
    data_00773F4C = 0x3FC00000u /* 1.5 f */;
    data_00773F50 = 0x40A00000u /* 5.0 f */;
    data_00773F54 = 0x40400000u /* 3.0 f */;
    data_00773F58 = 0x3FA00000u /* 1.25 f */;
    data_00773F5C = 0x0000000Du;
    *(uint16_t *)&data_00773F60 = 0x5Fu;
    *(uint16_t *)&data_00773F62 = 0xB4u;
    *(uint8_t *)&data_00773F64 = 0xEEu;
    *(uint8_t *)&data_00773F65 = 0xECu;
    *(uint8_t *)&data_00773F66 = 0xFu;
    *(uint8_t *)&data_00773F67 = 0x19u;
    *(uint8_t *)&data_00773F68 = 0xAu;
    data_00773F6C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00773F70 = 0x3F800000u /* 1.0 f */;
    data_00773F74 = 0x3FC00000u /* 1.5 f */;
    data_00773F78 = 0x40A00000u /* 5.0 f */;
    data_00773F7C = 0x40400000u /* 3.0 f */;
    data_00773F80 = 0x3FA00000u /* 1.25 f */;
    data_00773F84 = 0x0000000Du;
    *(uint16_t *)&data_00773F88 = 0x5Fu;
    *(uint16_t *)&data_00773F8A = 0xB4u;
    *(uint8_t *)&data_00773F8C = 0xECu;
    *(uint8_t *)&data_00773F8D = 0xECu;
    *(uint8_t *)&data_00773F8E = 0xFu;
    *(uint8_t *)&data_00773F8F = 0x1Eu;
    *(uint8_t *)&data_00773F90 = 0xFu;
    func_0019B51C((uintptr_t)&data_00773A74, (uintptr_t)&func_00606028, 0x000001E3u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00773A54, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00773CBC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcGameStadiumGirl";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203\215\203E\203\211\203\213\203X\203^\203W\203A\203\200\211\256\201i\217\227\202\314\216q\201j";
    data_00773CBC = 0x00000000u;
    data_00773CC0 = 0x00000005u;
    data_00773CC4 = (uintptr_t)&data_00773CC8;
    func_0019B51C((uintptr_t)&data_00773CDC, (uintptr_t)&func_00608D88, 0x000001E4u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00773CBC, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
