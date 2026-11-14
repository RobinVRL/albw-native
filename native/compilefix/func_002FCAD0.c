/* compilefix: USA 002FCAD0 (EU 002FCAAC): a single `b` = tail jump to USA func_00165F3C (registers untouched).
 * Failed to compile: the Ghidra text was the jump target's body under the target's name
 * (conflicting types with the target's extern declaration).
 * Fix: forwarding call; target signature from matched source build/decomp/src/work7/gpt16/func_00165F3C.cpp: bool(Obj *, u32); own signature as the Ghidra
 * callers see it. Confidence: high (one instruction). */
#include "ghidra_types.h"

_Bool func_00165F3C(void *p, uint32_t arg);

undefined4 func_002FCAD0(int *param_1, int param_2)
{
    return (undefined4)func_00165F3C(param_1, (uint32_t)param_2);
}
