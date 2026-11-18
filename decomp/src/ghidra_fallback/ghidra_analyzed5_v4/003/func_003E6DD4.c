#include "ghidra_types.h"

extern float DAT_003e6f38;
extern float DAT_003e6f3c;

// USA 003E6DD4 <- EU 003E6DB4 (Ghidra, non-matching)
// GLOBAL DAT_003e6f38 float
// GLOBAL DAT_003e6f3c float

undefined4 func_003E6DD4(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  *(float *)(param_1 + 0x19c) = *param_2;
  *(float *)(param_1 + 0x1a0) = fVar1;
  *(float *)(param_1 + 0x1a4) = fVar2;
  *(float *)(param_1 + 0x1a8) = fVar3;
  *(float *)(param_1 + 0x1ac) = fVar4;
  *(float *)(param_1 + 0x1b0) = fVar5;
  *(float *)(param_1 + 0x1b4) = fVar7;
  *(float *)(param_1 + 0x1b8) = fVar8;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  *(float *)(param_1 + 0x1bc) = param_2[8];
  *(float *)(param_1 + 0x1c0) = fVar1;
  *(float *)(param_1 + 0x1c4) = fVar2;
  *(float *)(param_1 + 0x1c8) = fVar3;
  fVar2 = DAT_003e6f3c;
  fVar1 = DAT_003e6f38;
  fVar9 = param_2[1];
  fVar8 = param_2[5];
  fVar6 = param_2[2];
  fVar3 = param_2[6];
  fVar7 = param_2[9];
  fVar5 = param_2[10];
  fVar4 = SQRT(*param_2 * *param_2 + param_2[4] * param_2[4] + param_2[8] * param_2[8]);
  *(float *)(param_1 + 0x1fc) = fVar4;
  fVar7 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
  *(float *)(param_1 + 0x200) = fVar7;
  fVar3 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5);
  *(float *)(param_1 + 0x204) = fVar3;
  if (fVar4 <= fVar1) {
    *(float *)(param_1 + 0x1ec) = fVar1;
    *(float *)(param_1 + 0x1dc) = fVar1;
    *(float *)(param_1 + 0x1cc) = fVar1;
  }
  else {
    fVar5 = fVar2 / fVar4;
    *(float *)(param_1 + 0x1cc) = *param_2 * fVar5;
    *(float *)(param_1 + 0x1dc) = param_2[4] * fVar5;
    *(float *)(param_1 + 0x1ec) = param_2[8] * fVar5;
  }
  if (fVar7 <= fVar1) {
    *(float *)(param_1 + 0x1f0) = fVar1;
    *(float *)(param_1 + 0x1e0) = fVar1;
    *(float *)(param_1 + 0x1d0) = fVar1;
  }
  else {
    fVar5 = fVar2 / fVar7;
    *(float *)(param_1 + 0x1d0) = param_2[1] * fVar5;
    *(float *)(param_1 + 0x1e0) = param_2[5] * fVar5;
    *(float *)(param_1 + 0x1f0) = param_2[9] * fVar5;
  }
  if (fVar3 <= fVar1) {
    *(float *)(param_1 + 500) = fVar1;
    *(float *)(param_1 + 0x1e4) = fVar1;
    *(float *)(param_1 + 0x1d4) = fVar1;
  }
  else {
    fVar2 = fVar2 / fVar3;
    *(float *)(param_1 + 0x1d4) = param_2[2] * fVar2;
    *(float *)(param_1 + 0x1e4) = param_2[6] * fVar2;
    *(float *)(param_1 + 500) = param_2[10] * fVar2;
  }
  *(float *)(param_1 + 0x1d8) = param_2[3];
  *(float *)(param_1 + 0x1e8) = param_2[7];
  *(float *)(param_1 + 0x1f8) = param_2[0xb];
  *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x208) * fVar4;
  *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x20c) * fVar7;
  return (undefined4)param_1;
}

