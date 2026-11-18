#include "ghidra_types.h"


// USA 00296A38 <- EU 00296A60 (Ghidra, non-matching)

void func_00296A38(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar3 = 0;
  do {
    iVar2 = iVar1 + 0x14;
    if (uVar3 < 5) {
      iVar2 = iVar2 + uVar3 * 0x10;
    }
    if (*(int *)(iVar2 + 8) != 0) {
      iVar2 = iVar1 + 0x14;
      if (uVar3 < 5) {
        iVar2 = iVar2 + uVar3 * 0x10;
      }
      iVar6 = iVar1 + 0x14;
      if (uVar3 < 5) {
        iVar6 = iVar6 + uVar3 * 0x10;
      }
      iVar4 = *(int *)(iVar2 + 0xc);
      iVar5 = *(int *)(iVar6 + 0xc);
      for (iVar2 = *(int *)(iVar2 + 4) - iVar4; iVar2 != iVar6 - iVar5;
          iVar2 = *(int *)(iVar2 + iVar4 + 4) - iVar4) {
        *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 0x200;
        *(undefined1 *)(iVar2 + 0x6c) = 1;
      }
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
  return;
}

