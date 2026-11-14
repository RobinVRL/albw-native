/* USA 005D0CB4 (EU 005D0C8C): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 1 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_007A0454;
void func_0010DEB0(uintptr_t);
void func_005902C0(uintptr_t);


void func_005D0CB4(void) {
    data_007A0454 = 0x00000000u;
    func_0010DEB0((uintptr_t)&data_007A0454);
    func_005902C0((uintptr_t)&data_007A0454);
}
