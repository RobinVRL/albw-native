#include "ghidra_types.h"


// USA 00379AEC <- EU 00379AC8 (Ghidra, non-matching)

int func_00379AEC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    iVar3 = *(int *)(iVar1 + 0x30);
    for (iVar2 = *(int *)(iVar1 + 0x28) - iVar3; iVar2 != (iVar1 + 0x24) - *(int *)(iVar1 + 0x30);
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      if (*(int *)(iVar2 + 0x28) == param_2) {
        return iVar2;
      }
    }
  }
  return 0;
}

