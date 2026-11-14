/* USA 005CE004 (EU 005CDFDC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070BDB0;
extern uint32_t data_0070BDB4;
extern uint32_t data_0070BDB8;
extern uint32_t data_0070BDBC;
extern uint32_t data_0074FFD8;
extern uint32_t data_0074FFDC;
extern uint32_t data_0074FFE0;
extern uint32_t data_0074FFE4;
extern uint32_t data_0074FFF8;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00606B44(void);


void func_005CE004(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0074FFD8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojBarrierIbara";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203q\203\213\203_\203C\203o\203\211\203o\203\212\203A";
    data_0070BDB0 = 0xFFFFFFFFu;
    data_0070BDB4 = 0xFFFFFFFFu;
    data_0070BDB8 = 0x00000000u;
    data_0070BDBC = 0x00000000u;
    data_0074FFD8 = 0x00000000u;
    data_0074FFDC = 0x00000005u;
    data_0074FFE0 = (uintptr_t)&data_0074FFE4;
    func_0019B51C((uintptr_t)&data_0074FFF8, (uintptr_t)&func_00606B44, 0x00000134u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0074FFD8, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
