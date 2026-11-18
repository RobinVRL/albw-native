#include "ghidra_types.h"

extern int func_00537D70(int param_1);

// USA 00540784 <- EU 0054075C (Ghidra, non-matching)

undefined4 func_00540784(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    for (iVar2 = *(int *)(param_1 + 0x38) - iVar3; iVar2 != (param_1 + 0x34) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      iVar1 = func_00537D70(iVar2);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    for (iVar2 = *(int *)(param_1 + 0x28) - iVar3; iVar2 != (param_1 + 0x24) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      iVar1 = func_00537D70(iVar2);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

