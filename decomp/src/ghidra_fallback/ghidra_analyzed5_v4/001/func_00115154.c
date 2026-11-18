#include "ghidra_types.h"

extern float DAT_0011518c;
extern int DAT_00115190;

// USA 00115154 <- EU 00115154 (Ghidra, non-matching)
// GLOBAL DAT_0011518c float
// GLOBAL DAT_00115190 int

float func_00115154(float *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)VectorUnsignedToFloat(param_3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  pfVar1 = (float *)(DAT_00115190 + (param_3 >> 0x18) * 0x10);
  fVar5 = fVar5 * DAT_0011518c;
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  fVar2 = *pfVar1 + pfVar1[1] * fVar5;
  *param_1 = fVar2;
  *param_2 = fVar3 + fVar4 * fVar5;
  return fVar2;
}

