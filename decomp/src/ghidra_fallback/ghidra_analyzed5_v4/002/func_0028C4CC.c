#include "ghidra_types.h"

extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);

// USA 0028C4CC <- EU 0028C4F4 (Ghidra, non-matching)

undefined4 func_0028C4CC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x14);
  if (*(float *)(iVar1 + 8) != fparam_0) {
    param_3 = 1;
    *(float *)(iVar1 + 8) = fparam_0;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  return func_00169A80(*(int **)(param_1 + 0x18),iVar1,param_3,param_4);
}

