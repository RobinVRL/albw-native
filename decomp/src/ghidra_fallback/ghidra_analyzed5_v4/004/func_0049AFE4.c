#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 0049AFE4 <- EU 0049AFBC (Ghidra, non-matching)

undefined4 func_0049AFE4(int param_1,int param_2)

{
  int iVar1;
  float in_s0;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar1 = param_1 + 0x54;
  }
  func_0010F1F8((int *)(*(int *)(param_1 + 0x4c) + param_2),in_s0);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  if (iVar1 == 0) {
    return 0;
  }
  return func_0010EEE0(iVar1);
}

