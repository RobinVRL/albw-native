// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float DAT_003e19c0;
extern float DAT_003e19c4;

// USA 003E1980 <- EU 003E1960 (Ghidra, non-matching)
// GLOBAL DAT_003e19c0 float
// GLOBAL DAT_003e19c4 float

void func_003E1980(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar1 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar1 == DAT_003e19c0) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    param_1[2] = param_3[2];
    *param_1 = fVar1;
    param_1[1] = fVar2;
    return;
  }
  fVar1 = DAT_003e19c4 / SQRT(fVar1);
  *param_1 = fVar4 * fVar1;
  param_1[1] = fVar2 * fVar1;
  param_1[2] = fVar3 * fVar1;
  return;
}

