/* USA 0066E7A0 (EU 0066E778): StateMgr::changeState(sm, s8 newState), class-B template T6 (body and verification
 * in route_sm.h; the 7 copies normalise to one EU instruction sequence).
 * Route: changeState of a state machine on the course/stage path (route phase 5; named StateMgr::ChangeState(s8) in shared/symbols.jsonl).
 * Bug: Ghidra printed both handler calls as `(*UNRECOVERED_JUMPTABLE)()` with no arguments:
 * the exit handler lost `this` and newState, the enter handler lost `this` (garbage natively).
 * Confidence: high. */
#include "route_sm.h"

void func_0066E7A0(char *sm, int8_t newState)
{
    route_sm_change_state_t6(sm, (uint32_t)(int32_t)newState);
}
