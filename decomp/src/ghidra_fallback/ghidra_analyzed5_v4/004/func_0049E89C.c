#include "ghidra_types.h"


// USA 0049E89C <- EU 0049E874 (Ghidra, non-matching)

void func_0049E89C(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(*(int **)(param_1 + 0x1c));
    }
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(*(int **)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar3 = *(int *)(param_1 + 0x30);
      iVar1 = *(int *)(param_1 + 0x28);
      while (piVar2 = (int *)(iVar1 - iVar3),
            piVar2 != (int *)((param_1 + 0x24) - *(int *)(param_1 + 0x30))) {
        (**(code **)(*piVar2 + 0x1c))(piVar2);
        iVar1 = *(int *)((int)piVar2 + iVar3 + 4);
      }
      return;
    }
  }
  return;
}

