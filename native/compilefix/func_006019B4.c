/* compilefix: USA 006019B4 (EU 0060198C): a single `b` = tail jump to USA func_003E3D04 (registers untouched).
 * Failed to compile: the Ghidra text was the jump target's body under the target's name
 * (conflicting types with the target's extern declaration).
 * Fix: forwarding call; target signature from matched source work7/gpt19/func_003E3D04.cpp: u32(u32, u32, u32); own signature as the Ghidra
 * callers see it. Confidence: high (one instruction). */
#include "ghidra_types.h"

uint32_t func_003E3D04(uint32_t a, uint32_t b, uint32_t c);

uint func_006019B4(undefined4 param_1, undefined4 param_2, int param_3)
{
    return func_003E3D04(param_1, param_2, (uint32_t)param_3);
}
