#include "ghidra_types.h"

extern float DAT_0026581c;
extern float DAT_00265820;
extern int DAT_00265824;

// USA 0026579C <- EU 002657C4 (Ghidra, non-matching)
// GLOBAL DAT_0026581c float
// GLOBAL DAT_00265820 float
// GLOBAL DAT_00265824 int

float func_0026579C(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4)

{
  float *pfVar1;
  uint in_fpscr;
  float fVar2;
  uint uVar3;
  
  uVar3 = (uint)(((fparam_2 - fparam_3) / (fparam_4 - fparam_3)) * DAT_0026581c);
  pfVar1 = (float *)(DAT_00265824 + (uVar3 >> 0x18) * 0x10);
  fVar2 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  return fparam_1 + (fparam_0 - fparam_1) * (*pfVar1 + pfVar1[1] * fVar2 * DAT_00265820);
}

