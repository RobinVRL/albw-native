#include "ghidra_types.h"

extern int func_0041CA0C(int param_1);

// USA 00417598 <- EU 00417578 (Ghidra, non-matching)

void func_00417598(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int iVar3;
  bool bVar4;
  
  if (param_2 == 0 || param_2 == 2) {
    func_0041CA0C(param_1);
    param_2 = extraout_r1;
  }
  piVar1 = *(int **)(param_3 + 300);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,param_1);
    param_2 = extraout_r1_00;
  }
  iVar2 = *(int *)(param_3 + 0x130);
  bVar4 = iVar2 != param_1;
  if (bVar4) {
    param_2 = *(int *)(iVar2 + 0x1a4);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1a4);
    *(int *)(param_3 + 0x130) = iVar2;
  }
  if (bVar4 && param_2 != 0) {
    while (iVar3 = *(int *)(iVar2 + 0x1a4), iVar3 != param_1) {
      iVar2 = iVar3;
      if (*(int *)(iVar3 + 0x1a4) == 0) {
        return;
      }
    }
    *(undefined4 *)(iVar2 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  }
  return;
}

