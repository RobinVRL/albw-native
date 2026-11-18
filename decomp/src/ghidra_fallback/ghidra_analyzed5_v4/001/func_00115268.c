#include "ghidra_types.h"


// USA 00115268 <- EU 00115268 (Ghidra, non-matching)

void func_00115268(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  *param_1 = fVar1 * fVar5 + fVar2 * fVar7;
  param_1[1] = fVar1 * fVar6 + fVar2 * fVar8;
  param_1[2] = fVar3 * fVar5 + fVar4 * fVar7;
  param_1[3] = fVar3 * fVar6 + fVar4 * fVar8;
  return;
}

