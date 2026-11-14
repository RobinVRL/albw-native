/* USA 005B634C (EU 005B6324): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070C3C8;
extern uint32_t data_0070C3D0;
extern uint32_t data_0070C3D4;
extern uint32_t data_0070C3D8;
extern uint32_t data_0070C3DC;
extern uint32_t data_00764054;
extern uint32_t data_00764058;
extern uint32_t data_0076405C;
extern uint32_t data_00764060;
extern uint32_t data_00764074;
uintptr_t func_003C5604(uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00603EF8(void);


void func_005B634C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070C3D0 = 0xFFFFFFFFu;
    data_0070C3D4 = 0xFFFFFFFFu;
    data_0070C3D8 = 0x00000000u;
    data_0070C3DC = 0x00000000u;
    uintptr_t ret0 = func_003C5604(0x00000036u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_00764054;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"MojWarpSages";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\214\253\216\322\202\314\212\324\203\217\201[\203v\203I\203u\203W\203F";
    data_0070C3C8 = ret0;
    data_00764054 = 0x00000000u;
    data_00764058 = 0x00000005u;
    data_0076405C = (uintptr_t)&data_00764060;
    func_0019B51C((uintptr_t)&data_00764074, (uintptr_t)&func_00603EF8, 0x0000011Au, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_00764054, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
