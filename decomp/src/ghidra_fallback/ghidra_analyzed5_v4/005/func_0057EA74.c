#include "ghidra_types.h"


// USA 0057EA74 <- EU 0057EA4C (Ghidra, non-matching)

void func_0057EA74(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    iVar1 = *(int *)(param_1 + 0x14);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x10);
    }
    if (iVar1 != 0 && iVar2 != 0) {
      func_0057EA74(iVar2,param_2);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    param_1 = 0;
    if (iVar2 != 0) {
      param_1 = *(int *)(iVar2 + 0x10);
    }
  } while (iVar2 != 0 && param_1 != 0);
  return;
}

