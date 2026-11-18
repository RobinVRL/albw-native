#include "ghidra_types.h"

extern int func_0023248C(int param_1,int *param_2,undefined4 param_3);

// USA 004550C4 <- EU 0045509C (Ghidra, non-matching)

void func_004550C4(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    return;
  }
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

