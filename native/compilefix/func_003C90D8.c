/* compilefix: USA 003C90D8 (EU 003C90B4): ARM->Thumb interworking veneer `ldr pc, [pc, #-4]; .word 0x00100543`
 * = tail jump to the Thumb function EU 00100542 (USA func_00100542), registers untouched.
 * Failed to compile: Ghidra followed the veneer into "(*DAT_<pool>)(param_1)" through an
 * `undefined` pool word (called object type 'undefined' is not a function).
 * Fix: a direct forwarding call with the target's own Ghidra signature (build/ghidra_extra4).
 * Confidence: high (the veneer is two words; arguments as the target reads them). */
#include "ghidra_types.h"

undefined4 func_00100542(uint *param_1,undefined4 param_2,undefined4 *param_3);

undefined4 func_003C90D8(uint *param_1,undefined4 param_2,undefined4 *param_3)
{
  return func_00100542(param_1,param_2,param_3);
}
