/* USA 005A8A14 (EU 005A89EC): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 5 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_006F6A5C;
extern uint32_t data_00715408;
extern uint32_t data_00715410;
extern uint32_t data_00715414;
extern uint32_t data_00715418;
extern uint32_t data_0071541C;
extern uint32_t data_0079E0DC;
uintptr_t func_004941D0(uintptr_t);
void func_005902C0(uintptr_t);


void func_005A8A14(void) {
    data_00715408 = (uintptr_t)&data_006F6A5C;
    data_00715410 = 0xFFFFFFFFu;
    data_00715414 = 0xFFFFFFFFu;
    data_00715418 = 0x00000000u;
    data_0071541C = 0x00000000u;
    uintptr_t ret0 = func_004941D0((uintptr_t)&data_0079E0DC);
    func_005902C0(ret0);
}
