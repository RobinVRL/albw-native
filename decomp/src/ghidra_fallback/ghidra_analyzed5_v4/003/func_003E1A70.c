#include "ghidra_types.h"


// USA 003E1A70 <- EU 003E1A50 (Ghidra, non-matching)

void func_003E1A70(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_2 != 0 && param_2 != 4) {
    if (param_2 == 2) {
      *param_1 = -*param_1;
      param_1[1] = -param_1[1];
      param_1[2] = -param_1[2];
      param_1[3] = -param_1[3];
      param_1[4] = -param_1[4];
      param_1[5] = -param_1[5];
      param_1[6] = -param_1[6];
      param_1[7] = -param_1[7];
      return;
    }
    if (param_2 == 3) {
      fVar2 = *param_1;
      fVar1 = param_1[5];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      param_1[5] = param_1[1];
      *param_1 = -param_1[4];
      param_1[1] = -fVar1;
      param_1[2] = -param_1[6];
      param_1[3] = -param_1[7];
      param_1[4] = fVar2;
      param_1[6] = fVar3;
      param_1[7] = fVar4;
      return;
    }
    fVar2 = *param_1;
    fVar3 = param_1[1];
    fVar4 = param_1[2];
    fVar1 = param_1[7];
    param_1[7] = -param_1[3];
    *param_1 = param_1[4];
    param_1[1] = param_1[5];
    param_1[2] = param_1[6];
    param_1[3] = fVar1;
    param_1[4] = -fVar2;
    param_1[5] = -fVar3;
    param_1[6] = -fVar4;
  }
  return;
}

