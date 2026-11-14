/* compilefix: USA 003C90C8 (EU 003C90A4): ARM->Thumb interworking veneer `ldr pc, [pc, #-4]; .word 0x003009D1`
 * = tail jump to the Thumb function EU 003009D0 (USA func_003009F4), registers untouched.
 * Failed to compile: Ghidra followed the veneer into "(*DAT_<pool>)(param_1)" through an
 * `undefined` pool word (called object type 'undefined' is not a function).
 * Fix: a direct forwarding call with the target's own Ghidra signature (build/ghidra_extra4).
 * Confidence: high (the veneer is two words; arguments as the target reads them). */
#include "ghidra_types.h"

undefined4 func_003009F4(uint *param_1,uint param_2,int param_3);

undefined4 func_003C90C8(uint *param_1,uint param_2,int param_3)
{
  return func_003009F4(param_1,param_2,param_3);
}
