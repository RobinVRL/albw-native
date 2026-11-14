/* compilefix: USA 003C90E0 (EU 003C90BC): ARM->Thumb interworking veneer `ldr pc, [pc, #-4]; .word 0x001004F1`
 * = tail jump to the Thumb function EU 001004F0 (USA func_001004F0), registers untouched.
 * Failed to compile: Ghidra followed the veneer into "(*DAT_<pool>)(param_1)" through an
 * `undefined` pool word (called object type 'undefined' is not a function).
 * Fix: a direct forwarding call with the target's own Ghidra signature (build/ghidra_extra4).
 * Confidence: high (the veneer is two words; arguments as the target reads them). */
#include "ghidra_types.h"

void func_001004F0(uint *param_1,int param_2,int param_3);

void func_003C90E0(uint *param_1,int param_2,int param_3)
{
  func_001004F0(param_1,param_2,param_3);
}
