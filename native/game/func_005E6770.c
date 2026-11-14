/* USA 005E6770 (EU 005E6748): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 31 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BE70;
extern uint32_t data_0070BE74;
extern uint32_t data_0070BE78;
extern uint32_t data_0070BE7C;
extern uint32_t data_0070BE80;
extern uint32_t data_00752400;
extern uint32_t data_00752404;
extern uint32_t data_00752408;
extern uint32_t data_0075240C;
extern uint32_t data_00752420;
extern uint32_t data_00752668;
extern uint32_t data_0075266C;
extern uint32_t data_00752670;
extern uint32_t data_00752674;
extern uint32_t data_00752678;
extern uint32_t data_0075267C;
extern uint32_t data_00752680;
extern uint32_t data_00752684;
extern uint32_t data_00752688;
extern uint32_t data_0075268C;
extern uint32_t data_00752690;
extern uint32_t data_00752694;
extern uint32_t data_00752698;
extern uint32_t data_0075269C;
extern uint32_t data_007526A0;
extern uint32_t data_007526A4;
extern uint32_t data_007526A8;
extern uint32_t data_007526AC;
extern uint32_t data_007526B0;
extern uint32_t data_007526B4;
extern uint32_t data_007526B8;
extern uint32_t data_007526BC;
extern uint32_t data_007526C0;
extern uint32_t data_007526C4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006083DC(void);

static const char *const names_0070BE80[1] = {
    "Water_Cave",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005E6770(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00752400;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"][Ìò";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"MojCaveZoraSpring";
    fill_names((sead_SafeString *)&data_0070BE80, names_0070BE80, 1);
    data_0070BE70 = 0xFFFFFFFFu;
    data_0070BE74 = 0xFFFFFFFFu;
    data_0070BE78 = 0x00000000u;
    data_0070BE7C = 0x00000000u;
    data_00752400 = 0x00000000u;
    data_00752404 = 0x00000005u;
    data_00752408 = (uintptr_t)&data_0075240C;
    data_00752668 = 0x3E4CCCCDu /* 0.20000000298023224 f */;
    data_0075266C = 0x00000000u /* 0.0 f */;
    data_00752670 = 0x3E4CCCCDu /* 0.20000000298023224 f */;
    data_00752674 = 0x3F800000u /* 1.0 f */;
    data_00752678 = 0x3DCCCCCDu /* 0.10000000149011612 f */;
    data_0075267C = 0x00000000u /* 0.0 f */;
    data_00752680 = 0x3E4CCCCDu /* 0.20000000298023224 f */;
    data_00752684 = 0x3F800000u /* 1.0 f */;
    data_00752688 = 0x3F800000u /* 1.0 f */;
    data_0075268C = 0x3F800000u /* 1.0 f */;
    data_00752690 = 0x3F800000u /* 1.0 f */;
    data_00752694 = 0x3F800000u /* 1.0 f */;
    data_00752698 = 0x3F333333u /* 0.699999988079071 f */;
    data_0075269C = 0x3F333333u /* 0.699999988079071 f */;
    data_007526A0 = 0x3ECCCCCDu /* 0.4000000059604645 f */;
    data_007526A4 = 0x3F800000u /* 1.0 f */;
    data_007526A8 = 0x3E4CCCCDu /* 0.20000000298023224 f */;
    data_007526AC = 0x3E99999Au /* 0.30000001192092896 f */;
    data_007526B0 = 0x3F000000u /* 0.5 f */;
    data_007526B4 = 0x3F333333u /* 0.699999988079071 f */;
    data_007526B8 = 0x3ECCCCCDu /* 0.4000000059604645 f */;
    data_007526BC = 0x3F000000u /* 0.5 f */;
    data_007526C0 = 0x3F333333u /* 0.699999988079071 f */;
    data_007526C4 = 0x3F800000u /* 1.0 f */;
    func_0019B51C((uintptr_t)&data_00752420, (uintptr_t)&func_006083DC, 0x0000012Eu, (uintptr_t)((char *)stk + 24));
}
