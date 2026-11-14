/* USA 005BFDF8 (EU 005BFDD0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 7 sead::SafeString name tables (10 names), 31 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070EAF8;
extern uint32_t data_0070EAFC;
extern uint32_t data_0070EB00;
extern uint32_t data_0070EB04;
extern uint32_t data_0070EB08;
extern uint32_t data_0070EB0C;
extern uint32_t data_0070EB10;
extern uint32_t data_0070EB14;
extern uint32_t data_0070EB18;
extern uint32_t data_0070EB24;
extern uint32_t data_0070EB30;
extern uint32_t data_0070EB3C;
extern uint32_t data_0070EB48;
extern uint32_t data_0070EB54;
extern uint32_t data_0077DC58;
extern uint32_t data_0077DC5C;
extern uint32_t data_0077DC60;
extern uint32_t data_0077DC64;
extern uint32_t data_0077DC78;
extern uint32_t data_0077DEC0;
extern uint32_t data_0077DEE0;
extern uint32_t data_0077DEE4;
extern uint32_t data_0077DEE8;
extern uint32_t data_0077DEEC;
extern uint32_t data_0077DEF0;
extern uint32_t data_0077DEF4;
extern uint32_t data_0077DEF8;
extern uint32_t data_0077DEFC;
extern uint32_t data_0077DEFE;
extern uint32_t data_0077DF00;
extern uint32_t data_0077DF01;
extern uint32_t data_0077DF02;
extern uint32_t data_0077DF03;
extern uint32_t data_0077DF04;
extern uint32_t data_0077DF08;
extern uint32_t data_0077DF0C;
extern uint32_t data_0077DF10;
extern uint32_t data_0077DF14;
extern uint32_t data_0077DF18;
extern uint32_t data_0077DF1C;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605350(void);

static const char *const names_0070EB18[1] = {
    "wait",
};
static const char *const names_0070EB24[1] = {
    "talk",
};
static const char *const names_0070EB30[1] = {
    "step",
};
static const char *const names_0070EB3C[1] = {
    "walk",
};
static const char *const names_0070EB48[1] = {
    "sleep",
};
static const char *const names_0070EB54[1] = {
    "run",
};
static const char *const names_0077DEC0[4] = {
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

void func_005BFDF8(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070EB18, names_0070EB18, 1);
    fill_names((sead_SafeString *)&data_0070EB24, names_0070EB24, 1);
    fill_names((sead_SafeString *)&data_0070EB30, names_0070EB30, 1);
    fill_names((sead_SafeString *)&data_0070EB3C, names_0070EB3C, 1);
    fill_names((sead_SafeString *)&data_0070EB48, names_0070EB48, 1);
    fill_names((sead_SafeString *)&data_0070EB54, names_0070EB54, 1);
    fill_names((sead_SafeString *)&data_0077DEC0, names_0077DEC0, 4);
    data_0070EB08 = 0xFFFFFFFFu;
    data_0070EB0C = 0xFFFFFFFFu;
    data_0070EB10 = 0x00000000u;
    data_0070EB14 = 0x00000000u;
    data_0077DEE0 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_0077DEE4 = 0x3F800000u /* 1.0 f */;
    data_0077DEE8 = 0x3FC00000u /* 1.5 f */;
    data_0077DEEC = 0x40A00000u /* 5.0 f */;
    data_0077DEF0 = 0x40200000u /* 2.5 f */;
    data_0077DEF4 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0077DEF8 = 0x00000012u;
    *(uint16_t *)&data_0077DEFC = 0x5Fu;
    *(uint16_t *)&data_0077DEFE = 0xB4u;
    *(uint8_t *)&data_0077DF00 = 0xEEu;
    *(uint8_t *)&data_0077DF01 = 0xECu;
    *(uint8_t *)&data_0077DF02 = 0xFu;
    *(uint8_t *)&data_0077DF03 = 0x32u;
    *(uint8_t *)&data_0077DF04 = 0xAu;
    uintptr_t ret0 = func_00114608(0x4DE38E39u, 0x00000012u);
    data_0070EAF8 = ret0;
    uintptr_t ret1 = func_00114608(0x00000000u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077DC58;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcSahasrahla";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203T\203n\203X\203\211\201[\203\211";
    data_0070EAFC = ret1;
    data_0070EB00 = ret0;
    data_0070EB04 = ret1;
    data_0077DC58 = 0x00000000u;
    data_0077DC5C = 0x00000005u;
    data_0077DC60 = (uintptr_t)&data_0077DC64;
    data_0077DF08 = 0x00000000u /* 0.0 f */;
    data_0077DF0C = 0x00000000u /* 0.0 f */;
    data_0077DF10 = 0x00000000u /* 0.0 f */;
    data_0077DF14 = 0x00000000u /* 0.0 f */;
    data_0077DF18 = 0x00000000u /* 0.0 f */;
    data_0077DF1C = 0x40400000u /* 3.0 f */;
    func_0019B51C((uintptr_t)&data_0077DC78, (uintptr_t)&func_00605350, 0x000001A1u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0077DC58, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
