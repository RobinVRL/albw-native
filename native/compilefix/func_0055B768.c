/* compilefix: USA 0055B768 (EU 0055B740): a single `b` = tail jump to USA func_005467C0 (registers untouched).
 * Failed to compile: the Ghidra text was the jump target's body under the target's name
 * (conflicting types with the target's extern declaration).
 * Fix: forwarding call; target signature from matched source work7/gpt21/func_005467C0.cpp: s32(S *, VecCopy *); own signature as the Ghidra
 * callers see it. Confidence: high (one instruction). */
#include "ghidra_types.h"

int32_t func_005467C0(void *p, void *out);

undefined4 func_0055B768(int param_1, undefined4 *param_2)
{
    return (undefined4)func_005467C0((void *)(uintptr_t)param_1, param_2);
}
