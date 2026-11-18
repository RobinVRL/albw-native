#include "ghidra_types.h"

extern float DAT_0049ef50;
extern float DAT_0049ef54;

// USA 0049EEDC <- EU 0049EEB4 (Ghidra, non-matching)
// GLOBAL DAT_0049ef50 float
// GLOBAL DAT_0049ef54 float

float func_0049EEDC(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar6 = param_2[2];
  fVar5 = param_2[3];
  fVar3 = fVar6 - fVar1;
  fVar4 = fVar5 - param_2[1];
  fVar2 = (*param_1 - fVar1) * fVar3 + (param_1[1] - param_2[1]) * fVar4;
  if (fVar2 <= DAT_0049ef50) {
    fVar5 = param_2[1];
    fVar6 = fVar1;
    fVar4 = DAT_0049ef50;
  }
  else {
    fVar7 = fVar3 * fVar3 + fVar4 * fVar4;
    fVar4 = DAT_0049ef54;
    if (fVar2 < fVar7) {
      fVar4 = fVar2 / fVar7;
      fVar6 = fVar1 + fVar3 * fVar4;
      fVar5 = param_2[1] + (fVar5 - param_2[1]) * fVar4;
    }
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar4;
  }
  return (fVar6 - *param_1) * (fVar6 - *param_1) + (fVar5 - param_1[1]) * (fVar5 - param_1[1]);
}

