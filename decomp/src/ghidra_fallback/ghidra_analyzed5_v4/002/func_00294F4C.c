#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);

// USA 00294F4C <- EU 00294F74 (Ghidra, non-matching)

undefined4 func_00294F4C(int param_1,int param_2,float fparam_0)

{
  int iVar1;
  
  if (*(uint *)(*(int *)(param_1 + 0x4c) + 0x178) < 3) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x4c) + 0x180) + 8);
  }
  return func_0010C7F8(iVar1,param_2,fparam_0);
}

