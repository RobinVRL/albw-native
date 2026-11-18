#include "ghidra_types.h"


// USA 00580588 <- EU 00580560 (Ghidra, non-matching)

int func_00580588(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = 0;
  iVar3 = *(int *)(param_1 + 0x84);
  iVar5 = *(int *)(param_1 + 0x7c) - iVar3;
  do {
    if (iVar5 == (param_1 + 0x78) - *(int *)(param_1 + 0x84)) {
      return iVar1;
    }
    uVar4 = *(uint *)(iVar5 + 8);
    if ((uVar4 < param_2) ||
       (iVar2 = *(int *)(iVar5 + 0xc) + 0x10 + iVar5,
       uVar4 < (((iVar2 + param_3) - 1U & ~(param_3 - 1U)) - iVar2) + param_2)) goto LAB_00580604;
    if (param_4 == 0) {
      return iVar5;
    }
    if (iVar1 == 0) {
LAB_00580600:
      iVar1 = iVar5;
    }
    else if (param_4 == 1) {
      if (uVar4 < *(uint *)(iVar1 + 8)) goto LAB_00580600;
    }
    else if ((param_4 == 2) && (*(uint *)(iVar1 + 8) < uVar4)) goto LAB_00580600;
LAB_00580604:
    iVar5 = *(int *)(iVar5 + iVar3 + 4) - iVar3;
  } while( true );
}

