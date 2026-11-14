/* compilefix: USA 002FFFC0 (EU 002FFF9C): a single `b` = tail jump to USA func_0010C1B8 (registers untouched).
 * Failed to compile: the Ghidra text was the jump target's body under the target's name
 * (conflicting types with the target's extern declaration).
 * Fix: forwarding call with the target's own signature (from build/decomp/ghidra_fallback/ghidra_analyzed4/001/func_0010C1B8.c).
 * Confidence: high (one instruction). */
#include "ghidra_types.h"

undefined4 func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);

undefined4 func_002FFFC0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  return func_0010C1B8(param_1,param_2,param_3);
}
