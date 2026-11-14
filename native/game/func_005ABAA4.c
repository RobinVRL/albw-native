/* USA 005ABAA4 (EU 005ABA7C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (18 names), 27 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069EC50;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070D9D8;
extern uint32_t data_0070D9DC;
extern uint32_t data_0070D9E0;
extern uint32_t data_0070D9E4;
extern uint32_t data_0070D9E8;
extern uint32_t data_0070D9EC;
extern uint32_t data_00770C14;
extern uint32_t data_00770C18;
extern uint32_t data_00770C1C;
extern uint32_t data_00770C20;
extern uint32_t data_00770C34;
extern uint32_t data_00770E7C;
extern uint32_t data_00770E9C;
extern uint32_t data_00770EA0;
extern uint32_t data_00770EA4;
extern uint32_t data_00770EA8;
extern uint32_t data_00770EAC;
extern uint32_t data_00770EB0;
extern uint32_t data_00770EB4;
extern uint32_t data_00770EB8;
extern uint32_t data_00770EBC;
extern uint32_t data_00770EC0;
extern uint32_t data_00770EC4;
extern uint32_t data_00770EC8;
extern uint32_t data_00770ECC;
extern uint32_t data_00770ED0;
extern uint32_t data_00770ED4;
extern uint32_t data_00770ED8;
extern uint32_t data_00770EDC;
extern uint32_t data_00770EE0;
extern uint32_t data_00770EE4;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_00118020(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006033E0(void);

static const char *const names_00770E7C[4] = {
    "N_ArrowT_00",
    "N_ArrowB_00",
    "N_ArrowL_00",
    "N_ArrowR_00",
};
static const char *const names_00770EE4[14] = {
    "wait",
    "surprise_st",
    "surprise_loop",
    "sing",
    "twitter",
    "talk_panic",
    "talk_negative",
    "question_loop",
    "question",
    "happy",
    "fool",
    "dogeza_talk",
    "clap",
    "shock",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005ABAA4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00770E7C, names_00770E7C, 4);
    data_0070D9E0 = 0xFFFFFFFFu;
    data_0070D9E4 = 0xFFFFFFFFu;
    data_0070D9E8 = 0x00000000u;
    data_0070D9EC = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4E000000u, (uintptr_t)&func_00118020);
    data_0070D9D8 = ret0;
    uintptr_t ret1 = func_00114608(0x4CB60B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00770C14;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = (uintptr_t)&data_0069EC50;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"tg­ñ";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"NpcBirdLift";
    fill_names((sead_SafeString *)&data_00770EE4, names_00770EE4, 14);
    data_0070D9DC = ret1;
    data_00770C14 = 0x00000000u;
    data_00770C18 = 0x00000005u;
    data_00770C1C = (uintptr_t)&data_00770C20;
    data_00770E9C = 0xC0A00000u /* -5.0 f */;
    data_00770EA0 = 0x3F800000u /* 1.0 f */;
    data_00770EA4 = 0x00000000u /* 0.0 f */;
    data_00770EA8 = 0xBF800000u /* -1.0 f */;
    data_00770EAC = 0x3F800000u /* 1.0 f */;
    data_00770EB0 = 0x00000000u /* 0.0 f */;
    data_00770EB4 = 0x41400000u /* 12.0 f */;
    data_00770EB8 = 0x41000000u /* 8.0 f */;
    data_00770EBC = 0x3F800000u /* 1.0 f */;
    data_00770EC0 = 0xC0600000u /* -3.5 f */;
    data_00770EC4 = 0x40600000u /* 3.5 f */;
    data_00770EC8 = 0xC1200000u /* -10.0 f */;
    data_00770ECC = 0xC0400000u /* -3.0 f */;
    data_00770ED0 = 0x40000000u /* 2.0 f */;
    data_00770ED4 = 0x3F800000u /* 1.0 f */;
    data_00770ED8 = 0x40C00000u /* 6.0 f */;
    data_00770EDC = 0x41200000u /* 10.0 f */;
    data_00770EE0 = 0x3DCCCCCDu /* 0.10000000149011612 f */;
    func_0019B51C((uintptr_t)&data_00770C34, (uintptr_t)&func_006033E0, 0x000001B3u, (uintptr_t)((char *)stk + 24));
}
