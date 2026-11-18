#include "ghidra_types.h"

extern float DAT_003e1a00;

// USA 003E19E8 <- EU 003E19C8 (Ghidra, non-matching)
// GLOBAL DAT_003e1a00 float

float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = fparam_4 * fparam_4 - fparam_4;
  fVar3 = fVar1 * fparam_4;
  fVar2 = fparam_4 * fparam_4 - fVar3 * DAT_003e1a00;
  return (fparam_0 - fVar2 * fparam_0) + fVar2 * fparam_2 + (fVar3 - fVar1) * fparam_1 +
         fVar3 * fparam_3;
}

