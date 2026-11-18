#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);

// USA 0010DEF0 <- EU 0010DEF0 (Ghidra, non-matching)

undefined4 func_0010DEF0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
    func_0010C0B8(param_1 + 0x54);
    iVar1 = param_1 + 0x54;
  }
  func_0010F1DC((int *)(param_1 + 0x40),(int *)(*(int *)(param_1 + 0x4c) + param_2));
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if (iVar1 == 0) {
    return 0;
  }
  return func_0010EEE0(iVar1);
}

