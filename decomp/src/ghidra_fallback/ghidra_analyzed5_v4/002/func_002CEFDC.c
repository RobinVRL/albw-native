#include "ghidra_types.h"

extern float DAT_002cf030;
extern float DAT_002cf034;
extern float DAT_002cf038;
extern float DAT_002cf03c;

// USA 002CEFDC <- EU 002CEFB8 (Ghidra, non-matching)
// GLOBAL DAT_002cf030 float
// GLOBAL DAT_002cf034 float
// GLOBAL DAT_002cf038 float
// GLOBAL DAT_002cf03c float

float func_002CEFDC(float fparam_0,float fparam_1,float fparam_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = fparam_2 / DAT_002cf034;
  fVar3 = fVar2 * fVar2 - fVar2;
  fVar1 = fVar3 * fVar2;
  fVar2 = fVar2 * fVar2 - fVar1 * DAT_002cf03c;
  fVar1 = ((DAT_002cf030 - fVar2 * DAT_002cf030) + fVar2 * DAT_002cf034 +
           (fVar1 - fVar3) * DAT_002cf038 + fVar1 * DAT_002cf030) / DAT_002cf034;
  fVar3 = fVar1 * fVar1 - fVar1;
  fVar2 = fVar3 * fVar1;
  fVar1 = fVar1 * fVar1 - fVar2 * DAT_002cf03c;
  return (fparam_0 - fVar1 * fparam_0) + fVar1 * fparam_1 + (fVar2 - fVar3) * DAT_002cf030 +
         fVar2 * DAT_002cf030;
}

