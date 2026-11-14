/* USA 005C50AC (EU 005C5084): static initialiser, decompiled by tools/decomp_initializer.py.
 * 8 sead::SafeString name tables (15 names), 26 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DB68;
extern uint32_t data_0070DB6C;
extern uint32_t data_0070DB70;
extern uint32_t data_0070DB74;
extern uint32_t data_0070DB78;
extern uint32_t data_0070DBA4;
extern uint32_t data_0070DBB0;
extern uint32_t data_0070DBBC;
extern uint32_t data_0070DBC8;
extern uint32_t data_0070DBD4;
extern uint32_t data_0070DBE0;
extern uint32_t data_00771774;
extern uint32_t data_00771778;
extern uint32_t data_0077177C;
extern uint32_t data_00771780;
extern uint32_t data_00771794;
extern uint32_t data_007719DC;
extern uint32_t data_007719FC;
extern uint32_t data_00771A00;
extern uint32_t data_00771A04;
extern uint32_t data_00771A08;
extern uint32_t data_00771A0C;
extern uint32_t data_00771A10;
extern uint32_t data_00771A14;
extern uint32_t data_00771A18;
extern uint32_t data_00771A1A;
extern uint32_t data_00771A1C;
extern uint32_t data_00771A1D;
extern uint32_t data_00771A1E;
extern uint32_t data_00771A1F;
extern uint32_t data_00771A20;
extern uint32_t data_00771A24;
extern uint32_t data_00771A28;
extern uint32_t data_00771A2C;
extern uint32_t data_00771A30;
extern uint32_t data_00771A31;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605EAC(void);

static const char *const names_0070DB78[5] = {
    "CrossForceTalk",
    "head_jnt",
    "chest_jnt",
    "cl_RhandA",
    "wait",
};
static const char *const names_0070DBA4[1] = {
    "talk",
};
static const char *const names_0070DBB0[1] = {
    "step",
};
static const char *const names_0070DBBC[1] = {
    "walk",
};
static const char *const names_0070DBC8[1] = {
    "wait",
};
static const char *const names_0070DBD4[1] = {
    "talk",
};
static const char *const names_0070DBE0[1] = {
    "step",
};
static const char *const names_007719DC[4] = {
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

void func_005C50AC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00771774;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcCrossOldMan";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\202\267\202\352\210\341\202\242\226\352\202\263\202\361";
    fill_names((sead_SafeString *)&data_0070DB78, names_0070DB78, 5);
    fill_names((sead_SafeString *)&data_0070DBA4, names_0070DBA4, 1);
    fill_names((sead_SafeString *)&data_0070DBB0, names_0070DBB0, 1);
    fill_names((sead_SafeString *)&data_0070DBBC, names_0070DBBC, 1);
    fill_names((sead_SafeString *)&data_0070DBC8, names_0070DBC8, 1);
    fill_names((sead_SafeString *)&data_0070DBD4, names_0070DBD4, 1);
    fill_names((sead_SafeString *)&data_0070DBE0, names_0070DBE0, 1);
    fill_names((sead_SafeString *)&data_007719DC, names_007719DC, 4);
    data_0070DB68 = 0xFFFFFFFFu;
    data_0070DB6C = 0xFFFFFFFFu;
    data_0070DB70 = 0x00000000u;
    data_0070DB74 = 0x00000000u;
    data_00771774 = 0x00000000u;
    data_00771778 = 0x00000005u;
    data_0077177C = (uintptr_t)&data_00771780;
    data_007719FC = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00771A00 = 0x3F8CCCCDu /* 1.100000023841858 f */;
    data_00771A04 = 0x3FC00000u /* 1.5 f */;
    data_00771A08 = 0x40A00000u /* 5.0 f */;
    data_00771A0C = 0x40400000u /* 3.0 f */;
    data_00771A10 = 0x3F800000u /* 1.0 f */;
    data_00771A14 = 0x0000000Eu;
    *(uint16_t *)&data_00771A18 = 0x5Fu;
    *(uint16_t *)&data_00771A1A = 0xB4u;
    *(uint8_t *)&data_00771A1C = 0xEEu;
    *(uint8_t *)&data_00771A1D = 0xECu;
    *(uint8_t *)&data_00771A1E = 0xFu;
    *(uint8_t *)&data_00771A1F = 0x28u;
    *(uint8_t *)&data_00771A20 = 0x1u;
    data_00771A24 = 0x00000000u;
    data_00771A28 = 0xFFFFFFFFu;
    data_00771A2C = 0x00000000u;
    *(uint8_t *)&data_00771A30 = 0x1u;
    *(uint8_t *)&data_00771A31 = 0x1u;
    func_0019B51C((uintptr_t)&data_00771794, (uintptr_t)&func_00605EAC, 0x0000018Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00771774, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
