#include "ghidra_types.h"


// USA 004128D8 <- EU 004128B8 (Ghidra, non-matching)

int func_004128D8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int **)(param_1 + 4);
  iVar2 = 0;
  iVar5 = 0x80;
  while (piVar3 != (int *)(param_1 + 4)) {
    iVar4 = piVar3[-0x2f] + (uint)*(byte *)((int)piVar3 + -0x73);
    iVar1 = UnsignedSaturate(iVar4,7);
    UnsignedDoesSaturate(iVar4,7);
    if (iVar1 < iVar5) {
      iVar2 = (int)(piVar3 + -0x43);
    }
    piVar3 = (int *)*piVar3;
    if (iVar1 < iVar5) {
      iVar5 = iVar1;
    }
  }
  return iVar2;
}

