#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);

// USA 00297474 <- EU 0029749C (Ghidra, non-matching)

void func_00297474(int param_1,int param_2,float fparam_0)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  func_0010C7F8(iVar1 + 0x74,param_2,fparam_0);
  *(float *)(iVar1 + 0x90) = fparam_0;
  return;
}

