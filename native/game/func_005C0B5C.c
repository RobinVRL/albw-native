/* USA 005C0B5C (EU 005C0B34): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 19 other stores, 4 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0070F760;
extern uint32_t data_0070F764;
extern uint32_t data_0070F768;
extern uint32_t data_0070F770;
extern uint32_t data_0070F774;
extern uint32_t data_0070F778;
extern uint32_t data_0070F77C;
extern uint32_t data_0078B5A0;
extern uint32_t data_0078B5A4;
extern uint32_t data_0078B5A8;
extern uint32_t data_0078B5AC;
extern uint32_t data_0078B5C0;
extern uint32_t data_0078B808;
extern uint32_t data_0078B80C;
extern uint32_t data_0078B810;
extern uint32_t data_0078B814;
extern uint32_t data_0078B818;
extern uint32_t data_0078B81C;
extern uint32_t data_0078B820;
extern uint32_t data_0078B824;
extern uint32_t data_0078B828;
uintptr_t func_00114608(uintptr_t, uintptr_t);
void func_0019B51C(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_00605530(void);


void func_005C0B5C(void) {
    uintptr_t stk[10];  /* stack temporaries (objects passed by address) */
    data_0070F770 = 0xFFFFFFFFu;
    data_0070F774 = 0xFFFFFFFFu;
    data_0070F778 = 0x00000000u;
    data_0070F77C = 0x00000000u;
    data_0078B808 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0078B80C = 0x3FC00000u /* 1.5 f */;
    data_0078B810 = 0x40400000u /* 3.0 f */;
    uintptr_t ret0 = func_00114608(0x4D800000u, 0xFFFFFFFFu);
    data_0070F760 = ret0;
    data_0078B814 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0078B818 = 0x3FC00000u /* 1.5 f */;
    data_0078B81C = 0x40400000u /* 3.0 f */;
    data_0078B820 = 0x3F99999Au /* 1.2000000476837158 f */;
    data_0078B824 = 0x3FC00000u /* 1.5 f */;
    data_0078B828 = 0x40400000u /* 3.0 f */;
    uintptr_t ret1 = func_00114608(0x4D638E39u, 0x00000000u);
    data_0070F764 = ret1;
    uintptr_t ret2 = func_00114608(0x4CE38E39u, 0x00000000u);
    *(uintptr_t *)((char *)stk + 0) = (uintptr_t)&data_0078B5A0;
    *(uintptr_t *)((char *)stk + 4) = (uintptr_t)((char *)stk + 24);
    *(uintptr_t *)((char *)stk + 8) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 12) = 0x00000000u;
    *(uintptr_t *)((char *)stk + 16) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 20) = (uintptr_t)"ObjMediumFire";
    *(uintptr_t *)((char *)stk + 24) = (uintptr_t)&data_006F5988;
    *(uintptr_t *)((char *)stk + 28) = (uintptr_t)"fBEÌ@";
    data_0070F768 = ret2;
    data_0078B5A0 = 0x00000000u;
    data_0078B5A4 = 0x00000005u;
    data_0078B5A8 = (uintptr_t)&data_0078B5AC;
    func_0019B51C((uintptr_t)&data_0078B5C0, (uintptr_t)&func_00605530, 0x00000063u, (uintptr_t)((char *)stk + 16));
}
