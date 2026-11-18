#include "ghidra_types.h"

extern int func_00556068(int param_1);

// USA 0054B430 <- EU 0054B408 (Ghidra, non-matching)

undefined4 func_0054B430(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x150) < 1) {
    iVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x14c) == 0) goto LAB_0054b470;
    iVar4 = *(int *)(param_1 + 0x14c) - *(int *)(param_1 + 0x154);
  }
  if (iVar4 != 0) {
    do {
      puVar1 = func_00556068(iVar4);
      if (puVar1 == param_2) goto LAB_0054b484;
      iVar3 = *(int *)(*(int *)(param_1 + 0x154) + iVar4 + 4);
      bVar5 = iVar3 == param_1 + 0x148;
      if (!bVar5) {
        iVar4 = iVar3 - *(int *)(param_1 + 0x154);
        bVar5 = iVar4 == 0;
      }
    } while (!bVar5);
  }
LAB_0054b470:
  if (param_2[0xb3] == *(int *)(param_1 + 0xd0)) {
LAB_0054b484:
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

