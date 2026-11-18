#include "ghidra_types.h"

extern float DAT_00432478;
extern undefined4 DAT_0043247c;
extern undefined4 DAT_00432480;

// USA 0043244C <- EU 0043242C (Ghidra, non-matching)
// GLOBAL DAT_00432478 float
// GLOBAL DAT_0043247c undefined4
// GLOBAL DAT_00432480 undefined4

void func_0043244C(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = DAT_0043247c;
  fVar1 = DAT_00432478;
  fVar3 = *(float *)(param_1 + 0xc) - DAT_00432478;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 4) - DAT_00432478;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(float *)(param_1 + 0x3c) = fVar3;
  uVar2 = DAT_00432480;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 4) + fVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0xc) + fVar1;
  return;
}

