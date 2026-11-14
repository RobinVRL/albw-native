/* USA 005E2614 (EU 005E25EC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 8 sead::SafeString name tables (12 names), 26 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F1F8;
extern uint32_t data_0070F1FC;
extern uint32_t data_0070F200;
extern uint32_t data_0070F204;
extern uint32_t data_0070F208;
extern uint32_t data_0070F21C;
extern uint32_t data_0070F228;
extern uint32_t data_0070F234;
extern uint32_t data_0070F240;
extern uint32_t data_0070F24C;
extern uint32_t data_0070F258;
extern uint32_t data_00781550;
extern uint32_t data_00781554;
extern uint32_t data_00781558;
extern uint32_t data_0078155C;
extern uint32_t data_00781570;
extern uint32_t data_007817B8;
extern uint32_t data_007817D8;
extern uint32_t data_007817DC;
extern uint32_t data_007817E0;
extern uint32_t data_007817E4;
extern uint32_t data_007817E8;
extern uint32_t data_007817EC;
extern uint32_t data_007817F0;
extern uint32_t data_007817F4;
extern uint32_t data_007817F6;
extern uint32_t data_007817F8;
extern uint32_t data_007817F9;
extern uint32_t data_007817FA;
extern uint32_t data_007817FB;
extern uint32_t data_007817FC;
extern uint32_t data_00781800;
extern uint32_t data_00781804;
extern uint32_t data_00781808;
extern uint32_t data_0078180C;
extern uint32_t data_0078180D;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607E88(void);

static const char *const names_0070F208[2] = {
    "color",
    "wait",
};
static const char *const names_0070F21C[1] = {
    "talk",
};
static const char *const names_0070F228[1] = {
    "step",
};
static const char *const names_0070F234[1] = {
    "run",
};
static const char *const names_0070F240[1] = {
    "surprise",
};
static const char *const names_0070F24C[1] = {
    "wait_panic",
};
static const char *const names_0070F258[1] = {
    "talk_panic",
};
static const char *const names_007817B8[4] = {
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

void func_005E2614(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00781550;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcZoraAttendant";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203]\201[\203\211\202\314\225t\223Y\202\242";
    fill_names((sead_SafeString *)&data_0070F208, names_0070F208, 2);
    fill_names((sead_SafeString *)&data_0070F21C, names_0070F21C, 1);
    fill_names((sead_SafeString *)&data_0070F228, names_0070F228, 1);
    fill_names((sead_SafeString *)&data_0070F234, names_0070F234, 1);
    fill_names((sead_SafeString *)&data_0070F240, names_0070F240, 1);
    fill_names((sead_SafeString *)&data_0070F24C, names_0070F24C, 1);
    fill_names((sead_SafeString *)&data_0070F258, names_0070F258, 1);
    fill_names((sead_SafeString *)&data_007817B8, names_007817B8, 4);
    data_0070F1F8 = 0xFFFFFFFFu;
    data_0070F1FC = 0xFFFFFFFFu;
    data_0070F200 = 0x00000000u;
    data_0070F204 = 0x00000000u;
    data_00781550 = 0x00000000u;
    data_00781554 = 0x00000005u;
    data_00781558 = (uintptr_t)&data_0078155C;
    data_007817D8 = 0x3D75C28Fu /* 0.05999999865889549 f */;
    data_007817DC = 0x3F800000u /* 1.0 f */;
    data_007817E0 = 0x3FC00000u /* 1.5 f */;
    data_007817E4 = 0x40A00000u /* 5.0 f */;
    data_007817E8 = 0x40400000u /* 3.0 f */;
    data_007817EC = 0x3F99999Au /* 1.2000000476837158 f */;
    data_007817F0 = 0x0000000Fu;
    *(uint16_t *)&data_007817F4 = 0x5Fu;
    *(uint16_t *)&data_007817F6 = 0xB4u;
    *(uint8_t *)&data_007817F8 = 0xEEu;
    *(uint8_t *)&data_007817F9 = 0xECu;
    *(uint8_t *)&data_007817FA = 0xFu;
    *(uint8_t *)&data_007817FB = 0x1Eu;
    *(uint8_t *)&data_007817FC = 0x1Eu;
    data_00781800 = 0x00000001u;
    data_00781804 = 0x00000000u;
    data_00781808 = 0x00000000u;
    *(uint8_t *)&data_0078180C = 0x0u;
    *(uint8_t *)&data_0078180D = 0x1u;
    func_0019B51C((uintptr_t)&data_00781570, (uintptr_t)&func_00607E88, 0x000001AAu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00781550, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
