/* USA 005EDE38 (EU 005EDE10): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 4 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007150B8;
extern uint32_t data_007150BC;
extern uint32_t data_007150C0;
extern uint32_t data_007150C4;
extern uint32_t data_0079DF64;
void func_0010BF5C(uintptr_t);


void func_005EDE38(void) {
    data_007150B8 = 0xFFFFFFFFu;
    data_007150BC = 0xFFFFFFFFu;
    data_007150C0 = 0x00000000u;
    data_007150C4 = 0x00000000u;
    func_0010BF5C((uintptr_t)&data_0079DF64);
}
