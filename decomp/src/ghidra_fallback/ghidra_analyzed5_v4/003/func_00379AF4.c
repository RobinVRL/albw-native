#include "ghidra_types.h"


// USA 00379AF4 <- EU 00379AD0 (Ghidra, non-matching)

int func_00379AF4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    for (iVar1 = *(int *)(param_1 + 0x28) - iVar2;
        iVar1 != (param_1 + 0x24) - *(int *)(param_1 + 0x30);
        iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
      if (*(int *)(iVar1 + 0x28) == param_2) {
        return iVar1;
      }
    }
  }
  return 0;
}

