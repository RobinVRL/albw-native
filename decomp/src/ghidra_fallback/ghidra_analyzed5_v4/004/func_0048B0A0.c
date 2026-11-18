#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern float DAT_0048b0fc;
extern float DAT_0048b100;
extern undefined4 DAT_0048b104;

// USA 0048B0A0 <- EU 0048B078 (Ghidra, non-matching)
// GLOBAL DAT_0048b0fc float
// GLOBAL DAT_0048b100 float
// GLOBAL DAT_0048b104 undefined4

void func_0048B0A0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = DAT_0048b0fc;
  fVar3 = *(float *)(param_2 + 0x9c);
  fVar5 = *(float *)(param_2 + 0xa0);
  fVar4 = *(float *)(param_2 + 0xa4);
  fVar6 = *(float *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x94);
  *(float *)(param_1 + 0x34) = (fVar4 + fVar6) * fVar1;
  *(float *)(param_1 + 0x38) = (fVar3 + fVar5) * fVar1;
  fVar3 = DAT_0048b100;
  fVar5 = *(float *)(param_2 + 0xa4);
  fVar7 = *(float *)(param_2 + 0xa8);
  fVar4 = *(float *)(param_2 + 0x9c);
  fVar6 = *(float *)(param_2 + 0xa0);
  *(float *)(param_1 + 0x48) = *(float *)(param_2 + 0x94) - DAT_0048b100;
  uVar2 = DAT_0048b104;
  *(float *)(param_1 + 0x40) = (fVar5 + fVar7) * fVar1;
  *(float *)(param_1 + 0x44) = (fVar4 + fVar6) * fVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(float *)(param_1 + 0x50) = fVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  func_00115DC8((float *)(param_1 + 0x4c));
  return;
}

