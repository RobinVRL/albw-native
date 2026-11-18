#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);

// USA 00297448 <- EU 00297470 (Ghidra, non-matching)

void func_00297448(int param_1,int param_2,float fparam_0)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  func_0010C7F8(iVar1 + 0x5c,param_2,fparam_0);
  *(float *)(iVar1 + 0x8c) = fparam_0;
  return;
}

