/* compilefix: USA 00298224 (EU 002982CC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'register0x00000054'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - the function table starts it 4 bytes early, on the literal-pool word 0x0003DBC0 of the previous function (EU 002982CC), which Ghidra decoded as a conditional instruction (`if (in_ZR) register0x54 = ...`) followed by the `str r4,[sp,#-4]!` push: both removed; the body (EU 002982D0..00298364) is the real function and matches the Ghidra text [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern float DAT_00298368;
extern float DAT_0029836c;

// USA 00298224 <- EU 002982CC [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00298368 float
// GLOBAL DAT_0029836c float

void func_00298224(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  uint in_fpscr;
  float fVar3;
  
  if (*(char *)(param_1 + 0x40c) != '\0') {
    return;
  }
  *(int *)(param_1 + 0x454) = (int)*(short *)(param_1 + 0x5e);
  *(undefined1 *)(param_1 + 0x40c) = 1;
  *(undefined1 *)(param_1 + 0x451) = 1;
  *(undefined1 *)(param_1 + 0x452) = 0;
  fVar2 = DAT_0029836c;
  fVar1 = DAT_00298368;
  fVar3 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * DAT_0029836c;
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar3 = fVar3 - DAT_00298368;
  }
  *(float *)(param_1 + 0x458) = fVar3;
  fVar3 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x24),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * fVar2;
  if (*(int *)(param_1 + 0x24) < 0) {
    fVar3 = fVar3 - fVar1;
  }
  *(float *)(param_1 + 0x45c) = fVar3;
  fVar3 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x28),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * fVar2;
  if (*(int *)(param_1 + 0x28) < 0) {
    fVar3 = fVar3 - fVar1;
  }
  *(float *)(param_1 + 0x460) = fVar3;
  return;
}

