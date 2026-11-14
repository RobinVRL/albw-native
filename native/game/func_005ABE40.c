/* USA 005ABE40 (EU 005ABE18): static initialiser, decompiled by tools/decomp_initializer.py.
 * 6 sead::SafeString name tables (10 names), 26 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DC60;
extern uint32_t data_0070DC64;
extern uint32_t data_0070DC68;
extern uint32_t data_0070DC6C;
extern uint32_t data_0070DC70;
extern uint32_t data_0070DC84;
extern uint32_t data_0070DC90;
extern uint32_t data_0070DC9C;
extern uint32_t data_0070DCA8;
extern uint32_t data_00771CE4;
extern uint32_t data_00771CE8;
extern uint32_t data_00771CEC;
extern uint32_t data_00771CF0;
extern uint32_t data_00771D04;
extern uint32_t data_00771F4C;
extern uint32_t data_00771F6C;
extern uint32_t data_00771F70;
extern uint32_t data_00771F74;
extern uint32_t data_00771F78;
extern uint32_t data_00771F7C;
extern uint32_t data_00771F80;
extern uint32_t data_00771F84;
extern uint32_t data_00771F88;
extern uint32_t data_00771F8A;
extern uint32_t data_00771F8C;
extern uint32_t data_00771F8D;
extern uint32_t data_00771F8E;
extern uint32_t data_00771F8F;
extern uint32_t data_00771F90;
extern uint32_t data_00771F94;
extern uint32_t data_00771F98;
extern uint32_t data_00771F9C;
extern uint32_t data_00771FA0;
extern uint32_t data_00771FA1;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603564(void);

static const char *const names_0070DC70[2] = {
    "fade",
    "wait",
};
static const char *const names_0070DC84[1] = {
    "talk",
};
static const char *const names_0070DC90[1] = {
    "step",
};
static const char *const names_0070DC9C[1] = {
    "life",
};
static const char *const names_0070DCA8[1] = {
    "fade",
};
static const char *const names_00771F4C[4] = {
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

void func_005ABE40(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00771CE4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcFairyBig";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"åd¸";
    fill_names((sead_SafeString *)&data_0070DC70, names_0070DC70, 2);
    fill_names((sead_SafeString *)&data_0070DC84, names_0070DC84, 1);
    fill_names((sead_SafeString *)&data_0070DC90, names_0070DC90, 1);
    fill_names((sead_SafeString *)&data_0070DC9C, names_0070DC9C, 1);
    fill_names((sead_SafeString *)&data_0070DCA8, names_0070DCA8, 1);
    fill_names((sead_SafeString *)&data_00771F4C, names_00771F4C, 4);
    data_0070DC60 = 0xFFFFFFFFu;
    data_0070DC64 = 0xFFFFFFFFu;
    data_0070DC68 = 0x00000000u;
    data_0070DC6C = 0x00000000u;
    data_00771CE4 = 0x00000000u;
    data_00771CE8 = 0x00000005u;
    data_00771CEC = (uintptr_t)&data_00771CF0;
    data_00771F6C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00771F70 = 0x3F800000u /* 1.0 f */;
    data_00771F74 = 0x3FC00000u /* 1.5 f */;
    data_00771F78 = 0x40A00000u /* 5.0 f */;
    data_00771F7C = 0x40A00000u /* 5.0 f */;
    data_00771F80 = 0x3FC00000u /* 1.5 f */;
    data_00771F84 = 0x0000000Au;
    *(uint16_t *)&data_00771F88 = 0x5Fu;
    *(uint16_t *)&data_00771F8A = 0xB4u;
    *(uint8_t *)&data_00771F8C = 0xEEu;
    *(uint8_t *)&data_00771F8D = 0xECu;
    *(uint8_t *)&data_00771F8E = 0xFu;
    *(uint8_t *)&data_00771F8F = 0x32u;
    *(uint8_t *)&data_00771F90 = 0x1Eu;
    data_00771F94 = 0x00000001u;
    data_00771F98 = 0x00000000u;
    data_00771F9C = 0x00000000u;
    *(uint8_t *)&data_00771FA0 = 0x0u;
    *(uint8_t *)&data_00771FA1 = 0x1u;
    func_0019B51C((uintptr_t)&data_00771D04, (uintptr_t)&func_00603564, 0x000001B1u, (uintptr_t)((char *)stk + 16));
}
