#include "ghidra_types.h"

extern int func_00257F48(int param_1,undefined4 param_2,undefined4 param_3,int param_4);

// USA 00294DD0 <- EU 00294DF8 (Ghidra, non-matching)

void func_00294DD0(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  int in_r3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar3 = *(int *)(iVar1 + 0x18);
    iVar4 = *(int *)(iVar1 + 0x20);
    iVar2 = *(int *)(iVar1 + 0x20);
    iVar5 = (iVar1 + 0x14) - iVar2;
    for (iVar1 = iVar3 - iVar4; iVar1 != iVar5; iVar1 = *(int *)(iVar1 + iVar4 + 4) - iVar4) {
      func_00257F48(iVar1,iVar2,iVar3,in_r3);
      iVar2 = extraout_r1;
    }
    return;
  }
  return;
}

