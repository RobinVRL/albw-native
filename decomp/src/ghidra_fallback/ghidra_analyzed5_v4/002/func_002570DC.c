#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);

// USA 002570DC <- EU 00257104 (Ghidra, non-matching)

void func_002570DC(int param_1,int param_2)

{
  func_0010C7F8(*(int *)(param_1 + 0x18) + 0x28,param_2,*(float *)(*(int *)(param_1 + 0x18) + 0x40))
  ;
  return;
}

