/* compilefix: USA 003C90F0 (EU 003C90CC): ARM->Thumb interworking veneer `ldr pc, [pc, #-4]; .word 0x001004D5`
 * = tail jump to the Thumb function EU 001004D4 (USA func_001004D4), registers untouched.
 * Failed to compile: Ghidra followed the veneer into "(*DAT_<pool>)(param_1)" through an
 * `undefined` pool word (called object type 'undefined' is not a function).
 * Fix: a direct forwarding call with the target's own Ghidra signature (build/ghidra_extra4).
 * Confidence: high (the veneer is two words; arguments as the target reads them). */
#include "ghidra_types.h"

void func_001004D4(uint *param_1,int param_2,uint *param_3);

void func_003C90F0(uint *param_1,int param_2,uint *param_3)
{
  func_001004D4(param_1,param_2,param_3);
}
