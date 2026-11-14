/* USA 005EA6D0 (EU 005EA6A8): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 13 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070FA50;
extern uint32_t data_0070FA54;
extern uint32_t data_0070FA58;
extern uint32_t data_0070FA5C;
extern uint32_t data_00793CE8;
extern uint32_t data_00793CEC;
extern uint32_t data_00793CF0;
extern uint32_t data_00793CF4;
extern uint32_t data_00793D08;
extern uint32_t data_00793F50;
extern uint32_t data_00793F54;
extern uint32_t data_00793F58;
extern uint32_t data_00793F5C;
extern uint32_t data_00793F60;
extern uint32_t data_00793F64;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060899C(void);


void func_005EA6D0(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00793CE8;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjStopGoroNeedle";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\216~\202\337\203S\203\215\203g\203Q\223S\213\205";
    data_0070FA50 = 0xFFFFFFFFu;
    data_0070FA54 = 0xFFFFFFFFu;
    data_0070FA58 = 0x00000000u;
    data_0070FA5C = 0x00000000u;
    data_00793CE8 = 0x00000000u;
    data_00793CEC = 0x00000005u;
    data_00793CF0 = (uintptr_t)&data_00793CF4;
    func_0019B51C((uintptr_t)&data_00793D08, (uintptr_t)&func_0060899C, 0x00000048u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00793CE8, (uintptr_t)((char *)stk + 24), 0x00000000u);
    data_00793F50 = 0x00000000u /* 0.0 f */;
    data_00793F54 = 0x00000000u /* 0.0 f */;
    data_00793F58 = 0x00000000u /* 0.0 f */;
    data_00793F5C = 0x00000000u /* 0.0 f */;
    data_00793F60 = 0x00000000u /* 0.0 f */;
    data_00793F64 = 0x00000000u /* 0.0 f */;
}
