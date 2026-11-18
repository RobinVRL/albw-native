#include "ghidra_types.h"


// USA 0051D2F4 <- EU 0051D2CC (Ghidra, non-matching)

undefined4 func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  iVar3 = param_2 - *param_1;
  fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = (int)(fVar5 * fparam_0) >> 0x1f;
  iVar4 = ((int)(fVar5 * fparam_0) ^ uVar1) - uVar1;
  if (iVar4 == -0x80000000) {
    iVar4 = param_4;
  }
  if ((param_3 <= iVar4) && (param_3 = iVar4, param_4 < iVar4)) {
    param_3 = param_4;
  }
  if (param_3 == -0x80000000) {
LAB_0051d340:
    uVar2 = 1;
    *param_1 = param_2;
  }
  else {
    uVar2 = 0;
    if (iVar3 <= param_3) {
      if (-iVar3 == param_3 || -param_3 < iVar3) goto LAB_0051d340;
      param_3 = -param_3;
    }
    *param_1 = *param_1 + param_3;
  }
  return uVar2;
}

