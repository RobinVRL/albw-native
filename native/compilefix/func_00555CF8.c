/* compilefix: USA 00555CF8 (EU 00555CD0): a single `b` = tail jump to USA func_0054EA70 (registers untouched).
 * Failed to compile: the Ghidra text was the jump target's body under the target's name
 * (conflicting types with the target's extern declaration).
 * Fix: forwarding call; target signature from matched source work7/gpt21/func_0054EA70.cpp: bool(f32, f32, f32), s0-s2 forwarded; own signature as the Ghidra
 * callers see it. Confidence: high (one instruction). */
#include "ghidra_types.h"

_Bool func_0054EA70(float a, float b, float c);

_Bool func_00555CF8(float fparam_0, float fparam_1, float fparam_2)
{
    return func_0054EA70(fparam_0, fparam_1, fparam_2);
}
