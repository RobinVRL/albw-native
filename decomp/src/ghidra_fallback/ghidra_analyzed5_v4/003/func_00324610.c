#include "ghidra_types.h"


// USA 00324610 <- EU 003245EC (Ghidra, non-matching)

void func_00324610(int *param_1,int *param_2,float fparam_0,float fparam_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  fVar2 = (float)VectorSignedToFloat(*param_2 - *param_1,(byte)(in_fpscr >> 0x15) & 3);
  iVar1 = (int)(fVar2 * fparam_0) + param_1[1];
  param_1[1] = iVar1;
  *param_1 = iVar1 + *param_1;
  fVar2 = (float)VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = (int)(fVar2 * fparam_1);
  return;
}

