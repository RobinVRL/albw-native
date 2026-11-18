#include "ghidra_types.h"

extern float DAT_003fbec0;
extern float DAT_003fbec4;

// USA 003FBE8C <- EU 003FBE6C (Ghidra, non-matching)
// GLOBAL DAT_003fbec0 float
// GLOBAL DAT_003fbec4 float

bool func_003FBE8C(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar2 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
  bVar1 = fVar2 != DAT_003fbec0;
  if (bVar1) {
    fVar2 = DAT_003fbec4 / SQRT(fVar2);
    *param_1 = fVar5 * fVar2;
    param_1[1] = fVar3 * fVar2;
    param_1[2] = fVar4 * fVar2;
  }
  return bVar1;
}

