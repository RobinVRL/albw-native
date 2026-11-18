#include "ghidra_types.h"


// USA 003E2298 <- EU 003E2278 (Ghidra, non-matching)

void func_003E2298(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar4 = *param_2;
  fVar2 = param_3[2];
  fVar1 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = fVar1 * fVar2 - fVar3 * fVar6;
  param_1[1] = fVar3 * fVar5 - fVar4 * fVar2;
  param_1[2] = fVar4 * fVar6 - fVar1 * fVar5;
  return;
}

