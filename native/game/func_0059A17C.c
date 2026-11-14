/* USA 0059A17C (EU 0059A154): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 14 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006EFCB0;
extern uint32_t data_006EFCC8;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007A02D0;
extern uint32_t data_007A02D4;
extern uint32_t data_007A02D8;
extern uint32_t data_007A02DC;
extern uint32_t data_007A02E0;
extern uint32_t data_007A02E4;
extern uint32_t data_007A02E8;
extern uint32_t data_007A0324;
extern uint32_t data_007A0328;
extern uint32_t data_007A032C;
extern uint32_t data_007A0330;
extern uint32_t data_007A0334;
extern uint32_t data_007A0338;
void func_00100000(void);
void func_003D30B4(void);
void func_005902C0(uint32_t, uint32_t, uint32_t);  /* tail call */


void func_0059A17C(void) {
    data_007A02D0 = (uint32_t)(uintptr_t)&data_006EFCC8;
    data_007A02D4 = 0x00000000u;
    data_007A02D8 = 0x00000000u;
    data_007A02DC = 0x00000000u;
    data_007A02E0 = 0x00000000u;
    data_007A02E4 = 0x00000000u;
    data_007A02E8 = 0x00000000u;
    data_007A0324 = 0x00000000u;
    data_007A0328 = 0x00000000u;
    data_007A032C = 0x00000000u;
    data_007A0330 = 0xFFFFFFFFu;
    data_007A0334 = (uint32_t)(uintptr_t)&data_006EFCB0;
    data_007A0338 = 0x00000000u;
    func_005902C0((uint32_t)(uintptr_t)&data_007A0334, (uint32_t)(uintptr_t)&func_003D30B4, (uint32_t)(uintptr_t)&func_00100000);
}
