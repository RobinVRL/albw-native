/* USA 005B7054 (EU 005B702C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 7 sead::SafeString name tables (11 names), 21 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070E238;
extern uint32_t data_0070E23C;
extern uint32_t data_0070E240;
extern uint32_t data_0070E244;
extern uint32_t data_0070E248;
extern uint32_t data_0070E25C;
extern uint32_t data_0070E268;
extern uint32_t data_0070E274;
extern uint32_t data_0070E280;
extern uint32_t data_0070E28C;
extern uint32_t data_00775244;
extern uint32_t data_00775248;
extern uint32_t data_0077524C;
extern uint32_t data_00775250;
extern uint32_t data_00775264;
extern uint32_t data_007754AC;
extern uint32_t data_007754CC;
extern uint32_t data_007754D0;
extern uint32_t data_007754D4;
extern uint32_t data_007754D8;
extern uint32_t data_007754DC;
extern uint32_t data_007754E0;
extern uint32_t data_007754E4;
extern uint32_t data_007754E8;
extern uint32_t data_007754EA;
extern uint32_t data_007754EC;
extern uint32_t data_007754ED;
extern uint32_t data_007754EE;
extern uint32_t data_007754EF;
extern uint32_t data_007754F0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060418C(void);

static const char *const names_0070E248[2] = {
    "HintGhost",
    "wait",
};
static const char *const names_0070E25C[1] = {
    "talk",
};
static const char *const names_0070E268[1] = {
    "surprise_st",
};
static const char *const names_0070E274[1] = {
    "surprise_loop",
};
static const char *const names_0070E280[1] = {
    "book",
};
static const char *const names_0070E28C[1] = {
    "sleep",
};
static const char *const names_007754AC[4] = {
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

void func_005B7054(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00775244;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcHintGhost";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203q\203\223\203g\227H\227\354";
    fill_names((sead_SafeString *)&data_0070E248, names_0070E248, 2);
    fill_names((sead_SafeString *)&data_0070E25C, names_0070E25C, 1);
    fill_names((sead_SafeString *)&data_0070E268, names_0070E268, 1);
    fill_names((sead_SafeString *)&data_0070E274, names_0070E274, 1);
    fill_names((sead_SafeString *)&data_0070E280, names_0070E280, 1);
    fill_names((sead_SafeString *)&data_0070E28C, names_0070E28C, 1);
    fill_names((sead_SafeString *)&data_007754AC, names_007754AC, 4);
    data_0070E238 = 0xFFFFFFFFu;
    data_0070E23C = 0xFFFFFFFFu;
    data_0070E240 = 0x00000000u;
    data_0070E244 = 0x00000000u;
    data_00775244 = 0x00000000u;
    data_00775248 = 0x00000005u;
    data_0077524C = (uintptr_t)&data_00775250;
    data_007754CC = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_007754D0 = 0x3F933333u /* 1.149999976158142 f */;
    data_007754D4 = 0x3FC00000u /* 1.5 f */;
    data_007754D8 = 0x40A00000u /* 5.0 f */;
    data_007754DC = 0x40400000u /* 3.0 f */;
    data_007754E0 = 0x3F000000u /* 0.5 f */;
    data_007754E4 = 0x0000000Cu;
    *(uint16_t *)&data_007754E8 = 0x5Fu;
    *(uint16_t *)&data_007754EA = 0xB4u;
    *(uint8_t *)&data_007754EC = 0x0u;
    *(uint8_t *)&data_007754ED = 0xFFu;
    *(uint8_t *)&data_007754EE = 0x1u;
    *(uint8_t *)&data_007754EF = 0x1u;
    *(uint8_t *)&data_007754F0 = 0x1u;
    func_0019B51C((uintptr_t)&data_00775264, (uintptr_t)&func_0060418C, 0x000001B0u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00775244, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
