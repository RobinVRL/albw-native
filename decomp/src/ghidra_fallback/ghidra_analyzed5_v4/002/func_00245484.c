#include "ghidra_types.h"

extern float DAT_002454fc;
extern float DAT_00245500;
extern float DAT_00245504;
extern float DAT_00245508;

// USA 00245484 <- EU 00245484 (Ghidra, non-matching)
// GLOBAL DAT_002454fc float
// GLOBAL DAT_00245500 float
// GLOBAL DAT_00245504 float
// GLOBAL DAT_00245508 float

float func_00245484(float fparam_0,float fparam_1,float fparam_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = fparam_2 / DAT_00245500;
  fVar3 = fVar2 * fVar2 - fVar2;
  fVar1 = fVar3 * fVar2;
  fVar2 = fVar2 * fVar2 - fVar1 * DAT_00245508;
  fVar1 = ((DAT_002454fc - fVar2 * DAT_002454fc) + fVar2 * DAT_00245500 +
           (fVar1 - fVar3) * DAT_00245504 + fVar1 * DAT_002454fc) / DAT_00245500;
  fVar3 = fVar1 * fVar1 - fVar1;
  fVar2 = fVar3 * fVar1;
  fVar1 = fVar1 * fVar1 - fVar2 * DAT_00245508;
  return (fparam_0 - fVar1 * fparam_0) + fVar1 * fparam_1 + (fVar2 - fVar3) * DAT_002454fc +
         fVar2 * DAT_002454fc;
}

