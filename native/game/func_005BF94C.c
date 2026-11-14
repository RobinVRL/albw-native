/* USA 005BF94C (EU 005BF924): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (9 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E040;
extern uint32_t data_0070E044;
extern uint32_t data_0070E048;
extern uint32_t data_0070E04C;
extern uint32_t data_0070E050;
extern uint32_t data_0070E064;
extern uint32_t data_0070E070;
extern uint32_t data_0070E07C;
extern uint32_t data_00774784;
extern uint32_t data_00774788;
extern uint32_t data_0077478C;
extern uint32_t data_00774790;
extern uint32_t data_007747A4;
extern uint32_t data_007749EC;
extern uint32_t data_00774A0C;
extern uint32_t data_00774A10;
extern uint32_t data_00774A14;
extern uint32_t data_00774A18;
extern uint32_t data_00774A1C;
extern uint32_t data_00774A20;
extern uint32_t data_00774A24;
extern uint32_t data_00774A28;
extern uint32_t data_00774A2A;
extern uint32_t data_00774A2C;
extern uint32_t data_00774A2D;
extern uint32_t data_00774A2E;
extern uint32_t data_00774A2F;
extern uint32_t data_00774A30;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060517C(void);

static const char *const names_0070E050[2] = {
    "HandR",
    "wait",
};
static const char *const names_0070E064[1] = {
    "talk",
};
static const char *const names_0070E070[1] = {
    "step",
};
static const char *const names_0070E07C[1] = {
    "walk",
};
static const char *const names_007749EC[4] = {
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

void func_005BF94C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00774784;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcGhostGanon";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203S\201[\203X\203g\203K\203m\203\223";
    fill_names((sead_SafeString *)&data_0070E050, names_0070E050, 2);
    fill_names((sead_SafeString *)&data_0070E064, names_0070E064, 1);
    fill_names((sead_SafeString *)&data_0070E070, names_0070E070, 1);
    fill_names((sead_SafeString *)&data_0070E07C, names_0070E07C, 1);
    fill_names((sead_SafeString *)&data_007749EC, names_007749EC, 4);
    data_0070E040 = 0xFFFFFFFFu;
    data_0070E044 = 0xFFFFFFFFu;
    data_0070E048 = 0x00000000u;
    data_0070E04C = 0x00000000u;
    data_00774784 = 0x00000000u;
    data_00774788 = 0x00000005u;
    data_0077478C = (uintptr_t)&data_00774790;
    data_00774A0C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00774A10 = 0x3F800000u /* 1.0 f */;
    data_00774A14 = 0x3FC00000u /* 1.5 f */;
    data_00774A18 = 0x40A00000u /* 5.0 f */;
    data_00774A1C = 0x40400000u /* 3.0 f */;
    data_00774A20 = 0x3FA00000u /* 1.25 f */;
    data_00774A24 = 0x0000000Au;
    *(uint16_t *)&data_00774A28 = 0x5Fu;
    *(uint16_t *)&data_00774A2A = 0xB4u;
    *(uint8_t *)&data_00774A2C = 0xEEu;
    *(uint8_t *)&data_00774A2D = 0xECu;
    *(uint8_t *)&data_00774A2E = 0xFu;
    *(uint8_t *)&data_00774A2F = 0x32u;
    *(uint8_t *)&data_00774A30 = 0x1Eu;
    func_0019B51C((uintptr_t)&data_007747A4, (uintptr_t)&func_0060517C, 0x000001B9u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00774784, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
