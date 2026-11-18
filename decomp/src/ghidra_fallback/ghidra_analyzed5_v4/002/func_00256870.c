#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);

// USA 00256870 <- EU 00256898 (Ghidra, non-matching)

void func_00256870(int param_1,int param_2,float fparam_0)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  func_0010C7F8(iVar1 + 0x28,param_2,fparam_0);
  *(float *)(iVar1 + 0x40) = fparam_0;
  if (param_2 == 0) {
    *(float *)(iVar1 + 0x44) = fparam_0;
  }
  return;
}

