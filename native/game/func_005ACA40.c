/* USA 005ACA40 (EU 005ACA18): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (9 names), 26 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E318;
extern uint32_t data_0070E31C;
extern uint32_t data_0070E320;
extern uint32_t data_0070E324;
extern uint32_t data_0070E328;
extern uint32_t data_0070E33C;
extern uint32_t data_0070E348;
extern uint32_t data_0070E354;
extern uint32_t data_00775A54;
extern uint32_t data_00775A58;
extern uint32_t data_00775A5C;
extern uint32_t data_00775A60;
extern uint32_t data_00775A74;
extern uint32_t data_00775CBC;
extern uint32_t data_00775CDC;
extern uint32_t data_00775CE0;
extern uint32_t data_00775CE4;
extern uint32_t data_00775CE8;
extern uint32_t data_00775CEC;
extern uint32_t data_00775CF0;
extern uint32_t data_00775CF4;
extern uint32_t data_00775CF8;
extern uint32_t data_00775CFA;
extern uint32_t data_00775CFC;
extern uint32_t data_00775CFD;
extern uint32_t data_00775CFE;
extern uint32_t data_00775CFF;
extern uint32_t data_00775D00;
extern uint32_t data_00775D04;
extern uint32_t data_00775D08;
extern uint32_t data_00775D0C;
extern uint32_t data_00775D10;
extern uint32_t data_00775D11;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006035E8(void);

static const char *const names_0070E328[2] = {
    "dance",
    "wait",
};
static const char *const names_0070E33C[1] = {
    "talk",
};
static const char *const names_0070E348[1] = {
    "step",
};
static const char *const names_0070E354[1] = {
    "dance",
};
static const char *const names_00775CBC[4] = {
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

void func_005ACA40(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00775A54;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcKokkoBig";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"RbRð¯JXgB¬NPC";
    fill_names((sead_SafeString *)&data_0070E328, names_0070E328, 2);
    fill_names((sead_SafeString *)&data_0070E33C, names_0070E33C, 1);
    fill_names((sead_SafeString *)&data_0070E348, names_0070E348, 1);
    fill_names((sead_SafeString *)&data_0070E354, names_0070E354, 1);
    fill_names((sead_SafeString *)&data_00775CBC, names_00775CBC, 4);
    data_0070E318 = 0xFFFFFFFFu;
    data_0070E31C = 0xFFFFFFFFu;
    data_0070E320 = 0x00000000u;
    data_0070E324 = 0x00000000u;
    data_00775A54 = 0x00000000u;
    data_00775A58 = 0x00000005u;
    data_00775A5C = (uintptr_t)&data_00775A60;
    data_00775CDC = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00775CE0 = 0x3F800000u /* 1.0 f */;
    data_00775CE4 = 0x3FC00000u /* 1.5 f */;
    data_00775CE8 = 0x40A00000u /* 5.0 f */;
    data_00775CEC = 0x40A00000u /* 5.0 f */;
    data_00775CF0 = 0x3FC00000u /* 1.5 f */;
    data_00775CF4 = 0x0000000Au;
    *(uint16_t *)&data_00775CF8 = 0x5Fu;
    *(uint16_t *)&data_00775CFA = 0xB4u;
    *(uint8_t *)&data_00775CFC = 0xEEu;
    *(uint8_t *)&data_00775CFD = 0xECu;
    *(uint8_t *)&data_00775CFE = 0xFu;
    *(uint8_t *)&data_00775CFF = 0x32u;
    *(uint8_t *)&data_00775D00 = 0x1Eu;
    data_00775D04 = 0x00000001u;
    data_00775D08 = 0x00000000u;
    data_00775D0C = 0x00000000u;
    *(uint8_t *)&data_00775D10 = 0x0u;
    *(uint8_t *)&data_00775D11 = 0x1u;
    func_0019B51C((uintptr_t)&data_00775A74, (uintptr_t)&func_006035E8, 0x000001F2u, (uintptr_t)((char *)stk + 16));
}
