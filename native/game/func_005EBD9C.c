/* USA 005EBD9C (EU 005EBD74): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 10 other stores, 2 calls, 1 reads of writable data. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_00697510;
extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070ABD8;
extern uint32_t data_0070ABE0;
extern uint32_t data_0070ABE4;
extern uint32_t data_0070ABE8;
extern uint32_t data_0070ABEC;
extern uint32_t data_00740668;
extern uint32_t data_0074066C;
extern uint32_t data_00740670;
extern uint32_t data_00740674;
extern uint32_t data_00740688;
extern uint32_t data_007408D0;
extern uint32_t data_007408D4;
extern uint32_t data_007408D8;
extern uint32_t data_007408DC;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_004FC6FC(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00608A98(void);


void func_005EBD9C(void) {
    uintptr_t stk[12];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"EnemyKnuckleMaster";
    *(uintptr_t *)((char *)stk + 32) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 36) = (uintptr_t)"\203i\203b\203N\203\213\203}\203X\203^\201[";
    data_0070ABE0 = 0xFFFFFFFFu;
    data_0070ABE4 = 0xFFFFFFFFu;
    data_0070ABE8 = 0x00000000u;
    data_0070ABEC = 0x00000000u;
    data_00740668 = 0x00000000u;
    data_0074066C = 0x00000005u;
    data_00740670 = (uintptr_t)&data_00740674;
    uintptr_t v0 = data_0070ABD8;
    uintptr_t v1 = v0 == 0x0u ? (uintptr_t)&data_00697510 : v0;
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00740668;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 32);
    *(uintptr_t *)((char *)stk + 8) = v1;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    func_0019B51C((uintptr_t)&data_00740688, (uintptr_t)&func_00608A98, 0x0000021Du, (uintptr_t)((char *)stk + 24), (uintptr_t)&data_00740668, (uintptr_t)((char *)stk + 32), v1);
    *(uintptr_t *)((char *)stk + 0) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 16);
    *(uintptr_t *)((char *)stk + 8) = 0x0000000Bu;
    *(uint8_t *)((char *)stk + 16) = 0x0u;
    *(uint8_t *)((char *)stk + 17) = 0x1u;
    *(uint8_t *)((char *)stk + 18) = 0x0u;
    *(uint8_t *)((char *)stk + 19) = 0xFFu;
    *(uint8_t *)((char *)stk + 20) = 0xFFu;
    data_007408D0 = 0x3E4CCCCDu /* 0.20000000298023224 f */;
    data_007408D4 = 0x00000000u /* 0.0 f */;
    data_007408D8 = 0x3FB33333u /* 1.399999976158142 f */;
    func_004FC6FC((uintptr_t)&data_007408DC, 0x00000004u, 0x00000001u, 0x00000000u, 0x00000000u, (uintptr_t)((char *)stk + 16), 0x0000000Bu);
}
