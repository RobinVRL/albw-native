/* USA 005E02B8 (EU 005E0290): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (13 names), 31 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B398;
extern uint32_t data_0070B3A0;
extern uint32_t data_0070B3A4;
extern uint32_t data_0070B3A8;
extern uint32_t data_0070B3AC;
extern uint32_t data_0074B5FC;
extern uint32_t data_0074B664;
extern uint32_t data_0074B668;
extern uint32_t data_0074B66C;
extern uint32_t data_0074B670;
extern uint32_t data_0074B674;
extern uint32_t data_0074B678;
extern uint32_t data_0074B67C;
extern uint32_t data_0074B680;
extern uint32_t data_0074B684;
extern uint32_t data_0074B688;
extern uint32_t data_0074B68C;
extern uint32_t data_0074B690;
extern uint32_t data_0074B694;
extern uint32_t data_0074B6DC;
extern uint32_t data_0074B6E0;
extern uint32_t data_0074B6E4;
extern uint32_t data_0074B6E8;
extern uint32_t data_0074B6EC;
extern uint32_t data_0074B6F0;
extern uint32_t data_0074B6F4;
extern uint32_t data_0074B6F8;
extern uint32_t data_0074B6FC;
extern uint32_t data_0074B700;
extern uint32_t data_0074B704;
extern uint32_t data_0074B708;
extern uint32_t data_0074B70C;
extern uint32_t data_0074B710;
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);

static const char *const names_0074B5FC[13] = {
    "wait00",
    "walk00",
    "walk01",
    "find00",
    "kamae00",
    "damage00",
    "dead_front_st00",
    "dead_front_ed00",
    "dead_back_st00",
    "dead_back_ed00",
    "fall00",
    "piyopiyo00",
    "spear_throw00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E02B8(void) {
    uintptr_t stk[6];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 12);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 12) = 0x0u;
    *(uint8_t *)((char *)stk + 13) = 0x0u;
    *(uint8_t *)((char *)stk + 14) = 0x0u;
    *(uint8_t *)((char *)stk + 15) = 0xFFu;
    *(uint8_t *)((char *)stk + 16) = 0xFFu;
    fill_names((sead_SafeString *)&data_0074B5FC, names_0074B5FC, 13);
    data_0070B398 = 0x20000000u;
    data_0070B3A0 = 0xFFFFFFFFu;
    data_0070B3A4 = 0xFFFFFFFFu;
    data_0070B3A8 = 0x00000000u;
    data_0070B3AC = 0x00000000u;
    data_0074B664 = 0x00000000u /* 0.0 f */;
    data_0074B668 = 0x3F333333u /* 0.699999988079071 f */;
    data_0074B66C = 0x3F333333u /* 0.699999988079071 f */;
    data_0074B670 = 0x3F333333u /* 0.699999988079071 f */;
    data_0074B674 = 0x3F333333u /* 0.699999988079071 f */;
    data_0074B678 = 0x00000000u /* 0.0 f */;
    data_0074B67C = 0x00000000u /* 0.0 f */;
    data_0074B680 = 0x3F333333u /* 0.699999988079071 f */;
    data_0074B684 = 0xBF333333u /* -0.699999988079071 f */;
    data_0074B688 = 0xBF333333u /* -0.699999988079071 f */;
    data_0074B68C = 0x3F333333u /* 0.699999988079071 f */;
    data_0074B690 = 0x00000000u /* 0.0 f */;
    func_004FC6FC((uintptr_t)&data_0074B694, 0x00000001u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 12), 0x0000000Bu);
    data_0074B6DC = 0x0000020Eu;
    data_0074B6E0 = 0x0000020Fu;
    data_0074B6E4 = 0x00000210u;
    data_0074B6E8 = 0x00000211u;
    data_0074B6EC = 0x00000212u;
    data_0074B6F0 = 0x00000213u;
    data_0074B6F4 = 0x00000214u;
    data_0074B6F8 = 0x00000215u;
    data_0074B6FC = 0x00000216u;
    data_0074B700 = 0x00000217u;
    data_0074B704 = 0x00000218u;
    data_0074B708 = 0x00000219u;
    data_0074B70C = 0x0000021Au;
    data_0074B710 = 0x0000021Bu;
}
