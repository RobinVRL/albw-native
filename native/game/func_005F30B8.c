/* USA 005F30B8 (EU 005F3090): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 9 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_006F5B44;
extern uint32_t data_00716750;
extern uint32_t data_00716754;
extern uint32_t data_00716758;
extern uint32_t data_0071675C;
extern uint32_t data_007A82A0;
extern uint32_t data_007A82A4;
extern uint32_t data_007A82A8;
extern uint32_t data_007A82AC;
extern uint32_t data_007A86AB;
extern uint32_t data_007A86AC;
void func_00100000(void);
void func_0049117C(void);
void func_0049BAA8(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_005902C0(void);


void func_005F30B8(void) {
    data_00716750 = 0xFFFFFFFFu;
    data_00716754 = 0xFFFFFFFFu;
    data_00716758 = 0x00000000u;
    data_0071675C = 0x00000000u;
    data_007A82A0 = (uintptr_t)&data_006F5B44;
    data_007A82A4 = (uintptr_t)&data_007A82AC;
    data_007A82A8 = 0x00000400u;
    *(uint8_t *)&data_007A82AC = 0x0u;
    *(uint8_t *)&data_007A86AB = 0x0u;
    func_0049BAA8((uintptr_t)&data_007A86AC, (uintptr_t)&func_0049117C, (uintptr_t)&func_00100000, 0x00000000u);
    func_005902C0();
}
