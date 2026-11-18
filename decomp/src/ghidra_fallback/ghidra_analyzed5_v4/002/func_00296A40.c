#include "ghidra_types.h"


// USA 00296A40 <- EU 00296A68 (Ghidra, non-matching)

void * func_00296A40(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  do {
    iVar1 = param_1 + 0x14;
    if (uVar2 < 5) {
      iVar1 = iVar1 + uVar2 * 0x10;
    }
    if (*(int *)(iVar1 + 8) != 0) {
      iVar1 = param_1 + 0x14;
      if (uVar2 < 5) {
        iVar1 = iVar1 + uVar2 * 0x10;
      }
      iVar5 = param_1 + 0x14;
      if (uVar2 < 5) {
        iVar5 = iVar5 + uVar2 * 0x10;
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      iVar4 = *(int *)(iVar5 + 0xc);
      for (iVar1 = *(int *)(iVar1 + 4) - iVar3; iVar1 != iVar5 - iVar4;
          iVar1 = *(int *)(iVar1 + iVar3 + 4) - iVar3) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x200;
        *(undefined1 *)(iVar1 + 0x6c) = 1;
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 3);
  return (void *)param_1;
}

