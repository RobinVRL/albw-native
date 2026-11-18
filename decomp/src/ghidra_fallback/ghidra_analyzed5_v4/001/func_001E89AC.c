#include "ghidra_types.h"


// USA 001E89AC <- EU 001E89AC (Ghidra, non-matching)

void func_001E89AC(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  while (0 < *(int *)(param_1 + 0xe30)) {
    if ((*(int **)(param_1 + 0xe34) == (int *)0x0) ||
       ((**(code **)(**(int **)(param_1 + 0xe34) + 8))(*(int **)(param_1 + 0xe34)), 0 < *(int *)(param_1 + 0xe30))) {
      *(int *)(param_1 + 0xe30) = *(int *)(param_1 + 0xe30) + -1;
    }
    piVar1 = *(int **)(param_1 + 0xe30);
    bVar3 = (int)piVar1 < 0;
    bVar4 = piVar1 == (int *)0x0;
    if (bVar3) {
      piVar1 = *(int **)(param_1 + 0xe24);
    }
    if (bVar4) {
      *(undefined4 *)(param_1 + 0xe34) = 0;
    }
    else {
      if (!bVar3) {
        iVar2 = (int)piVar1 + *(int *)(param_1 + 0xe2c) + -1;
        if (*(int *)(param_1 + 0xe28) <= iVar2) {
          iVar2 = iVar2 - *(int *)(param_1 + 0xe28);
        }
        piVar1 = (int *)(*(int *)(param_1 + 0xe24) + iVar2 * 0x2d0);
      }
      *(int **)(param_1 + 0xe34) = piVar1;
      (**(code **)(*piVar1 + 0x14))(piVar1);
      if (0 < *(int *)(param_1 + 0xeb4)) {
        *(int *)(param_1 + 0xeb4) = *(int *)(param_1 + 0xeb4) + -1;
      }
      if (0 < *(int *)(param_1 + 0xef4)) {
        *(int *)(param_1 + 0xef4) = *(int *)(param_1 + 0xef4) + -1;
      }
    }
  }
  return;
}

