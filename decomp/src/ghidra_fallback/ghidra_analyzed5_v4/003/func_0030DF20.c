#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049F5FC(undefined4 *param_1);

// USA 0030DF20 <- EU 0030DEFC (Ghidra, non-matching)

undefined4 func_0030DF20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float in_s0;
  
  iVar4 = *(int *)(param_1 + 0x154);
  iVar2 = *(int *)(param_1 + 0x154);
  piVar3 = (int *)(*(int *)(param_1 + 0x14c) - iVar4);
  iVar1 = *(int *)((int)piVar3 + iVar4 + 4);
  while (piVar3 != (int *)((param_1 + 0x148) - iVar2)) {
    piVar3[5] = 0;
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    func_0010F1F8((int *)(*(int *)(param_1 + 0x154) + (int)piVar3),in_s0);
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
    piVar3 = (int *)(iVar1 - iVar4);
    iVar1 = *(int *)(iVar1 + 4);
  }
  return func_0049F5FC((undefined4 *)(param_1 + 0x148));
}

