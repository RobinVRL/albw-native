/* USA 005C5D5C (EU 005C5D34): static initialiser, decompiled by tools/decomp_initializer.py.
 * 12 sead::SafeString name tables (21 names), 47 other stores, 5 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E5D0;
extern uint32_t data_0070E5D4;
extern uint32_t data_0070E5D8;
extern uint32_t data_0070E5DC;
extern uint32_t data_0070E5E0;
extern uint32_t data_0070E5E4;
extern uint32_t data_0070E5E8;
extern uint32_t data_0070E5EC;
extern uint32_t data_0070E5F0;
extern uint32_t data_0070E5F4;
extern uint32_t data_0070E5F8;
extern uint32_t data_0070E614;
extern uint32_t data_0070E620;
extern uint32_t data_0070E62C;
extern uint32_t data_0070E638;
extern uint32_t data_0070E644;
extern uint32_t data_0070E650;
extern uint32_t data_0070E65C;
extern uint32_t data_0070E668;
extern uint32_t data_0070E674;
extern uint32_t data_0070E680;
extern uint32_t data_00776D3C;
extern uint32_t data_00776D40;
extern uint32_t data_00776D44;
extern uint32_t data_00776D48;
extern uint32_t data_00776D5C;
extern uint32_t data_00776FA4;
extern uint32_t data_00776FA8;
extern uint32_t data_00776FAC;
extern uint32_t data_00776FB0;
extern uint32_t data_00776FB1;
extern uint32_t data_00776FB4;
extern uint32_t data_00776FF4;
extern uint32_t data_00776FF8;
extern uint32_t data_00776FFC;
extern uint32_t data_00777000;
extern uint32_t data_00777004;
extern uint32_t data_00777008;
extern uint32_t data_0077700C;
extern uint32_t data_00777010;
extern uint32_t data_00777014;
extern uint32_t data_00777018;
extern uint32_t data_0077701C;
extern uint32_t data_00777020;
extern uint32_t data_00777024;
extern uint32_t data_00777028;
extern uint32_t data_0077702C;
extern uint32_t data_00777030;
extern uint32_t data_00777034;
extern uint32_t data_00777038;
extern uint32_t data_0077703C;
extern uint32_t data_00777040;
extern uint32_t data_00777044;
extern uint32_t data_00777048;
extern uint32_t data_0077704C;
extern uint32_t data_0077704E;
extern uint32_t data_00777050;
extern uint32_t data_00777051;
extern uint32_t data_00777052;
extern uint32_t data_00777053;
extern uint32_t data_00777054;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00116960(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606224(void);

static const char *const names_0070E5F8[3] = {
    "HandL",
    "HandR",
    "wait",
};
static const char *const names_0070E614[1] = {
    "talk",
};
static const char *const names_0070E620[1] = {
    "step",
};
static const char *const names_0070E62C[1] = {
    "walk",
};
static const char *const names_0070E638[1] = {
    "carry_step",
};
static const char *const names_0070E644[1] = {
    "carry_wait",
};
static const char *const names_0070E650[1] = {
    "pose",
};
static const char *const names_0070E65C[1] = {
    "pose_loop",
};
static const char *const names_0070E668[1] = {
    "throw",
};
static const char *const names_0070E674[1] = {
    "throw_loop",
};
static const char *const names_0070E680[1] = {
    "walk_rock",
};
static const char *const names_00776FB4[8] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
    "talk",
    "throw",
    "carry_wait",
    "carry_step",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005C5D5C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070E5F8, names_0070E5F8, 3);
    fill_names((sead_SafeString *)&data_0070E614, names_0070E614, 1);
    fill_names((sead_SafeString *)&data_0070E620, names_0070E620, 1);
    fill_names((sead_SafeString *)&data_0070E62C, names_0070E62C, 1);
    fill_names((sead_SafeString *)&data_0070E638, names_0070E638, 1);
    fill_names((sead_SafeString *)&data_0070E644, names_0070E644, 1);
    fill_names((sead_SafeString *)&data_0070E650, names_0070E650, 1);
    fill_names((sead_SafeString *)&data_0070E65C, names_0070E65C, 1);
    fill_names((sead_SafeString *)&data_0070E668, names_0070E668, 1);
    fill_names((sead_SafeString *)&data_0070E674, names_0070E674, 1);
    fill_names((sead_SafeString *)&data_0070E680, names_0070E680, 1);
    fill_names((sead_SafeString *)&data_00776FB4, names_00776FB4, 8);
    data_0070E5E8 = 0xFFFFFFFFu;
    data_0070E5EC = 0xFFFFFFFFu;
    data_0070E5F0 = 0x00000000u;
    data_0070E5F4 = 0x00000000u;
    data_00776FF4 = 0x00000000u /* 0.0 f */;
    data_00776FF8 = 0x3DCCCCCDu /* 0.10000000149011612 f */;
    data_00776FFC = 0x3E99999Au /* 0.30000001192092896 f */;
    data_00777000 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00777004 = 0x40C00000u /* 6.0 f */;
    data_00777008 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    uintptr_t ret0 = func_00114608(0x00000000u, (uintptr_t)&func_00116960);
    data_0070E5D0 = ret0;
    data_0070E5D4 = ret0;
    data_0070E5D8 = ret0;
    uintptr_t ret1 = func_00114608(0x4E638E39u, 0x00000000u);
    data_0070E5DC = ret1;
    uintptr_t ret2 = func_00114608(0x4B360B61u, 0x00000000u);
    data_0070E5E0 = ret2;
    uintptr_t ret3 = func_00114608(0x4E471C72u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00776D3C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcMountaineer";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"zÎ®";
    data_0070E5E4 = ret3;
    data_00776D3C = 0x00000000u;
    data_00776D40 = 0x00000005u;
    data_00776D44 = (uintptr_t)&data_00776D48;
    data_0077700C = 0x00000000u /* 0.0 f */;
    data_00777010 = 0x3DCCCCCDu /* 0.10000000149011612 f */;
    data_00777014 = 0x00000000u /* 0.0 f */;
    data_00777018 = 0x00000000u /* 0.0 f */;
    data_0077701C = 0x3DCCCCCDu /* 0.10000000149011612 f */;
    data_00777020 = 0x00000000u /* 0.0 f */;
    data_00777024 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00777028 = 0x40C00000u /* 6.0 f */;
    data_0077702C = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00777030 = 0x3D4CCCCDu /* 0.05000000074505806 f */;
    data_00777034 = 0x3F75C28Fu /* 0.9599999785423279 f */;
    data_00777038 = 0x3FC00000u /* 1.5 f */;
    data_0077703C = 0x40C00000u /* 6.0 f */;
    data_00777040 = 0x40400000u /* 3.0 f */;
    data_00777044 = 0x3F800000u /* 1.0 f */;
    data_00777048 = 0x0000000Fu;
    *(uint16_t *)&data_0077704C = 0x5Fu;
    *(uint16_t *)&data_0077704E = 0xB4u;
    *(uint8_t *)&data_00777050 = 0xEEu;
    *(uint8_t *)&data_00777051 = 0xECu;
    *(uint8_t *)&data_00777052 = 0xFu;
    *(uint8_t *)&data_00777053 = 0x28u;
    *(uint8_t *)&data_00777054 = 0x14u;
    func_0019B51C((uintptr_t)&data_00776D5C, (uintptr_t)&func_00606224, 0x000001C2u, (uintptr_t)((char *)stk + 16));
    data_00776FA4 = 0x00000001u;
    data_00776FA8 = 0x00000000u;
    data_00776FAC = 0x00000000u;
    *(uint8_t *)&data_00776FB0 = 0x0u;
    *(uint8_t *)&data_00776FB1 = 0x1u;
}
