/* compilefix: USA 0068EFEC (EU 0068EFC4): a single `b` = tail jump to USA func_00583B90 (registers untouched).
 * Failed to compile: the Ghidra text was the jump target's body under the target's name
 * (conflicting types with the target's extern declaration).
 * Fix: forwarding call with the target's own signature (from build/decomp/ghidra_fallback/ghidra_analyzed4/005/func_00583B90.c).
 * Confidence: high (one instruction). */
#include "ghidra_types.h"

void func_00583B90(int param_1,undefined4 *param_2);

void func_0068EFEC(int param_1,undefined4 *param_2)
{
  func_00583B90(param_1,param_2);
}
