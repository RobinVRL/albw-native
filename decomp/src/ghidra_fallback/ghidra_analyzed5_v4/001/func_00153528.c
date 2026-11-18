#include "ghidra_types.h"

extern float DAT_00153584;
extern float DAT_00153588;
extern int DAT_0015358c;

// USA 00153528 <- EU 0015352C (Ghidra, non-matching)
// GLOBAL DAT_00153584 float
// GLOBAL DAT_00153588 float
// GLOBAL DAT_0015358c int

float func_00153528(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4)

{
  float *pfVar1;
  uint in_fpscr;
  float fVar2;
  uint uVar3;
  
  uVar3 = (uint)(((fparam_2 - fparam_3) / (fparam_4 - fparam_3)) * DAT_00153584);
  pfVar1 = (float *)(DAT_0015358c + (uVar3 >> 0x18) * 0x10);
  fVar2 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  return fparam_1 + (fparam_0 - fparam_1) * (*pfVar1 + pfVar1[1] * fVar2 * DAT_00153588);
}

