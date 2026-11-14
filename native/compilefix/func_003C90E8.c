/* compilefix: USA 003C90E8 (EU 003C90C4): ARM->Thumb interworking veneer `ldr pc, [pc, #-4]; .word 0x00100461`
 * = tail jump to the Thumb function EU 00100460 (USA func_00100460), registers untouched.
 * Failed to compile: Ghidra followed the veneer into "(*DAT_<pool>)(param_1)" through an
 * `undefined` pool word (called object type 'undefined' is not a function).
 * Fix: a direct forwarding call with the target's own Ghidra signature (build/ghidra_extra4).
 * Confidence: high (the veneer is two words; arguments as the target reads them). */
#include "ghidra_types.h"

void func_00100460(uint *param_1,undefined4 param_2,int param_3);

void func_003C90E8(uint *param_1,undefined4 param_2,int param_3)
{
  func_00100460(param_1,param_2,param_3);
}
