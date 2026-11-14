/* USA 005A2204 (EU 005A21DC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 9 sead::SafeString name tables (12 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DBF0;
extern uint32_t data_0070DBF4;
extern uint32_t data_0070DBF8;
extern uint32_t data_0070DBFC;
extern uint32_t data_0070DC00;
extern uint32_t data_0070DC0C;
extern uint32_t data_0070DC18;
extern uint32_t data_0070DC24;
extern uint32_t data_0070DC30;
extern uint32_t data_0070DC3C;
extern uint32_t data_0070DC48;
extern uint32_t data_0070DC54;
extern uint32_t data_00771A34;
extern uint32_t data_00771A38;
extern uint32_t data_00771A3C;
extern uint32_t data_00771A40;
extern uint32_t data_00771A54;
extern uint32_t data_00771C9C;
extern uint32_t data_00771CBC;
extern uint32_t data_00771CC0;
extern uint32_t data_00771CC4;
extern uint32_t data_00771CC8;
extern uint32_t data_00771CCC;
extern uint32_t data_00771CD0;
extern uint32_t data_00771CD4;
extern uint32_t data_00771CD8;
extern uint32_t data_00771CDA;
extern uint32_t data_00771CDC;
extern uint32_t data_00771CDD;
extern uint32_t data_00771CDE;
extern uint32_t data_00771CDF;
extern uint32_t data_00771CE0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B360(void);

static const char *const names_0070DC00[1] = {
    "wait",
};
static const char *const names_0070DC0C[1] = {
    "talk",
};
static const char *const names_0070DC18[1] = {
    "step",
};
static const char *const names_0070DC24[1] = {
    "walk",
};
static const char *const names_0070DC30[1] = {
    "run",
};
static const char *const names_0070DC3C[1] = {
    "open",
};
static const char *const names_0070DC48[1] = {
    "fear_wait",
};
static const char *const names_0070DC54[1] = {
    "fear_talk",
};
static const char *const names_00771C9C[4] = {
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

void func_005A2204(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00771A34;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcDanpei";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203_\203\223\203y\203C\201i\214\365\201j";
    fill_names((sead_SafeString *)&data_0070DC00, names_0070DC00, 1);
    fill_names((sead_SafeString *)&data_0070DC0C, names_0070DC0C, 1);
    fill_names((sead_SafeString *)&data_0070DC18, names_0070DC18, 1);
    fill_names((sead_SafeString *)&data_0070DC24, names_0070DC24, 1);
    fill_names((sead_SafeString *)&data_0070DC30, names_0070DC30, 1);
    fill_names((sead_SafeString *)&data_0070DC3C, names_0070DC3C, 1);
    fill_names((sead_SafeString *)&data_0070DC48, names_0070DC48, 1);
    fill_names((sead_SafeString *)&data_0070DC54, names_0070DC54, 1);
    fill_names((sead_SafeString *)&data_00771C9C, names_00771C9C, 4);
    data_0070DBF0 = 0xFFFFFFFFu;
    data_0070DBF4 = 0xFFFFFFFFu;
    data_0070DBF8 = 0x00000000u;
    data_0070DBFC = 0x00000000u;
    data_00771A34 = 0x00000000u;
    data_00771A38 = 0x00000005u;
    data_00771A3C = (uintptr_t)&data_00771A40;
    data_00771CBC = 0x3CD4FDF4u /* 0.026000000536441803 f */;
    data_00771CC0 = 0x3F800000u /* 1.0 f */;
    data_00771CC4 = 0x3FC00000u /* 1.5 f */;
    data_00771CC8 = 0x40A00000u /* 5.0 f */;
    data_00771CCC = 0x40400000u /* 3.0 f */;
    data_00771CD0 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00771CD4 = 0x0000000Fu;
    *(uint16_t *)&data_00771CD8 = 0x5Fu;
    *(uint16_t *)&data_00771CDA = 0xB4u;
    *(uint8_t *)&data_00771CDC = 0xEEu;
    *(uint8_t *)&data_00771CDD = 0xECu;
    *(uint8_t *)&data_00771CDE = 0xFu;
    *(uint8_t *)&data_00771CDF = 0x28u;
    *(uint8_t *)&data_00771CE0 = 0x14u;
    func_0019B51C((uintptr_t)&data_00771A54, (uintptr_t)&func_0060B360, 0x00000196u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00771A34, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
