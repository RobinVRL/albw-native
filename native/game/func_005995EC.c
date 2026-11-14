/* USA 005995EC (EU 005995C4): static initialiser, decompiled by tools/decomp_initializer.py.
 * 9 sead::SafeString name tables (12 names), 38 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D910;
extern uint32_t data_0070D914;
extern uint32_t data_0070D918;
extern uint32_t data_0070D91C;
extern uint32_t data_0070D920;
extern uint32_t data_0070D92C;
extern uint32_t data_0070D938;
extern uint32_t data_0070D944;
extern uint32_t data_0070D950;
extern uint32_t data_0070D95C;
extern uint32_t data_0070D968;
extern uint32_t data_0070D974;
extern uint32_t data_00770698;
extern uint32_t data_0077069C;
extern uint32_t data_007706A0;
extern uint32_t data_007706A4;
extern uint32_t data_007706B8;
extern uint32_t data_00770900;
extern uint32_t data_00770904;
extern uint32_t data_00770908;
extern uint32_t data_0077090C;
extern uint32_t data_00770920;
extern uint32_t data_00770B68;
extern uint32_t data_00770B88;
extern uint32_t data_00770B8C;
extern uint32_t data_00770B90;
extern uint32_t data_00770B94;
extern uint32_t data_00770B98;
extern uint32_t data_00770B9C;
extern uint32_t data_00770BA0;
extern uint32_t data_00770BA4;
extern uint32_t data_00770BA6;
extern uint32_t data_00770BA8;
extern uint32_t data_00770BA9;
extern uint32_t data_00770BAA;
extern uint32_t data_00770BAB;
extern uint32_t data_00770BAC;
extern uint32_t data_00770BB0;
extern uint32_t data_00770BB4;
extern uint32_t data_00770BB8;
extern uint32_t data_00770BBC;
extern uint32_t data_00770BC0;
extern uint32_t data_00770BC4;
extern uint32_t data_00770BC8;
extern uint32_t data_00770BCC;
extern uint32_t data_00770BCE;
extern uint32_t data_00770BD0;
extern uint32_t data_00770BD1;
extern uint32_t data_00770BD2;
extern uint32_t data_00770BD3;
extern uint32_t data_00770BD4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006033A4(void);
void func_0060A56C(void);

static const char *const names_0070D920[1] = {
    "wait",
};
static const char *const names_0070D92C[1] = {
    "talk",
};
static const char *const names_0070D938[1] = {
    "step",
};
static const char *const names_0070D944[1] = {
    "play",
};
static const char *const names_0070D950[1] = {
    "play_turn",
};
static const char *const names_0070D95C[1] = {
    "wait",
};
static const char *const names_0070D968[1] = {
    "talk",
};
static const char *const names_0070D974[1] = {
    "play",
};
static const char *const names_00770B68[4] = {
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

void func_005995EC(void) {
    uintptr_t stk[14];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00770698;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"NpcBard";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NPC\213\341\227V\216\215\220l(\217c\223J)";
    fill_names((sead_SafeString *)&data_0070D920, names_0070D920, 1);
    fill_names((sead_SafeString *)&data_0070D92C, names_0070D92C, 1);
    fill_names((sead_SafeString *)&data_0070D938, names_0070D938, 1);
    fill_names((sead_SafeString *)&data_0070D944, names_0070D944, 1);
    fill_names((sead_SafeString *)&data_0070D950, names_0070D950, 1);
    fill_names((sead_SafeString *)&data_0070D95C, names_0070D95C, 1);
    fill_names((sead_SafeString *)&data_0070D968, names_0070D968, 1);
    fill_names((sead_SafeString *)&data_0070D974, names_0070D974, 1);
    fill_names((sead_SafeString *)&data_00770B68, names_00770B68, 4);
    data_0070D910 = 0xFFFFFFFFu;
    data_0070D914 = 0xFFFFFFFFu;
    data_0070D918 = 0x00000000u;
    data_0070D91C = 0x00000000u;
    data_00770698 = 0x00000000u;
    data_0077069C = 0x00000005u;
    data_007706A0 = (uintptr_t)&data_007706A4;
    data_00770B88 = 0x3CA3D70Au /* 0.019999999552965164 f */;
    data_00770B8C = 0x3F800000u /* 1.0 f */;
    data_00770B90 = 0x3FC00000u /* 1.5 f */;
    data_00770B94 = 0x40A00000u /* 5.0 f */;
    data_00770B98 = 0x40400000u /* 3.0 f */;
    data_00770B9C = 0x3F333333u /* 0.699999988079071 f */;
    data_00770BA0 = 0x0000000Au;
    *(uint16_t *)&data_00770BA4 = 0x5Fu;
    *(uint16_t *)&data_00770BA6 = 0xB4u;
    *(uint8_t *)&data_00770BA8 = 0xEEu;
    *(uint8_t *)&data_00770BA9 = 0xECu;
    *(uint8_t *)&data_00770BAA = 0xFu;
    *(uint8_t *)&data_00770BAB = 0x1u;
    *(uint8_t *)&data_00770BAC = 0x1u;
    data_00770BB0 = 0x3CA3D70Au /* 0.019999999552965164 f */;
    data_00770BB4 = 0x3F800000u /* 1.0 f */;
    data_00770BB8 = 0x3FC00000u /* 1.5 f */;
    data_00770BBC = 0x40A00000u /* 5.0 f */;
    data_00770BC0 = 0x40400000u /* 3.0 f */;
    data_00770BC4 = 0x3F4CCCCDu /* 0.800000011920929 f */;
    data_00770BC8 = 0x0000000Cu;
    *(uint16_t *)&data_00770BCC = 0x5Fu;
    *(uint16_t *)&data_00770BCE = 0xB4u;
    *(uint8_t *)&data_00770BD0 = 0xECu;
    *(uint8_t *)&data_00770BD1 = 0xECu;
    *(uint8_t *)&data_00770BD2 = 0xFu;
    *(uint8_t *)&data_00770BD3 = 0x1Eu;
    *(uint8_t *)&data_00770BD4 = 0x5u;
    func_0019B51C((uintptr_t)&data_007706B8, (uintptr_t)&func_0060A56C, 0x000001ECu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00770698, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00770900;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"NpcBardLute";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"NPC\213\341\227V\216\215\220l(\203\212\203\205\201[\203g)";
    data_00770900 = 0x00000000u;
    data_00770904 = 0x00000005u;
    data_00770908 = (uintptr_t)&data_0077090C;
    func_0019B51C((uintptr_t)&data_00770920, (uintptr_t)&func_006033A4, 0x000001EDu, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00770900, (uintptr_t)((char *)stk + 40), 0x00000000u);
}
