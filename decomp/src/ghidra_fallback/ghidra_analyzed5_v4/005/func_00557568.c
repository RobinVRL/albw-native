#include "ghidra_types.h"

extern int func_0055F908(int param_1);

// USA 00557568 <- EU 00557540 (Ghidra, non-matching)

ushort func_00557568(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar2 = 0;
  iVar5 = *(int *)(param_1 + 0xa4);
  iVar6 = *(int *)(param_1 + 0xa8);
  iVar3 = 0;
  if (iVar5 != 0) {
    do {
      uVar1 = func_0055F908(iVar6 + iVar3 * 0x148);
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 | uVar1;
    } while (iVar3 != iVar5);
  }
  iVar3 = *(int *)(param_1 + 0xac);
  iVar5 = *(int *)(param_1 + 0xb0);
  if (iVar3 != 0) {
    do {
      uVar1 = func_0055F908(iVar5 + iVar2 * 0x148);
      iVar2 = iVar2 + 1;
      uVar4 = uVar4 | uVar1;
    } while (iVar2 != iVar3);
  }
  return uVar4;
}

