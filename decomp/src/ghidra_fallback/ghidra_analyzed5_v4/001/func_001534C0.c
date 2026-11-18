#include "ghidra_types.h"

extern float DAT_00153520;
extern float DAT_00153524;
extern int DAT_00153528;

// USA 001534C0 <- EU 001534C4 (Ghidra, non-matching)
// GLOBAL DAT_00153520 float
// GLOBAL DAT_00153524 float
// GLOBAL DAT_00153528 int

float func_001534C0(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  uint uVar3;
  
  uVar3 = (uint)(((fparam_2 - fparam_3) / (fparam_4 - fparam_3)) * DAT_00153520);
  iVar1 = DAT_00153528 + (uVar3 >> 0x18) * 0x10;
  fVar2 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  return fparam_1 +
         (fparam_0 - fparam_1) *
         (*(float *)(iVar1 + 8) + *(float *)(iVar1 + 0xc) * fVar2 * DAT_00153524);
}

