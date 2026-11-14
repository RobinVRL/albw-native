/* USA 0066BFFC (EU 0066BFD4): StateMgr::changeState(sm, s8 newState), class-B template T6 (body and verification
 * in route_sm.h; the 7 copies normalise to one EU instruction sequence).
 * Route: state-machine changeState instance (owner class unknown).
 * Bug: Ghidra printed both handler calls as `(*UNRECOVERED_JUMPTABLE)()` with no arguments:
 * the exit handler lost `this` and newState, the enter handler lost `this` (garbage natively).
 * Confidence: high. */
#include "route_sm.h"

void func_0066BFFC(char *sm, int8_t newState)
{
    route_sm_change_state_t6(sm, (uint32_t)(int32_t)newState);
}
