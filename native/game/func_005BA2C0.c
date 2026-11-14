/* USA 005BA2C0 (EU 005BA298): static initialiser, decompiled by tools/decomp_initializer.py.
 * 1 sead::SafeString name tables (4 names), 8 other stores, 3 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006957F4;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070A690;
extern uint32_t data_0070A694;
extern uint32_t data_0070A698;
extern uint32_t data_0070A69C;
extern uint32_t data_0070A6A0;
extern uint32_t data_0070A6A4;
extern uint32_t data_007381FC;
extern uint32_t data_00738200;
extern uint32_t data_00738204;
extern uint32_t data_00738208;
extern uint32_t data_0073821C;
extern uint32_t data_00738464;
extern uint32_t data_00738484;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0011DBBC(void);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00604760(void);

static const char *const names_00738464[4] = {
    "wait00",
    "hit00",
    "hit00",
    "hit00",
};

static void fill_names(sead_SafeString *t, const char *const *names, int n) {
    for (int i = 0; i < n; i++) {
        t[i].vtbl = &data_006F5988;
        t[i].mStringTop = names[i];
    }
}

void func_005BA2C0(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    fill_names((sead_SafeString *)&data_00738464, names_00738464, 4);
    data_0070A698 = 0xFFFFFFFFu;
    data_0070A69C = 0xFFFFFFFFu;
    data_0070A6A0 = 0x00000000u;
    data_0070A6A4 = 0x00000000u;
    uintptr_t ret0 = func_00114608(0x4C638E39u, (uintptr_t)&func_0011DBBC);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070A694 = ret0;
    func_004FC6FC((uintptr_t)&data_00738484, 0x00000000u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyBombZako";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203{\203\200\203U\203R";
    data_007381FC = 0x00000000u;
    data_00738200 = 0x00000005u;
    data_00738204 = (uintptr_t)&data_00738208;
    uintptr_t v0 = data_0070A690;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_006957F4 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_007381FC;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0073821C, (uintptr_t)&func_00604760, 0x00000262u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_007381FC, (uintptr_t)((char *)stk + 32), v1);
}
