#include "ghidra_types.h"


// USA 005576F0 <- EU 005576C8 (Ghidra, non-matching)

undefined4 func_005576F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = *(int *)(param_1 + 0xa4);
  iVar2 = 0;
  iVar4 = *(int *)(param_1 + 0xa8);
  if (iVar5 != 0) {
    do {
      iVar1 = (**(code **)(*(int *)(iVar4 + iVar2 * 0x148) + 0x3c))((int *)(iVar4 + iVar2 * 0x148));
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar5);
  }
  iVar4 = *(int *)(param_1 + 0xac);
  iVar2 = *(int *)(param_1 + 0xb0);
  if (iVar4 != 0) {
    do {
      iVar5 = (**(code **)(*(int *)(iVar2 + iVar3 * 0x148) + 0x3c))((int *)(iVar2 + iVar3 * 0x148));
      if (iVar5 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar4);
  }
  return 0;
}

