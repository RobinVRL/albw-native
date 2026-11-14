/* USA 005AED2C (EU 005AED04): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 3 other stores, 0 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007A8820;
extern uint32_t data_007A8824;
extern uint32_t data_007A8828;


void func_005AED2C(void) {
    data_007A8820 = 0x00000000u;
    data_007A8824 = (uintptr_t)&data_007A8824;
    data_007A8828 = (uintptr_t)&data_007A8824;
}
