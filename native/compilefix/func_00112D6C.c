/* compilefix: USA 00112D6C (EU 00112D6C): a single `b 0x3C90A4` = tail jump to the interworking
 * veneer USA 003C90C8 (-> Thumb EU 003009D0, USA func_003009F4), registers untouched.
 * Failed to compile: the Ghidra text was the veneer's target body under the name func_003009F4
 * (conflicting types with its own extern declaration).
 * Fix: forwarding call with the target's Ghidra signature. Confidence: high (one instruction). */
#include "ghidra_types.h"

undefined4 func_003C90C8(uint *param_1, uint param_2, int param_3);

undefined4 func_00112D6C(uint *param_1, uint param_2, int param_3)
{
    return func_003C90C8(param_1, param_2, param_3);
}
