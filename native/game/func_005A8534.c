/* USA 005A8534 (EU 005A850C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 3 other stores, 1 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006B4948;
extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007A0460;
extern uint32_t data_007A0464;
extern uint32_t data_007A0468;
void func_005902C0(uintptr_t);


void func_005A8534(void) {
    data_007A0460 = (uintptr_t)&data_006B4948;
    data_007A0464 = 0x00000000u;
    *(uint8_t *)&data_007A0468 = 0x0u;
    func_005902C0((uintptr_t)&data_007A0460);
}
