/* USA 005BBC6C (EU 005BBC44): static initialiser, decompiled by tools/decomp_initializer.py.
 * 2 sead::SafeString name tables (3 names), 7 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00697838;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070AC50;
extern uint32_t data_0070AC58;
extern uint32_t data_0070AC5C;
extern uint32_t data_0070AC60;
extern uint32_t data_0070AC64;
extern uint32_t data_0070AC68;
extern uint32_t data_00741238;
extern uint32_t data_0074123C;
extern uint32_t data_00741240;
extern uint32_t data_00741244;
extern uint32_t data_00741258;
extern uint32_t data_007414A0;
extern uint32_t data_007414B0;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_006049B8(void);

static const char *const names_0070AC68[1] = {
    "Kyameron",
};
static const char *const names_007414A0[2] = {
    "wait",
    "appear",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BBC6C(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    fill_names((sead_SafeString *)&data_0070AC68, names_0070AC68, 1);
    fill_names((sead_SafeString *)&data_007414A0, names_007414A0, 2);
    data_0070AC58 = 0xFFFFFFFFu;
    data_0070AC5C = 0xFFFFFFFFu;
    data_0070AC60 = 0x00000000u;
    data_0070AC64 = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_007414B0, 0x00000000u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyKyameron";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203L\203\203\203\201\203\215\203\223";
    data_00741238 = 0x00000000u;
    data_0074123C = 0x00000005u;
    data_00741240 = (uintptr_t)&data_00741244;
    uintptr_t v0 = data_0070AC50;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00697838 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00741238;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00741258, (uintptr_t)&func_006049B8, 0x0000025Bu, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00741238, (uintptr_t)((char *)stk + 32), v1);
}
