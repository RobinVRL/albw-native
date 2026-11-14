/* USA 005C2B28 (EU 005C2B00): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00708718;
extern uint32_t data_0070871C;
extern uint32_t data_00708720;
extern uint32_t data_00708724;


void func_005C2B28(void) {
    data_00708718 = 0xFFFFFFFFu;
    data_0070871C = 0xFFFFFFFFu;
    data_00708720 = 0x00000000u;
    data_00708724 = 0x00000000u;
}
