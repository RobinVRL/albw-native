/* USA 005AE988 (EU 005AE960): static initialiser, decompiled by tools/decomp_initializer.py.
 * 0 sead::SafeString name tables (0 names), 1 other stores, 2 calls. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_0079CC74;
void func_0010DEB0(uintptr_t);
void func_005902C0(void);


void func_005AE988(void) {
    data_0079CC74 = 0x00000000u;
    func_0010DEB0((uintptr_t)&data_0079CC74);
    func_005902C0();
}
