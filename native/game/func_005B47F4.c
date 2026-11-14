/* USA 005B47F4 (EU 005B47CC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 23 other stores, 5 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C060;
extern uint32_t data_0070C064;
extern uint32_t data_0070C068;
extern uint32_t data_0070C06C;
extern uint32_t data_0070C070;
extern uint32_t data_0070C074;
extern uint32_t data_0070C078;
extern uint32_t data_0070C07C;
extern uint32_t data_00758AF0;
extern uint32_t data_00758AF4;
extern uint32_t data_00758AF8;
extern uint32_t data_00758AFC;
extern uint32_t data_00758B10;
extern uint32_t data_00758D58;
extern uint32_t data_00758D5C;
extern uint32_t data_00758D60;
extern uint32_t data_00758D64;
extern uint32_t data_00758D68;
extern uint32_t data_00758D6C;
extern uint32_t data_00758D70;
extern uint32_t data_00758D74;
extern uint32_t data_00758D78;
extern uint32_t data_00758D7C;
extern uint32_t data_00758D80;
extern uint32_t data_00758D84;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603D90(void);


void func_005B47F4(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070C070 = 0xFFFFFFFFu;
    data_0070C074 = 0xFFFFFFFFu;
    data_0070C078 = 0x00000000u;
    data_0070C07C = 0x00000000u;
    uintptr_t ret0 = func_00114608(0xCCE38E39u, 0xFFFFFFFFu);
    data_0070C060 = ret0;
    uintptr_t ret1 = func_00114608(0x4E800000u, 0x00000000u);
    data_0070C064 = ret1;
    data_00758D58 = 0x00000000u /* 0.0 f */;
    data_00758D5C = 0x00000000u /* 0.0 f */;
    data_00758D60 = 0x00000000u /* 0.0 f */;
    data_00758D64 = 0x3F800000u /* 1.0 f */;
    data_00758D68 = 0x3F800000u /* 1.0 f */;
    data_00758D6C = 0x3F800000u /* 1.0 f */;
    uintptr_t ret2 = func_00114608(0x4F000000u, 0x00000000u);
    data_0070C068 = ret2;
    uintptr_t ret3 = func_00114608(0x4BB60B61u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00758AF0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojIcePillar";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\225X\222\214";
    data_0070C06C = ret3;
    data_00758AF0 = 0x00000000u;
    data_00758AF4 = 0x00000005u;
    data_00758AF8 = (uintptr_t)&data_00758AFC;
    data_00758D70 = 0x3DA3D70Au /* 0.07999999821186066 f */;
    data_00758D74 = 0xBDCCCCCDu /* -0.10000000149011612 f */;
    data_00758D78 = 0x00000000u /* 0.0 f */;
    data_00758D7C = 0x3FD9999Au /* 1.7000000476837158 f */;
    data_00758D80 = 0x408CCCCDu /* 4.400000095367432 f */;
    data_00758D84 = 0x3DCCCCCDu /* 0.10000000149011612 f */;
    func_0019B51C((uintptr_t)&data_00758B10, (uintptr_t)&func_00603D90, 0x000000F4u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00758AF0, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
