#include "ghidra_types.h"

extern int func_00258CCC(int param_1,undefined4 param_2);

// USA 00296BF0 <- EU 00296C18 (Ghidra, non-matching)

void func_00296BF0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x20);
    for (iVar2 = *(int *)(param_1 + 0x18) - iVar3; iVar2 != (param_1 + 0x14) - iVar1;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_00258CCC(iVar2,param_2);
    }
  }
  return;
}

