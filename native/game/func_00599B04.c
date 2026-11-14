/* USA 00599B04 (EU 00599ADC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (8 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E298;
extern uint32_t data_0070E29C;
extern uint32_t data_0070E2A0;
extern uint32_t data_0070E2A4;
extern uint32_t data_0070E2A8;
extern uint32_t data_0070E2B4;
extern uint32_t data_0070E2C0;
extern uint32_t data_0070E2CC;
extern uint32_t data_007754F4;
extern uint32_t data_007754F8;
extern uint32_t data_007754FC;
extern uint32_t data_00775500;
extern uint32_t data_00775514;
extern uint32_t data_0077575C;
extern uint32_t data_0077577C;
extern uint32_t data_00775780;
extern uint32_t data_00775784;
extern uint32_t data_00775788;
extern uint32_t data_0077578C;
extern uint32_t data_00775790;
extern uint32_t data_00775794;
extern uint32_t data_00775798;
extern uint32_t data_0077579A;
extern uint32_t data_0077579C;
extern uint32_t data_0077579D;
extern uint32_t data_0077579E;
extern uint32_t data_0077579F;
extern uint32_t data_007757A0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060A5A8(void);

static const char *const names_0070E2A8[1] = {
    "wait",
};
static const char *const names_0070E2B4[1] = {
    "talk",
};
static const char *const names_0070E2C0[1] = {
    "step",
};
static const char *const names_0070E2CC[1] = {
    "walk",
};
static const char *const names_0077575C[4] = {
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

void func_00599B04(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007754F4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcInpa";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203C\203\223\203p";
    fill_names((sead_SafeString *)&data_0070E2A8, names_0070E2A8, 1);
    fill_names((sead_SafeString *)&data_0070E2B4, names_0070E2B4, 1);
    fill_names((sead_SafeString *)&data_0070E2C0, names_0070E2C0, 1);
    fill_names((sead_SafeString *)&data_0070E2CC, names_0070E2CC, 1);
    fill_names((sead_SafeString *)&data_0077575C, names_0077575C, 4);
    data_0070E298 = 0xFFFFFFFFu;
    data_0070E29C = 0xFFFFFFFFu;
    data_0070E2A0 = 0x00000000u;
    data_0070E2A4 = 0x00000000u;
    data_007754F4 = 0x00000000u;
    data_007754F8 = 0x00000005u;
    data_007754FC = (uintptr_t)&data_00775500;
    data_0077577C = 0x3CF5C28Fu /* 0.029999999329447746 f */;
    data_00775780 = 0x3F800000u /* 1.0 f */;
    data_00775784 = 0x3FC00000u /* 1.5 f */;
    data_00775788 = 0x40400000u /* 3.0 f */;
    data_0077578C = 0x40400000u /* 3.0 f */;
    data_00775790 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_00775794 = 0x00000019u;
    *(uint16_t *)&data_00775798 = 0x5Fu;
    *(uint16_t *)&data_0077579A = 0xB4u;
    *(uint8_t *)&data_0077579C = 0xEEu;
    *(uint8_t *)&data_0077579D = 0xECu;
    *(uint8_t *)&data_0077579E = 0xFu;
    *(uint8_t *)&data_0077579F = 0x14u;
    *(uint8_t *)&data_007757A0 = 0x14u;
    func_0019B51C((uintptr_t)&data_00775514, (uintptr_t)&func_0060A5A8, 0x000001ACu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_007754F4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
