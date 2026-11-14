/* USA 004B77C4 (EU 004B779C): per-frame update of the manager singleton *data_0070A210, called
 * by the main-game frame 004EFB10 (TaskMainGame calc) when the singleton exists: dispatches on
 * the mode byte +0x23C4 (0 or 1) through the PMF table data_00694F64 = {004B1ADC, 004B08FC}.
 * Route: every gameplay frame (4th manager of 004EFB10).
 * Bug: class-B single (b_templates single_004B77C4): Ghidra emitted the PMF tail call as
 * `(*UNRECOVERED_JUMPTABLE)()` without `this` (r0 = this + (adj >> 1) on ARM).
 * Verified instruction by instruction against EU 004B779C..004B77DC (unsigned `bhs` mode test,
 * ldreq non-virtual target, virtual: *(*this_adj + ptr), `bx r1`).  Confidence: high. */
#include "route.h"

extern uint32_t data_00694F64[];

void func_004B77C4(char *self)
{
    uint8_t mode = RF(self, 0x23C4, uint8_t);
    if (mode >= 2)
        return;
    char *t;
    void *fn = route_pmf_resolve((const route_pmf *)data_00694F64 + mode, self, &t);
    ((void (*)(char *))fn)(t);
}
