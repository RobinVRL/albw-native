/* USA 005E1B48 (EU 005E1B20): static initialiser, decompiled by tools/decomp_initializer.py.
 * 4 sead::SafeString name tables (7 names), 38 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E4D8;
extern uint32_t data_0070E4DC;
extern uint32_t data_0070E4E0;
extern uint32_t data_0070E4E4;
extern uint32_t data_0070E4E8;
extern uint32_t data_0070E4F4;
extern uint32_t data_0070E500;
extern uint32_t data_0077629C;
extern uint32_t data_007762A0;
extern uint32_t data_007762A4;
extern uint32_t data_007762A8;
extern uint32_t data_007762BC;
extern uint32_t data_00776504;
extern uint32_t data_00776508;
extern uint32_t data_0077650C;
extern uint32_t data_00776510;
extern uint32_t data_00776524;
extern uint32_t data_0077676C;
extern uint32_t data_0077678C;
extern uint32_t data_00776790;
extern uint32_t data_00776794;
extern uint32_t data_00776798;
extern uint32_t data_0077679C;
extern uint32_t data_007767A0;
extern uint32_t data_007767A4;
extern uint32_t data_007767A8;
extern uint32_t data_007767AA;
extern uint32_t data_007767AC;
extern uint32_t data_007767AD;
extern uint32_t data_007767AE;
extern uint32_t data_007767AF;
extern uint32_t data_007767B0;
extern uint32_t data_007767B4;
extern uint32_t data_007767B8;
extern uint32_t data_007767BC;
extern uint32_t data_007767C0;
extern uint32_t data_007767C4;
extern uint32_t data_007767C8;
extern uint32_t data_007767CC;
extern uint32_t data_007767D0;
extern uint32_t data_007767D2;
extern uint32_t data_007767D4;
extern uint32_t data_007767D5;
extern uint32_t data_007767D6;
extern uint32_t data_007767D7;
extern uint32_t data_007767D8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00607D7C(void);
void func_006091F8(void);

static const char *const names_0070E4E8[1] = {
    "wait",
};
static const char *const names_0070E4F4[1] = {
    "talk",
};
static const char *const names_0070E500[1] = {
    "step",
};
static const char *const names_0077676C[4] = {
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

void func_005E1B48(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0077629C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcMilkBarMaster";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203~\203\213\203N\203o\201[\202\314\203}\203X\203^\201[\201i\214\365\201j";
    fill_names((sead_SafeString *)&data_0070E4E8, names_0070E4E8, 1);
    fill_names((sead_SafeString *)&data_0070E4F4, names_0070E4F4, 1);
    fill_names((sead_SafeString *)&data_0070E500, names_0070E500, 1);
    fill_names((sead_SafeString *)&data_0077676C, names_0077676C, 4);
    data_0070E4D8 = 0xFFFFFFFFu;
    data_0070E4DC = 0xFFFFFFFFu;
    data_0070E4E0 = 0x00000000u;
    data_0070E4E4 = 0x00000000u;
    data_0077629C = 0x00000000u;
    data_007762A0 = 0x00000005u;
    data_007762A4 = (uintptr_t)&data_007762A8;
    data_0077678C = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00776790 = 0x3F800000u /* 1.0 f */;
    data_00776794 = 0x3FC00000u /* 1.5 f */;
    data_00776798 = 0x40A00000u /* 5.0 f */;
    data_0077679C = 0x40400000u /* 3.0 f */;
    data_007767A0 = 0x4019999Au /* 2.4000000953674316 f */;
    data_007767A4 = 0x00000019u;
    *(uint16_t *)&data_007767A8 = 0x5Fu;
    *(uint16_t *)&data_007767AA = 0xB4u;
    *(uint8_t *)&data_007767AC = 0xEEu;
    *(uint8_t *)&data_007767AD = 0xECu;
    *(uint8_t *)&data_007767AE = 0xFu;
    *(uint8_t *)&data_007767AF = 0x1Eu;
    *(uint8_t *)&data_007767B0 = 0xFu;
    data_007767B4 = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_007767B8 = 0x3F800000u /* 1.0 f */;
    data_007767BC = 0x3FC00000u /* 1.5 f */;
    data_007767C0 = 0x40A00000u /* 5.0 f */;
    data_007767C4 = 0x40400000u /* 3.0 f */;
    data_007767C8 = 0x40133333u /* 2.299999952316284 f */;
    data_007767CC = 0x00000014u;
    *(uint16_t *)&data_007767D0 = 0x5Fu;
    *(uint16_t *)&data_007767D2 = 0xB4u;
    *(uint8_t *)&data_007767D4 = 0xECu;
    *(uint8_t *)&data_007767D5 = 0xECu;
    *(uint8_t *)&data_007767D6 = 0xFu;
    *(uint8_t *)&data_007767D7 = 0x19u;
    *(uint8_t *)&data_007767D8 = 0xFu;
    func_0019B51C((uintptr_t)&data_007762BC, (uintptr_t)&func_00607D7C, 0x000001C6u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0077629C, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00776504;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcMilkBarMasterUra";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203~\203\213\203N\203o\201[\202\314\203}\203X\203^\201[\201i\210\305\201j";
    data_00776504 = 0x00000000u;
    data_00776508 = 0x00000005u;
    data_0077650C = (uintptr_t)&data_00776510;
    func_0019B51C((uintptr_t)&data_00776524, (uintptr_t)&func_006091F8, 0x000001C7u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00776504, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
