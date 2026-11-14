/* USA 005AC0D4 (EU 005AC0AC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 12 sead::SafeString name tables (15 names), 27 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070DD00;
extern uint32_t data_0070DD08;
extern uint32_t data_0070DD0C;
extern uint32_t data_0070DD10;
extern uint32_t data_0070DD14;
extern uint32_t data_0070DD18;
extern uint32_t data_0070DD24;
extern uint32_t data_0070DD30;
extern uint32_t data_0070DD3C;
extern uint32_t data_0070DD48;
extern uint32_t data_0070DD54;
extern uint32_t data_0070DD60;
extern uint32_t data_0070DD6C;
extern uint32_t data_0070DD78;
extern uint32_t data_0070DD84;
extern uint32_t data_0070DD90;
extern uint32_t data_00772274;
extern uint32_t data_00772278;
extern uint32_t data_0077227C;
extern uint32_t data_00772280;
extern uint32_t data_00772294;
extern uint32_t data_007724DC;
extern uint32_t data_007724FC;
extern uint32_t data_00772500;
extern uint32_t data_00772504;
extern uint32_t data_00772508;
extern uint32_t data_0077250C;
extern uint32_t data_00772510;
extern uint32_t data_00772514;
extern uint32_t data_00772518;
extern uint32_t data_0077251A;
extern uint32_t data_0077251C;
extern uint32_t data_0077251D;
extern uint32_t data_0077251E;
extern uint32_t data_0077251F;
extern uint32_t data_00772520;
extern uint32_t data_00772524;
extern uint32_t data_00772528;
extern uint32_t data_0077252C;
extern uint32_t data_00772530;
extern uint32_t data_00772531;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00117D48(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603590(void);

static const char *const names_0070DD18[1] = {
    "wait",
};
static const char *const names_0070DD24[1] = {
    "talk",
};
static const char *const names_0070DD30[1] = {
    "step",
};
static const char *const names_0070DD3C[1] = {
    "walk",
};
static const char *const names_0070DD48[1] = {
    "run",
};
static const char *const names_0070DD54[1] = {
    "catch",
};
static const char *const names_0070DD60[1] = {
    "fall",
};
static const char *const names_0070DD6C[1] = {
    "wind",
};
static const char *const names_0070DD78[1] = {
    "watch",
};
static const char *const names_0070DD84[1] = {
    "fear",
};
static const char *const names_0070DD90[1] = {
    "response",
};
static const char *const names_007724DC[4] = {
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

void func_005AC0D4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_0070DD18, names_0070DD18, 1);
    fill_names((sead_SafeString *)&data_0070DD24, names_0070DD24, 1);
    fill_names((sead_SafeString *)&data_0070DD30, names_0070DD30, 1);
    fill_names((sead_SafeString *)&data_0070DD3C, names_0070DD3C, 1);
    fill_names((sead_SafeString *)&data_0070DD48, names_0070DD48, 1);
    fill_names((sead_SafeString *)&data_0070DD54, names_0070DD54, 1);
    fill_names((sead_SafeString *)&data_0070DD60, names_0070DD60, 1);
    fill_names((sead_SafeString *)&data_0070DD6C, names_0070DD6C, 1);
    fill_names((sead_SafeString *)&data_0070DD78, names_0070DD78, 1);
    fill_names((sead_SafeString *)&data_0070DD84, names_0070DD84, 1);
    fill_names((sead_SafeString *)&data_0070DD90, names_0070DD90, 1);
    fill_names((sead_SafeString *)&data_007724DC, names_007724DC, 4);
    data_0070DD08 = 0xFFFFFFFFu;
    data_0070DD0C = 0xFFFFFFFFu;
    data_0070DD10 = 0x00000000u;
    data_0070DD14 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4CE38E39u, (uintptr_t)&func_00117D48);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00772274;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcFollower";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPCø«Aê³ñ";
    data_0070DD00 = ret0;
    data_00772274 = 0x00000000u;
    data_00772278 = 0x00000005u;
    data_0077227C = (uintptr_t)&data_00772280;
    data_007724FC = 0x3D23D70Au /* 0.03999999910593033 f */;
    data_00772500 = 0x3F666666u /* 0.8999999761581421 f */;
    data_00772504 = 0x3FC00000u /* 1.5 f */;
    data_00772508 = 0x40A00000u /* 5.0 f */;
    data_0077250C = 0x40400000u /* 3.0 f */;
    data_00772510 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_00772514 = 0x0000000Eu;
    *(uint16_t *)&data_00772518 = 0x5Fu;
    *(uint16_t *)&data_0077251A = 0xB4u;
    *(uint8_t *)&data_0077251C = 0xEEu;
    *(uint8_t *)&data_0077251D = 0xECu;
    *(uint8_t *)&data_0077251E = 0xFu;
    *(uint8_t *)&data_0077251F = 0x1Eu;
    *(uint8_t *)&data_00772520 = 0x14u;
    data_00772524 = 0x00000001u;
    data_00772528 = 0x00000000u;
    data_0077252C = 0x00000000u;
    *(uint8_t *)&data_00772530 = 0x1u;
    *(uint8_t *)&data_00772531 = 0x1u;
    func_0019B51C((uintptr_t)&data_00772294, (uintptr_t)&func_00603590, 0x000001E7u, (uintptr_t)((char *)stk + 16));
}
