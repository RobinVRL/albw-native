/* USA 0059C230 (EU 0059C208): static initialiser, decompiled by tools/decomp_initializer.py.
 * 13 sead::SafeString name tables (17 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E0E0;
extern uint32_t data_0070E0E4;
extern uint32_t data_0070E0E8;
extern uint32_t data_0070E0EC;
extern uint32_t data_0070E0F0;
extern uint32_t data_0070E104;
extern uint32_t data_0070E110;
extern uint32_t data_0070E11C;
extern uint32_t data_0070E128;
extern uint32_t data_0070E134;
extern uint32_t data_0070E140;
extern uint32_t data_0070E14C;
extern uint32_t data_0070E158;
extern uint32_t data_0070E164;
extern uint32_t data_0070E170;
extern uint32_t data_0070E17C;
extern uint32_t data_00774CE4;
extern uint32_t data_00774CE8;
extern uint32_t data_00774CEC;
extern uint32_t data_00774CF0;
extern uint32_t data_00774D04;
extern uint32_t data_00774F4C;
extern uint32_t data_00774F6C;
extern uint32_t data_00774F70;
extern uint32_t data_00774F74;
extern uint32_t data_00774F78;
extern uint32_t data_00774F7C;
extern uint32_t data_00774F80;
extern uint32_t data_00774F84;
extern uint32_t data_00774F88;
extern uint32_t data_00774F8A;
extern uint32_t data_00774F8C;
extern uint32_t data_00774F8D;
extern uint32_t data_00774F8E;
extern uint32_t data_00774F8F;
extern uint32_t data_00774F90;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060ACA4(void);

static const char *const names_0070E0F0[2] = {
    "HandR",
    "wait",
};
static const char *const names_0070E104[1] = {
    "talk",
};
static const char *const names_0070E110[1] = {
    "step",
};
static const char *const names_0070E11C[1] = {
    "walk",
};
static const char *const names_0070E128[1] = {
    "wait_down",
};
static const char *const names_0070E134[1] = {
    "talk_down",
};
static const char *const names_0070E140[1] = {
    "wait",
};
static const char *const names_0070E14C[1] = {
    "talk",
};
static const char *const names_0070E158[1] = {
    "step",
};
static const char *const names_0070E164[1] = {
    "walk",
};
static const char *const names_0070E170[1] = {
    "wait_down",
};
static const char *const names_0070E17C[1] = {
    "talk_down",
};
static const char *const names_00774F4C[4] = {
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

void func_0059C230(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00774CE4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcHilda";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203q\203\213\203_";
    fill_names((sead_SafeString *)&data_0070E0F0, names_0070E0F0, 2);
    fill_names((sead_SafeString *)&data_0070E104, names_0070E104, 1);
    fill_names((sead_SafeString *)&data_0070E110, names_0070E110, 1);
    fill_names((sead_SafeString *)&data_0070E11C, names_0070E11C, 1);
    fill_names((sead_SafeString *)&data_0070E128, names_0070E128, 1);
    fill_names((sead_SafeString *)&data_0070E134, names_0070E134, 1);
    fill_names((sead_SafeString *)&data_0070E140, names_0070E140, 1);
    fill_names((sead_SafeString *)&data_0070E14C, names_0070E14C, 1);
    fill_names((sead_SafeString *)&data_0070E158, names_0070E158, 1);
    fill_names((sead_SafeString *)&data_0070E164, names_0070E164, 1);
    fill_names((sead_SafeString *)&data_0070E170, names_0070E170, 1);
    fill_names((sead_SafeString *)&data_0070E17C, names_0070E17C, 1);
    fill_names((sead_SafeString *)&data_00774F4C, names_00774F4C, 4);
    data_0070E0E0 = 0xFFFFFFFFu;
    data_0070E0E4 = 0xFFFFFFFFu;
    data_0070E0E8 = 0x00000000u;
    data_0070E0EC = 0x00000000u;
    data_00774CE4 = 0x00000000u;
    data_00774CE8 = 0x00000005u;
    data_00774CEC = (uintptr_t)&data_00774CF0;
    data_00774F6C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00774F70 = 0x3F800000u /* 1.0 f */;
    data_00774F74 = 0x3FC00000u /* 1.5 f */;
    data_00774F78 = 0x40A00000u /* 5.0 f */;
    data_00774F7C = 0x40400000u /* 3.0 f */;
    data_00774F80 = 0x3FA00000u /* 1.25 f */;
    data_00774F84 = 0x00000014u;
    *(uint16_t *)&data_00774F88 = 0x5Fu;
    *(uint16_t *)&data_00774F8A = 0xB4u;
    *(uint8_t *)&data_00774F8C = 0xEEu;
    *(uint8_t *)&data_00774F8D = 0xECu;
    *(uint8_t *)&data_00774F8E = 0xFu;
    *(uint8_t *)&data_00774F8F = 0x1Eu;
    *(uint8_t *)&data_00774F90 = 0xAu;
    func_0019B51C((uintptr_t)&data_00774D04, (uintptr_t)&func_0060ACA4, 0x000001BCu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00774CE4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
