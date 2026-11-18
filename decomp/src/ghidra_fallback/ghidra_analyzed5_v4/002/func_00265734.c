#include "ghidra_types.h"

extern float DAT_002657b8;
extern float DAT_002657bc;
extern int DAT_002657c0;

// USA 00265734 <- EU 0026575C (Ghidra, non-matching)
// GLOBAL DAT_002657b8 float
// GLOBAL DAT_002657bc float
// GLOBAL DAT_002657c0 int

float func_00265734(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  uint uVar3;
  
  uVar3 = (uint)(((fparam_2 - fparam_3) / (fparam_4 - fparam_3)) * DAT_002657b8);
  iVar1 = DAT_002657c0 + (uVar3 >> 0x18) * 0x10;
  fVar2 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  return fparam_1 +
         (fparam_0 - fparam_1) *
         (*(float *)(iVar1 + 8) + *(float *)(iVar1 + 0xc) * fVar2 * DAT_002657bc);
}

