/* compilefix: USA 0029F0D4 (EU 0029F0B0): a single `b` = tail jump to USA func_0014E138 (registers untouched).
 * Failed to compile: the Ghidra text was the jump target's body under the target's name
 * (conflicting types with the target's extern declaration).
 * Fix: forwarding call with the target's own signature (from build/decomp/ghidra_fallback/ghidra_analyzed4/001/func_0014E138.c).
 * Confidence: high (one instruction). */
#include "ghidra_types.h"

undefined4 func_0014E138(int param_1,int param_2);

undefined4 func_0029F0D4(int param_1,int param_2)
{
  return func_0014E138(param_1,param_2);
}
