/* USA 00298160 (EU 00298208): "is there another live actor with my (group +0x34, id byte +0x36)
 * pair": walks the ActorMgr list (*data_00706E20: iterator 005841A8 from mgr+0x3DBC0 to the end
 * sentinel mgr+0x3DBC8); returns 1 when a matching actor other than this one is found after
 * this one, or before it with 00588BE4(this) != *data_006932B4; else 0.
 * Route: actor creation / placement (depth 2 of the actor-player phase); a tripwire stub today.
 * Bug: the converted source did not compile (the immediate 0x3DBC0 loaded from the pool was
 * printed as the overlapping symbol `_func_00298224`).
 * Verified instruction by instruction against EU 00298208..002982C0 (the comparison is the
 * byte at +0x34 and the u16 at +0x36 against (u16 +0x36) & 0xFF of this; `sb` = seen-self).
 * Confidence: high. */
#include "../route.h"

extern uint32_t data_00706E20[], data_006932B4[];
int *func_005841A8(int mgr, uint32_t a, int *it);
int func_00588BE4(void *self);

int func_00298160(char *self)
{
    uint32_t key = RF(self, 0x36, uint16_t) & 0xFF;
    uint8_t grp = RF(self, 0x34, uint8_t);
    char *mgr = GPTR_TO(char, data_00706E20[0]);
    int *it = func_005841A8((int)data_00706E20[0], data_006932B4[0],
                            GPTR_TO(int, RF(mgr, 0x3DBC0, uint32_t)));
    uint32_t end = RF(GPTR_TO(char, data_00706E20[0]), 0x3DBC8, uint32_t);
    int seen = 0;
    while (GPTR_OF(it) != end) {
        char *a = GPTR_TO(char, (uint32_t)it[0]);
        if (RF(a, 0x34, uint8_t) == grp && RF(a, 0x36, uint16_t) == key) {
            if (a == self) {
                seen = 1;
            } else if (seen || (uint32_t)func_00588BE4(self) != data_006932B4[0]) {
                return 1;
            }
        }
        it = func_005841A8((int)data_00706E20[0], data_006932B4[0], it + 1);
    }
    return 0;
}
