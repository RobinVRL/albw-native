/* USA 005991C0 (EU 00599198): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (1 names), 13 other stores, 3 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C358;
extern uint32_t data_0070C35C;
extern uint32_t data_0070C360;
extern uint32_t data_0070C364;
extern uint32_t data_0070C368;
extern uint32_t data_00760D74;
extern uint32_t data_00760D78;
extern uint32_t data_00760D7C;
extern uint32_t data_00760D80;
extern uint32_t data_00760D94;
extern uint32_t data_00760FDC;
extern uint32_t data_00760FE0;
extern uint32_t data_00760FE4;
extern uint32_t data_00760FE8;
extern uint32_t data_00760FFC;
extern uint32_t data_00761244;
extern uint32_t data_00761248;
extern uint32_t data_0076124C;
extern uint32_t data_00761250;
extern uint32_t data_00761264;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603E94(void);
void func_00605004(void);
void func_0060503C(void);

static const char *const names_0070C368[1] = {
    "TombOpen",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005991C0(void) {
    uintptr_t stk[18];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00760D74;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojTombNormal";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\223y\202\276\202\257\202\314\225\346";
    data_0070C358 = 0xFFFFFFFFu;
    data_0070C35C = 0xFFFFFFFFu;
    data_0070C360 = 0x00000000u;
    data_0070C364 = 0x00000000u;
    data_00760D74 = 0x00000000u;
    data_00760D78 = 0x00000005u;
    data_00760D7C = (uintptr_t)&data_00760D80;
    func_0019B51C((uintptr_t)&data_00760D94, (uintptr_t)&func_00605004, 0x000000F5u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00760D74, (uintptr_t)((char *)stk + 24), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00760FDC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 40);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"MojTombBoneA";
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"\215\234\202\240\202\350\225\346";
    data_00760FDC = 0x00000000u;
    data_00760FE0 = 0x00000005u;
    data_00760FE4 = (uintptr_t)&data_00760FE8;
    func_0019B51C((uintptr_t)&data_00760FFC, (uintptr_t)&func_00603E94, 0x000000F6u, (uintptr_t)((char *)stk + 32), (uintptr_t)&data_00760FDC, (uintptr_t)((char *)stk + 40), 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00761244;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 56);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"MojTombStairs";
    *(uintptr_t *)((char *)stk + 56) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 60) = (uintptr_t)"\212K\222i\202\240\202\350\225\346";
    data_00761244 = 0x00000000u;
    data_00761248 = 0x00000005u;
    data_0076124C = (uintptr_t)&data_00761250;
    func_0019B51C((uintptr_t)&data_00761264, (uintptr_t)&func_0060503C, 0x000000F7u, (uintptr_t)((char *)stk + 48), (uintptr_t)&data_00761244, (uintptr_t)((char *)stk + 56), 0x00000000u);
    fill_names((sead_SafeString *)&data_0070C368, names_0070C368, 1);
}
