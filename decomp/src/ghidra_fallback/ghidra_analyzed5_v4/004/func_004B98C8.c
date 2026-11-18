#include "ghidra_types.h"

extern int func_0023248C(int param_1,int *param_2,undefined4 param_3);

// USA 004B98C8 <- EU 004B98A0 (Ghidra, non-matching)

void func_004B98C8(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  func_0023248C(param_1,param_2,param_3);
  iVar3 = *(int *)(param_1 + 0x54);
  iVar1 = *(int *)(param_1 + 0x4c);
  while (piVar2 = (int *)(iVar1 - iVar3),
        piVar2 != (int *)((param_1 + 0x48) - *(int *)(param_1 + 0x54))) {
    if ((piVar2[6] & 2U) != 0) {
      (**(code **)(*piVar2 + 0x10))(piVar2,param_2,param_3);
    }
    iVar1 = *(int *)((int)piVar2 + iVar3 + 4);
  }
  return;
}

