#include "ghidra_types.h"


// USA 005804EC <- EU 005804C4 (Ghidra, non-matching)

int func_005804EC(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x7c);
  do {
    iVar2 = iVar2 - *(int *)(param_1 + 0x84);
    if (iVar2 == (param_1 + 0x78) - *(int *)(param_1 + 0x84)) {
      return iVar1;
    }
    uVar3 = *(uint *)(iVar2 + 8);
    if (uVar3 < param_2) goto LAB_00580538;
    if (param_3 == 0) {
      return iVar2;
    }
    if (iVar1 == 0) {
LAB_00580534:
      iVar1 = iVar2;
    }
    else if (param_3 == 1) {
      if (uVar3 < *(uint *)(iVar1 + 8)) goto LAB_00580534;
    }
    else if ((param_3 == 2) && (*(uint *)(iVar1 + 8) < uVar3)) goto LAB_00580534;
LAB_00580538:
    iVar2 = *(int *)(iVar2 + *(int *)(param_1 + 0x84) + 4);
  } while( true );
}

