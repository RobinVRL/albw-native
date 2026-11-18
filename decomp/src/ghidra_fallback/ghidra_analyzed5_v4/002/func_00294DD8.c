#include "ghidra_types.h"

extern int func_00257F48(int param_1,undefined4 param_2,undefined4 param_3,int param_4);

// USA 00294DD8 <- EU 00294E00 (Ghidra, non-matching)

void func_00294DD8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x20);
    iVar5 = (param_1 + 0x14) - iVar1;
    for (iVar3 = iVar2 - iVar4; iVar3 != iVar5; iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4) {
      func_00257F48(iVar3,iVar1,iVar2,param_4);
      iVar1 = extraout_r1;
    }
    return;
  }
  return;
}

