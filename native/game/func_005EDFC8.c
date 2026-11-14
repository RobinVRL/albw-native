/* USA 005EDFC8 (EU 005EDFA0): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 13 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708810;
extern uint32_t data_00708814;
extern uint32_t data_00708818;
extern uint32_t data_0070881C;
extern uint32_t data_0072DAB4;
extern uint32_t data_0072DAB8;
extern uint32_t data_0072DABC;
extern uint32_t data_0072DAC0;
extern uint32_t data_0072DAD4;
extern uint32_t data_0072DD1C;
extern uint32_t data_0072DD20;
extern uint32_t data_0072DD24;
extern uint32_t data_0072DD28;
extern uint32_t data_0072DD3C;
extern uint32_t data_0072DF84;
extern uint32_t data_0072DF88;
extern uint32_t data_0072DF8C;
extern uint32_t data_0072DF90;
extern uint32_t data_0072DFA4;
extern uint32_t data_0072E1EC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00609088(void);

static const char *const names_0072E1EC[4] = {
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

void func_005EDFC8(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072DAB4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"AreaEventTalkTutorial";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203`\203\205\201[\203g\203\212\203A\203\213\211\357\230b\203G\203\212\203A";
    fill_names((sead_SafeString *)&data_0072E1EC, names_0072E1EC, 4);
    data_00708810 = 0xFFFFFFFFu;
    data_00708814 = 0xFFFFFFFFu;
    data_00708818 = 0x00000000u;
    data_0070881C = 0x00000000u;
    data_0072DAB4 = 0x00000000u;
    data_0072DAB8 = 0x00000005u;
    data_0072DABC = (uintptr_t)&data_0072DAC0;
    func_0019B51C((uintptr_t)&data_0072DAD4, (uintptr_t)&func_00609088, 0x0000017Bu, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0072DAB4, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072DD1C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"AreaEventTalkMSGetAfter";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\203}\203X\203^\201[\203\\\201[\203h\216\346\223\276\214\343\211\357\230b\203G\203\212\203A";
    data_0072DD1C = 0x00000000u;
    data_0072DD20 = 0x00000005u;
    data_0072DD24 = (uintptr_t)&data_0072DD28;
    func_0019B51C((uintptr_t)&data_0072DD3C, (uintptr_t)&func_00609088, 0x0000017Du, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_0072DD1C, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0072DF84;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"AreaEventTalkCollectSandRod";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\203T\203\223\203h\203\215\203b\203h\211\361\216\373\227p\211\357\230b\203G\203\212\203A";
    data_0072DF84 = 0x00000000u;
    data_0072DF88 = 0x00000005u;
    data_0072DF8C = (uintptr_t)&data_0072DF90;
    func_0019B51C((uintptr_t)&data_0072DFA4, (uintptr_t)&func_00609088, 0x0000017Eu, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_0072DF84, (uintptr_t)((char *)stk + 56), 0x00000000u);
}
