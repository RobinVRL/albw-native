/* USA 005A686C (EU 005A6844): static initialiser, decompiled by tools/decomp_initializer.py.
 * 8 sead::SafeString name tables (12 names), 26 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EE38;
extern uint32_t data_0070EE3C;
extern uint32_t data_0070EE40;
extern uint32_t data_0070EE44;
extern uint32_t data_0070EE48;
extern uint32_t data_0070EE5C;
extern uint32_t data_0070EE68;
extern uint32_t data_0070EE74;
extern uint32_t data_0070EE80;
extern uint32_t data_0070EE8C;
extern uint32_t data_0070EE98;
extern uint32_t data_0077FD10;
extern uint32_t data_0077FD14;
extern uint32_t data_0077FD18;
extern uint32_t data_0077FD1C;
extern uint32_t data_0077FD30;
extern uint32_t data_0077FF78;
extern uint32_t data_0077FF98;
extern uint32_t data_0077FF9C;
extern uint32_t data_0077FFA0;
extern uint32_t data_0077FFA4;
extern uint32_t data_0077FFA8;
extern uint32_t data_0077FFAC;
extern uint32_t data_0077FFB0;
extern uint32_t data_0077FFB4;
extern uint32_t data_0077FFB6;
extern uint32_t data_0077FFB8;
extern uint32_t data_0077FFB9;
extern uint32_t data_0077FFBA;
extern uint32_t data_0077FFBB;
extern uint32_t data_0077FFBC;
extern uint32_t data_0077FFC0;
extern uint32_t data_0077FFC4;
extern uint32_t data_0077FFC8;
extern uint32_t data_0077FFCC;
extern uint32_t data_0077FFCD;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00602E08(void);

static const char *const names_0070EE48[2] = {
    "item",
    "wait",
};
static const char *const names_0070EE5C[1] = {
    "talk",
};
static const char *const names_0070EE68[1] = {
    "step",
};
static const char *const names_0070EE74[1] = {
    "walk",
};
static const char *const names_0070EE80[1] = {
    "cut",
};
static const char *const names_0070EE8C[1] = {
    "cutturn",
};
static const char *const names_0070EE98[1] = {
    "clean",
};
static const char *const names_0077FF78[4] = {
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

void func_005A686C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077FD10;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcSoldier";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPC\225\272\216m";
    fill_names((sead_SafeString *)&data_0070EE48, names_0070EE48, 2);
    fill_names((sead_SafeString *)&data_0070EE5C, names_0070EE5C, 1);
    fill_names((sead_SafeString *)&data_0070EE68, names_0070EE68, 1);
    fill_names((sead_SafeString *)&data_0070EE74, names_0070EE74, 1);
    fill_names((sead_SafeString *)&data_0070EE80, names_0070EE80, 1);
    fill_names((sead_SafeString *)&data_0070EE8C, names_0070EE8C, 1);
    fill_names((sead_SafeString *)&data_0070EE98, names_0070EE98, 1);
    fill_names((sead_SafeString *)&data_0077FF78, names_0077FF78, 4);
    data_0070EE38 = 0xFFFFFFFFu;
    data_0070EE3C = 0xFFFFFFFFu;
    data_0070EE40 = 0x00000000u;
    data_0070EE44 = 0x00000000u;
    data_0077FD10 = 0x00000000u;
    data_0077FD14 = 0x00000005u;
    data_0077FD18 = (uintptr_t)&data_0077FD1C;
    data_0077FF98 = 0x3D4CCCCDu /* 0.05000000074505806 f */;
    data_0077FF9C = 0x3F800000u /* 1.0 f */;
    data_0077FFA0 = 0x3FC00000u /* 1.5 f */;
    data_0077FFA4 = 0x40A00000u /* 5.0 f */;
    data_0077FFA8 = 0x40400000u /* 3.0 f */;
    data_0077FFAC = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0077FFB0 = 0x0000000Eu;
    *(uint16_t *)&data_0077FFB4 = 0x5Au;
    *(uint16_t *)&data_0077FFB6 = 0xB4u;
    *(uint8_t *)&data_0077FFB8 = 0xEEu;
    *(uint8_t *)&data_0077FFB9 = 0xECu;
    *(uint8_t *)&data_0077FFBA = 0xFu;
    *(uint8_t *)&data_0077FFBB = 0x1Eu;
    *(uint8_t *)&data_0077FFBC = 0x14u;
    data_0077FFC0 = 0x00000001u;
    data_0077FFC4 = 0x00000000u;
    data_0077FFC8 = 0x00000000u;
    *(uint8_t *)&data_0077FFCC = 0x0u;
    *(uint8_t *)&data_0077FFCD = 0x1u;
    func_0019B51C((uintptr_t)&data_0077FD30, (uintptr_t)&func_00602E08, 0x00000193u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0077FD10, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
