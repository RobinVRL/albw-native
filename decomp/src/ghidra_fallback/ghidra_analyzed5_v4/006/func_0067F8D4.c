#include "ghidra_types.h"


// USA 0067F8D4 <- EU 0067F8AC (Ghidra, non-matching)

void func_0067F8D4(float *param_1,float param_2,float fparam_0)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  if ((int)param_1[3] < (int)param_1[2]) {
    fVar2 = (float)VectorSignedToFloat(ALBW_AS_U32(param_1[3]),(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat(ALBW_AS_U32(param_1[2]),(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = ((fVar1 - *param_1) * fVar2) / fVar3 + *param_1;
  }
  *param_1 = fVar1;
  param_1[1] = fparam_0;
  param_1[2] = param_2;
  param_1[3] = 0.0;
  return;
}

