#include "ghidra_types.h"


// USA 00580654 <- EU 0058062C (Ghidra, non-matching)

int func_00580654(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x80) < 1) {
    iVar5 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x78) == 0) {
      return 0;
    }
    iVar5 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x84);
  }
  if (iVar5 != 0) {
    iVar2 = iVar1;
    iVar1 = iVar5;
    while( true ) {
      uVar4 = *(uint *)(iVar1 + 8);
      if ((uVar4 < param_2) ||
         (uVar3 = *(int *)(iVar1 + 0xc) + 0x10 + iVar1 + (uVar4 - param_2),
         uVar4 < (uVar3 - (uVar3 & ~(param_3 - 1U))) + param_2)) goto LAB_005806ec;
      if (param_4 == 0) break;
      if (iVar2 == 0) {
LAB_005806e8:
        iVar2 = iVar1;
      }
      else if (param_4 == 1) {
        if (uVar4 < *(uint *)(iVar2 + 8)) goto LAB_005806e8;
      }
      else if ((param_4 == 2) && (*(uint *)(iVar2 + 8) < uVar4)) goto LAB_005806e8;
LAB_005806ec:
      iVar1 = *(int *)(*(int *)(param_1 + 0x84) + iVar1);
      bVar6 = iVar1 == param_1 + 0x78;
      if (!bVar6) {
        iVar1 = iVar1 - *(int *)(param_1 + 0x84);
        bVar6 = iVar1 == 0;
      }
      if (bVar6) {
        return iVar2;
      }
    }
  }
  return iVar1;
}

