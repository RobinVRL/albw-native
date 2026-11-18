#include "ghidra_types.h"

extern float DAT_00115e08;
extern float DAT_00115e0c;

// USA 00115DC8 <- EU 00115DC8 (Ghidra, non-matching)
// GLOBAL DAT_00115e08 float
// GLOBAL DAT_00115e0c float

float func_00115DC8(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar1 <= DAT_00115e0c) {
    return fVar1;
  }
  fVar5 = DAT_00115e08 / fVar1;
  *param_1 = fVar2 * fVar5;
  param_1[1] = fVar3 * fVar5;
  param_1[2] = fVar4 * fVar5;
  return fVar1;
}

