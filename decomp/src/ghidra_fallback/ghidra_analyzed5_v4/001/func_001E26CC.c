#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0058080C(int param_1,int param_2);

// USA 001E26CC <- EU 001E26CC (Ghidra, non-matching)

undefined4 func_001E26CC(int param_1,int param_2)

{
  int iVar1;
  float in_s0;
  
  func_0010C0B8(param_1 + 0x30);
  iVar1 = func_0058080C(param_1 + 0x10,*(int *)(param_1 + 0x1c) + param_2);
  if (-1 < iVar1) {
    func_0010F1F8((int *)(*(int *)(param_1 + 0x1c) + param_2),in_s0);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return func_0010EEE0(param_1 + 0x30);
}

