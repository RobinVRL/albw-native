/* USA 00521040 (EU 00521000): small getter: the object at this+0x2D0 plus 0xC, or the static
 * default data_00725974 when +0x2D0 is null (returned in r0).
 * Route: reached from the TaskRender / root call graph (depth 2), called through a vtable or
 * from matched code (no direct C caller): a tripwire stub today.
 * Bug: the converted source did not compile (Ghidra printed the pool word as the overlapping
 * symbol `_func_00521054`): stub in the link.
 * Verified against EU 00521000..00521010 (ldr +0x2D0; addne #0xC; ldreq pool = 0x00725974).
 * Confidence: high. */
#include "route.h"

extern uint32_t data_00725974[];

int func_00521040(char *self)
{
    uint32_t p = RF(self, 0x2D0, uint32_t);
    if (p != 0)
        return (int)(p + 0xC);
    return (int)GPTR_OF(data_00725974);
}
