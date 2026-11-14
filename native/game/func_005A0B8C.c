/* USA 005A0B8C (EU 005A0B64): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 3 calls, 2 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_0069AA80;
extern uint32_t data_0069AA84;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070B4A8;
extern uint32_t data_0070B4AC;
extern uint32_t data_0070B4B0;
extern uint32_t data_0070B4B4;
extern uint32_t data_0070B4B8;
extern uint32_t data_0070B4BC;
extern uint32_t data_0074C2F4;
extern uint32_t data_0074C2F8;
extern uint32_t data_0074C2FC;
extern uint32_t data_0074C300;
extern uint32_t data_0074C314;
extern uint32_t data_0074C55C;
extern uint32_t data_0074C560;
extern uint32_t data_0074C564;
extern uint32_t data_0074C568;
extern uint32_t data_0074C57C;
extern uint32_t data_0074C7C4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060B120(void);


void func_005A0B8C(void) {
    uintptr_t stk[16];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x0u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_0070B4B0 = 0xFFFFFFFFu;
    data_0070B4B4 = 0xFFFFFFFFu;
    data_0070B4B8 = 0x00000000u;
    data_0070B4BC = 0x00000000u;
    func_004FC6FC((uintptr_t)&data_0074C7C4, 0x00000004u, 0x00000000u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyTail";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203e\201[\203\213";
    data_0074C2F4 = 0x00000000u;
    data_0074C2F8 = 0x00000005u;
    data_0074C2FC = (uintptr_t)&data_0074C300;
    uintptr_t v0 = data_0070B4A8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_0069AA80 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074C2F4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074C314, (uintptr_t)&func_0060B120, 0x00000207u, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_0074C2F4, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 40) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 44) = (uintptr_t)"EnemyUraTail";
    *(uintptr_t *)((char *)stk + 48) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 52) = (uintptr_t)"\227\240\203e\201[\203\213";
    data_0074C55C = 0x00000000u;
    data_0074C560 = 0x00000005u;
    data_0074C564 = (uintptr_t)&data_0074C568;
    uintptr_t v2 = data_0070B4AC;
    uintptr_t v3 = v2 == 0x0u ? (uintptr_t)&data_0069AA84 : v2;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074C55C;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 48);
    *(uintptr_t *)((char *)stk + 8) = v3;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_0074C57C, (uintptr_t)&func_0060B120, 0x00000208u, (uintptr_t)((char *)stk + 40), (uintptr_t)&data_0074C55C, (uintptr_t)((char *)stk + 48), v3);
}
