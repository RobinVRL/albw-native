/* USA 005CF410 (EU 005CF3E8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 7 sead::SafeString name tables (11 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EFD8;
extern uint32_t data_0070EFDC;
extern uint32_t data_0070EFE0;
extern uint32_t data_0070EFE4;
extern uint32_t data_0070EFE8;
extern uint32_t data_0070EFFC;
extern uint32_t data_0070F008;
extern uint32_t data_0070F014;
extern uint32_t data_0070F020;
extern uint32_t data_0070F02C;
extern uint32_t data_00780A50;
extern uint32_t data_00780A54;
extern uint32_t data_00780A58;
extern uint32_t data_00780A5C;
extern uint32_t data_00780A70;
extern uint32_t data_00780CB8;
extern uint32_t data_00780CD8;
extern uint32_t data_00780CDC;
extern uint32_t data_00780CE0;
extern uint32_t data_00780CE4;
extern uint32_t data_00780CE8;
extern uint32_t data_00780CEC;
extern uint32_t data_00780CF0;
extern uint32_t data_00780CF4;
extern uint32_t data_00780CF6;
extern uint32_t data_00780CF8;
extern uint32_t data_00780CF9;
extern uint32_t data_00780CFA;
extern uint32_t data_00780CFB;
extern uint32_t data_00780CFC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607218(void);

static const char *const names_0070EFE8[2] = {
    "FieldDark_35_KameFamiry",
    "wait",
};
static const char *const names_0070EFFC[1] = {
    "talk",
};
static const char *const names_0070F008[1] = {
    "step",
};
static const char *const names_0070F014[1] = {
    "walk",
};
static const char *const names_0070F020[1] = {
    "swim_start",
};
static const char *const names_0070F02C[1] = {
    "swim_talk",
};
static const char *const names_00780CB8[4] = {
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

void func_005CF410(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00780A50;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcTurtleMother";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"^[g}U[";
    fill_names((sead_SafeString *)&data_0070EFE8, names_0070EFE8, 2);
    fill_names((sead_SafeString *)&data_0070EFFC, names_0070EFFC, 1);
    fill_names((sead_SafeString *)&data_0070F008, names_0070F008, 1);
    fill_names((sead_SafeString *)&data_0070F014, names_0070F014, 1);
    fill_names((sead_SafeString *)&data_0070F020, names_0070F020, 1);
    fill_names((sead_SafeString *)&data_0070F02C, names_0070F02C, 1);
    fill_names((sead_SafeString *)&data_00780CB8, names_00780CB8, 4);
    data_0070EFD8 = 0xFFFFFFFFu;
    data_0070EFDC = 0xFFFFFFFFu;
    data_0070EFE0 = 0x00000000u;
    data_0070EFE4 = 0x00000000u;
    data_00780A50 = 0x00000000u;
    data_00780A54 = 0x00000005u;
    data_00780A58 = (uintptr_t)&data_00780A5C;
    data_00780CD8 = 0x3CF5C28Fu /* 0.029999999329447746 f */;
    data_00780CDC = 0x3F800000u /* 1.0 f */;
    data_00780CE0 = 0x3FC00000u /* 1.5 f */;
    data_00780CE4 = 0x40A00000u /* 5.0 f */;
    data_00780CE8 = 0x40A00000u /* 5.0 f */;
    data_00780CEC = 0x40B00000u /* 5.5 f */;
    data_00780CF0 = 0x0000000Au;
    *(uint16_t *)&data_00780CF4 = 0x5Fu;
    *(uint16_t *)&data_00780CF6 = 0xB4u;
    *(uint8_t *)&data_00780CF8 = 0x0u;
    *(uint8_t *)&data_00780CF9 = 0xFFu;
    *(uint8_t *)&data_00780CFA = 0xFu;
    *(uint8_t *)&data_00780CFB = 0x1u;
    *(uint8_t *)&data_00780CFC = 0x1Eu;
    func_0019B51C((uintptr_t)&data_00780A70, (uintptr_t)&func_00607218, 0x00000010u, (uintptr_t)((char *)stk + 16));
}
