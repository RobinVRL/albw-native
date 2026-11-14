/* USA 005BCC20 (EU 005BCBF8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (23 names), 22 other stores, 1 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069AC60;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B528;
extern uint32_t data_0070B530;
extern uint32_t data_0070B534;
extern uint32_t data_0070B538;
extern uint32_t data_0070B53C;
extern uint32_t data_0070B540;
extern uint32_t data_0074D100;
extern uint32_t data_0074D104;
extern uint32_t data_0074D108;
extern uint32_t data_0074D10C;
extern uint32_t data_0074D120;
extern uint32_t data_0074D368;
extern uint32_t data_0074D36C;
extern uint32_t data_0074D370;
extern uint32_t data_0074D374;
extern uint32_t data_0074D378;
extern uint32_t data_0074D37C;
extern uint32_t data_0074D380;
extern uint32_t data_0074D384;
extern uint32_t data_0074D388;
extern uint32_t data_0074D38C;
extern uint32_t data_0074D390;
extern uint32_t data_0074D394;
extern uint32_t data_0074D398;
extern uint32_t data_0074D39C;
extern uint32_t data_0074D3A0;
extern uint32_t data_0074D3A4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604AB4(void);

static const char *const names_0070B540[1] = {
    "end_st",
};
static const char *const names_0074D3A4[22] = {
    "wait",
    "damage01",
    "damage02",
    "damage03",
    "transform_01to03",
    "transform_01to05",
    "transform_down_05to04",
    "transform_down_04to03",
    "transform_down_03to02",
    "transform_down_02to01",
    "damage_large",
    "piyopiyo",
    "piyopiyo_eye",
    "ride",
    "opening",
    "spin",
    "end_st",
    "end_ed",
    "jump_st",
    "jump_ed",
    "eye_open",
    "damage_large",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BCC20(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"EnemyTogegoma";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203g\203Q\203S\203}";
    fill_names((sead_SafeString *)&data_0070B540, names_0070B540, 1);
    fill_names((sead_SafeString *)&data_0074D3A4, names_0074D3A4, 22);
    data_0070B530 = 0xFFFFFFFFu;
    data_0070B534 = 0xFFFFFFFFu;
    data_0070B538 = 0x00000000u;
    data_0070B53C = 0x00000000u;
    data_0074D100 = 0x00000000u;
    data_0074D104 = 0x00000005u;
    data_0074D108 = (uintptr_t)&data_0074D10C;
    data_0074D368 = 0x3F8147AEu /* 1.0099999904632568 f */;
    data_0074D36C = 0x41200000u /* 10.0 f */;
    data_0074D370 = 0x3F8147AEu /* 1.0099999904632568 f */;
    data_0074D374 = 0x00000000u /* 0.0 f */;
    data_0074D378 = 0x3F800000u /* 1.0 f */;
    data_0074D37C = 0xBF19999Au /* -0.6000000238418579 f */;
    data_0074D380 = 0x00000000u /* 0.0 f */;
    data_0074D384 = 0x40200000u /* 2.5 f */;
    data_0074D388 = 0xBF800000u /* -1.0 f */;
    data_0074D38C = 0x00000000u /* 0.0 f */;
    data_0074D390 = 0x40D00000u /* 6.5 f */;
    data_0074D394 = 0xBFB33333u /* -1.399999976158142 f */;
    data_0074D398 = 0x00000000u /* 0.0 f */;
    data_0074D39C = 0x40000000u /* 2.0 f */;
    data_0074D3A0 = 0xBECCCCCDu /* -0.4000000059604645 f */;
    uintptr_t v0 = data_0070B528;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069AC60 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074D100;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074D120, (uintptr_t)&func_00604AB4, 0x00000011u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0074D100, (uintptr_t)((char *)stk + 24), v1);
}
