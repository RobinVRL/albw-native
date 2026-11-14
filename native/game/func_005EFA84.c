/* USA 005EFA84 (EU 005EFA5C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 8 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00715804;
extern uint32_t data_00715808;
extern uint32_t data_0071580C;
extern uint32_t data_00715810;
extern uint32_t data_00715818;
extern uint32_t data_0071581C;
extern uint32_t data_00715820;
extern uint32_t data_00715824;
extern uint32_t data_0079F2B8;
void func_00100118(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
void func_003CDBA4(void);
void func_005902C0(void);


void func_005EFA84(void) {
    data_00715818 = 0xFFFFFFFFu;
    data_0071581C = 0xFFFFFFFFu;
    data_00715820 = 0x00000000u;
    data_00715824 = 0x00000000u;
    func_00100118((uintptr_t)&data_0079F2B8, (uintptr_t)&func_003CDBA4, 0x00000004u, 0x00000003u);
    data_00715804 = 0x00000000u;
    *(uint8_t *)&data_00715808 = 0x1u;
    data_0071580C = 0x00000000u;
    data_00715810 = 0x00000000u;
    func_005902C0();
}
