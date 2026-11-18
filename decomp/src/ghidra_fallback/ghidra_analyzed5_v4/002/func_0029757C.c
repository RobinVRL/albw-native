#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0019A848(int param_1);

// USA 0029757C <- EU 002975A4 (Ghidra, non-matching)

void func_0029757C(int param_1,int param_2)

{
  float in_s0;
  
  func_0019A848(param_2);
  func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + param_2),in_s0);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  func_0010F1DC((int *)(param_1 + 0x14),(int *)(*(int *)(param_1 + 0x20) + param_2));
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}

