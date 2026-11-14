/* compilefix: USA 004FC1CC (EU 004FC1A4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier '_local_8'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - _local_XX (Ghidra's 4-byte view of the stack slot local_XX) -> *(undefined4 *)&local_XX (same frame offset) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_004FC798(int param_1,int param_2,undefined1 *param_3,float fparam_0);
extern float DAT_004fc1d8;

// USA 004FC1CC <- EU 004FC1A4 (Ghidra, non-matching)
// GLOBAL DAT_004fc1d8 float

undefined4 func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0)

{
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_8 (*(byte *)(albw_frame + 0x8))
  #define uStack_7 (*(undefined3 *)(albw_frame + 0x9))
  if (fparam_0 < DAT_004fc1d8) {
    param_3 = param_3 | 4;
  }
  (*(undefined4 *)&local_8) = CONCAT31((int3)((uint)in_r3 >> 8),param_3);
  return func_004FC798(param_1 + 0x5a8,param_2,&local_8,fparam_0);
}

