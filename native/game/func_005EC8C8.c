/* USA 005EC8C8 (EU 005EC8A0): static initialiser, decompiled by tools/decomp_initializer.py.
 * Fills 0 sead::SafeString name tables (0 names) and 4 other globals. */
#include <stdint.h>
#include "sead.h"

extern uint32_t data_006F5988;  /* sead::SafeString vtable */
extern uint32_t data_00712578;
extern uint32_t data_0071257C;
extern uint32_t data_00712580;
extern uint32_t data_00712584;


void func_005EC8C8(void) {
    data_00712578 = 0xFFFFFFFFu;
    data_0071257C = 0xFFFFFFFFu;
    data_00712580 = 0x00000000u;
    data_00712584 = 0x00000000u;
}
