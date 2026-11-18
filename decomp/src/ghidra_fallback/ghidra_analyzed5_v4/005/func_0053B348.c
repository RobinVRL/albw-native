#include "ghidra_types.h"

extern int func_00518490(float *param_1,int param_2,int param_3,int param_4,float fparam_0);

// USA 0053B348 <- EU 0053B320 (Ghidra, non-matching)

undefined4 func_0053B348(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    if (iVar1 != 0) {
      *param_2 = *(float *)(iVar1 + 0x18);
      param_2[1] = *(float *)(iVar1 + 0x1c);
      param_2[2] = *(float *)(iVar1 + 0x20);
      return 0;
    }
  }
  else {
    if (5 < *(byte *)(param_1 + 0x1c)) {
      return func_00518490(param_2,iVar1,iVar2,(int)*(char *)(param_1 + 0x30),*(float *)(param_1 + 0x2c));
    }
    fVar3 = *(float *)(param_1 + 0x2c);
    *param_2 = *(float *)(iVar1 + 0x18) +
               (*(float *)(iVar2 + 0x18) - *(float *)(iVar1 + 0x18)) * fVar3;
    param_2[1] = *(float *)(iVar1 + 0x1c) +
                 (*(float *)(iVar2 + 0x1c) - *(float *)(iVar1 + 0x1c)) * fVar3;
    param_2[2] = *(float *)(iVar1 + 0x20) +
                 (*(float *)(iVar2 + 0x20) - *(float *)(iVar1 + 0x20)) * fVar3;
  }
  return 0;
}

