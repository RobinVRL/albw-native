/* USA 005CE980 (EU 005CE958): static initialiser, decompiled by tools/decomp_initializer.py.
 * 5 sead::SafeString name tables (8 names), 38 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DDE8;
extern uint32_t data_0070DDEC;
extern uint32_t data_0070DDF0;
extern uint32_t data_0070DDF4;
extern uint32_t data_0070DDF8;
extern uint32_t data_0070DE04;
extern uint32_t data_0070DE10;
extern uint32_t data_0070DE1C;
extern uint32_t data_00772A74;
extern uint32_t data_00772A78;
extern uint32_t data_00772A7C;
extern uint32_t data_00772A80;
extern uint32_t data_00772A94;
extern uint32_t data_00772CDC;
extern uint32_t data_00772CE0;
extern uint32_t data_00772CE4;
extern uint32_t data_00772CE8;
extern uint32_t data_00772CFC;
extern uint32_t data_00772F44;
extern uint32_t data_00772F64;
extern uint32_t data_00772F68;
extern uint32_t data_00772F6C;
extern uint32_t data_00772F70;
extern uint32_t data_00772F74;
extern uint32_t data_00772F78;
extern uint32_t data_00772F7C;
extern uint32_t data_00772F80;
extern uint32_t data_00772F82;
extern uint32_t data_00772F84;
extern uint32_t data_00772F85;
extern uint32_t data_00772F86;
extern uint32_t data_00772F87;
extern uint32_t data_00772F88;
extern uint32_t data_00772F8C;
extern uint32_t data_00772F90;
extern uint32_t data_00772F94;
extern uint32_t data_00772F98;
extern uint32_t data_00772F9C;
extern uint32_t data_00772FA0;
extern uint32_t data_00772FA4;
extern uint32_t data_00772FA8;
extern uint32_t data_00772FAA;
extern uint32_t data_00772FAC;
extern uint32_t data_00772FAD;
extern uint32_t data_00772FAE;
extern uint32_t data_00772FAF;
extern uint32_t data_00772FB0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606FCC(void);
void func_00608D34(void);

static const char *const names_0070DDF8[1] = {
    "wait",
};
static const char *const names_0070DE04[1] = {
    "talk",
};
static const char *const names_0070DE10[1] = {
    "step",
};
static const char *const names_0070DE1C[1] = {
    "random",
};
static const char *const names_00772F44[4] = {
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

void func_005CE980(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00772A74;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcGameGiriGiri";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203M\203\212\203M\203\212\211\256\201i\214\365\201j";
    fill_names((sead_SafeString *)&data_0070DDF8, names_0070DDF8, 1);
    fill_names((sead_SafeString *)&data_0070DE04, names_0070DE04, 1);
    fill_names((sead_SafeString *)&data_0070DE10, names_0070DE10, 1);
    fill_names((sead_SafeString *)&data_0070DE1C, names_0070DE1C, 1);
    fill_names((sead_SafeString *)&data_00772F44, names_00772F44, 4);
    data_0070DDE8 = 0xFFFFFFFFu;
    data_0070DDEC = 0xFFFFFFFFu;
    data_0070DDF0 = 0x00000000u;
    data_0070DDF4 = 0x00000000u;
    data_00772A74 = 0x00000000u;
    data_00772A78 = 0x00000005u;
    data_00772A7C = (uintptr_t)&data_00772A80;
    data_00772F64 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00772F68 = 0x3F800000u /* 1.0 f */;
    data_00772F6C = 0x3FC00000u /* 1.5 f */;
    data_00772F70 = 0x40A00000u /* 5.0 f */;
    data_00772F74 = 0x4019999Au /* 2.4000000953674316 f */;
    data_00772F78 = 0x3FA66666u /* 1.2999999523162842 f */;
    data_00772F7C = 0x0000000Au;
    *(uint16_t *)&data_00772F80 = 0x5Au;
    *(uint16_t *)&data_00772F82 = 0xB4u;
    *(uint8_t *)&data_00772F84 = 0xE7u;
    *(uint8_t *)&data_00772F85 = 0xF1u;
    *(uint8_t *)&data_00772F86 = 0x14u;
    *(uint8_t *)&data_00772F87 = 0xFu;
    *(uint8_t *)&data_00772F88 = 0xAu;
    data_00772F8C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00772F90 = 0x3F800000u /* 1.0 f */;
    data_00772F94 = 0x3FC00000u /* 1.5 f */;
    data_00772F98 = 0x40A00000u /* 5.0 f */;
    data_00772F9C = 0x4019999Au /* 2.4000000953674316 f */;
    data_00772FA0 = 0x3FA66666u /* 1.2999999523162842 f */;
    data_00772FA4 = 0x0000000Du;
    *(uint16_t *)&data_00772FA8 = 0x5Au;
    *(uint16_t *)&data_00772FAA = 0xB4u;
    *(uint8_t *)&data_00772FAC = 0xE7u;
    *(uint8_t *)&data_00772FAD = 0xF1u;
    *(uint8_t *)&data_00772FAE = 0x1Eu;
    *(uint8_t *)&data_00772FAF = 0xFu;
    *(uint8_t *)&data_00772FB0 = 0xAu;
    func_0019B51C((uintptr_t)&data_00772A94, (uintptr_t)&func_00606FCC, 0x000001DCu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00772A74, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00772CDC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcGameGiriGiriUra";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203M\203\212\203M\203\212\211\256\201i\210\305\201j";
    data_00772CDC = 0x00000000u;
    data_00772CE0 = 0x00000005u;
    data_00772CE4 = (uintptr_t)&data_00772CE8;
    func_0019B51C((uintptr_t)&data_00772CFC, (uintptr_t)&func_00608D34, 0x000001DDu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00772CDC, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
