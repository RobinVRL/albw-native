/* USA 005B9378 (EU 005B9350): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006B47B4;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007A0444;
extern uint32_t data_007A0448;
extern uint32_t data_007A044C;
extern uint32_t data_007A0450;
void func_005902C0(uintptr_t);


void func_005B9378(void) {
    data_007A0444 = (uintptr_t)&data_006B47B4;
    data_007A0448 = 0x00000000u;
    data_007A044C = 0x00000000u;
    data_007A0450 = 0x00000000u;
    func_005902C0((uintptr_t)&data_007A0444);
}
