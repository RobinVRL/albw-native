#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0019A848(int param_1);

// USA 00297574 <- EU 0029759C (Ghidra, non-matching)

void func_00297574(int param_1,int param_2)

{
  int iVar1;
  float in_s0;
  
  iVar1 = *(int *)(param_1 + 0x38);
  func_0019A848(param_2);
  func_0010F1F8((int *)(*(int *)(iVar1 + 0x30) + param_2),in_s0);
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
  func_0010F1DC((int *)(iVar1 + 0x14),(int *)(*(int *)(iVar1 + 0x20) + param_2));
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}

