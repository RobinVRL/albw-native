#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);

// USA 00529744 <- EU 0052971C (Ghidra, non-matching)

bool func_00529744(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint unaff_r8;
  uint uVar6;
  longlong lVar7;
  
  piVar4 = *(int **)(param_1 + 0x20);
  iVar1 = piVar4[2];
  if (iVar1 < 0) {
    lVar7 = func_001104E4((iVar1 - param_3) + 1,param_3);
    iVar1 = (int)lVar7;
  }
  else {
    lVar7 = func_001104E4((iVar1 + param_3) - 1,param_3);
    iVar1 = (int)lVar7;
  }
  uVar2 = iVar1 * param_3;
  uVar6 = 0;
  piVar5 = *(int **)(param_1 + 0x24);
  uVar3 = *piVar4 + piVar4[1];
  if (uVar2 < uVar3) {
    unaff_r8 = uVar3 - uVar2;
  }
  iVar1 = piVar5[2];
  if (uVar2 >= uVar3) {
    unaff_r8 = 0;
  }
  if (iVar1 < 0) {
    lVar7 = func_001104E4((iVar1 - param_3) + 1,param_3);
    iVar1 = (int)lVar7;
  }
  else {
    lVar7 = func_001104E4((iVar1 + param_3) - 1,param_3);
    iVar1 = (int)lVar7;
  }
  if (iVar1 * param_3 < (uint)(*piVar5 + piVar5[1])) {
    uVar6 = (*piVar5 + piVar5[1]) - iVar1 * param_3;
  }
  return param_2 <= unaff_r8 || param_2 <= uVar6;
}

