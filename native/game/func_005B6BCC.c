/* USA 005B6BCC (EU 005B6BA4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 4 sead::SafeString name tables (8 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DE28;
extern uint32_t data_0070DE2C;
extern uint32_t data_0070DE30;
extern uint32_t data_0070DE34;
extern uint32_t data_0070DE38;
extern uint32_t data_0070DE4C;
extern uint32_t data_0070DE58;
extern uint32_t data_00772FB4;
extern uint32_t data_00772FB8;
extern uint32_t data_00772FBC;
extern uint32_t data_00772FC0;
extern uint32_t data_00772FD4;
extern uint32_t data_0077321C;
extern uint32_t data_0077323C;
extern uint32_t data_00773240;
extern uint32_t data_00773244;
extern uint32_t data_00773248;
extern uint32_t data_0077324C;
extern uint32_t data_00773250;
extern uint32_t data_00773254;
extern uint32_t data_00773258;
extern uint32_t data_0077325A;
extern uint32_t data_0077325C;
extern uint32_t data_0077325D;
extern uint32_t data_0077325E;
extern uint32_t data_0077325F;
extern uint32_t data_00773260;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006040D0(void);

static const char *const names_0070DE38[2] = {
    "kokko_finish",
    "wait",
};
static const char *const names_0070DE4C[1] = {
    "talk",
};
static const char *const names_0070DE58[1] = {
    "step",
};
static const char *const names_0077321C[4] = {
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

void func_005B6BCC(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00772FB4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcGameKokko";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203R\203b\203R\211\256";
    fill_names((sead_SafeString *)&data_0070DE38, names_0070DE38, 2);
    fill_names((sead_SafeString *)&data_0070DE4C, names_0070DE4C, 1);
    fill_names((sead_SafeString *)&data_0070DE58, names_0070DE58, 1);
    fill_names((sead_SafeString *)&data_0077321C, names_0077321C, 4);
    data_0070DE28 = 0xFFFFFFFFu;
    data_0070DE2C = 0xFFFFFFFFu;
    data_0070DE30 = 0x00000000u;
    data_0070DE34 = 0x00000000u;
    data_00772FB4 = 0x00000000u;
    data_00772FB8 = 0x00000005u;
    data_00772FBC = (uintptr_t)&data_00772FC0;
    data_0077323C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00773240 = 0x3F800000u /* 1.0 f */;
    data_00773244 = 0x3FC00000u /* 1.5 f */;
    data_00773248 = 0x40A00000u /* 5.0 f */;
    data_0077324C = 0x40400000u /* 3.0 f */;
    data_00773250 = 0x3FA00000u /* 1.25 f */;
    data_00773254 = 0x0000000Du;
    *(uint16_t *)&data_00773258 = 0x5Fu;
    *(uint16_t *)&data_0077325A = 0xB4u;
    *(uint8_t *)&data_0077325C = 0xEEu;
    *(uint8_t *)&data_0077325D = 0xECu;
    *(uint8_t *)&data_0077325E = 0xFu;
    *(uint8_t *)&data_0077325F = 0x1Eu;
    *(uint8_t *)&data_00773260 = 0xFu;
    func_0019B51C((uintptr_t)&data_00772FD4, (uintptr_t)&func_006040D0, 0x000001DBu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00772FB4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
