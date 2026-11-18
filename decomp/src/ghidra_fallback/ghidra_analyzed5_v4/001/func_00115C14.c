#include "ghidra_types.h"

extern float DAT_00115c4c;
extern float DAT_00115c50;

// USA 00115C14 <- EU 00115C14 (Ghidra, non-matching)
// GLOBAL DAT_00115c4c float
// GLOBAL DAT_00115c50 float

float func_00115C14(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  if (fVar1 <= DAT_00115c50) {
    return fVar1;
  }
  fVar4 = DAT_00115c4c / fVar1;
  *param_1 = fVar2 * fVar4;
  param_1[1] = fVar3 * fVar4;
  return fVar1;
}

