/* USA 0059F088 (EU 0059F060): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 7 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F930;
extern uint32_t data_0070F934;
extern uint32_t data_0070F938;
extern uint32_t data_0070F93C;
extern uint32_t data_0078FBB4;
extern uint32_t data_0078FBB8;
extern uint32_t data_0078FBBC;
extern uint32_t data_0078FBC0;
extern uint32_t data_0078FBD4;
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_0060AF00(void);


void func_0059F088(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078FBB4;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjPouch";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"\203|\201[\203`";
    data_0070F930 = 0xFFFFFFFFu;
    data_0070F934 = 0xFFFFFFFFu;
    data_0070F938 = 0x00000000u;
    data_0070F93C = 0x00000000u;
    data_0078FBB4 = 0x00000000u;
    data_0078FBB8 = 0x00000005u;
    data_0078FBBC = (uintptr_t)&data_0078FBC0;
    func_0019B51C((uintptr_t)&data_0078FBD4, (uintptr_t)&func_0060AF00, 0x00000090u, (uintptr_t)((char *)stk + 16), (uintptr_t)&data_0078FBB4, (uintptr_t)((char *)stk + 24), 0x00000000u);
}
