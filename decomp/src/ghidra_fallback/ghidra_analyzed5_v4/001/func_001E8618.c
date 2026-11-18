#include "ghidra_types.h"


// USA 001E8618 <- EU 001E8618 (Ghidra, non-matching)

void func_001E8618(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c8);
  iVar2 = *(int *)(iVar1 + 0xe30);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    piVar3 = (int *)(iVar1 + iVar2 * 0x2d0 + 0x14);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1c))(piVar3);
    }
  }
  return;
}

