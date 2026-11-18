#include "ghidra_types.h"

extern int func_00537D70(int param_1);
extern int func_0054030C(int param_1);

// USA 00540988 <- EU 00540960 (Ghidra, non-matching)

undefined4 func_00540988(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = func_0054030C(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    for (iVar1 = *(int *)(param_1 + 0x38) - iVar3; iVar1 != (param_1 + 0x34) - iVar3;
        iVar1 = *(int *)(iVar1 + iVar3 + 4) - iVar3) {
      if ((*(char *)(iVar1 + 0x6a) == '\0') && (iVar2 = func_00537D70(iVar1), iVar2 != 0)) {
        return 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    for (iVar1 = *(int *)(param_1 + 0x28) - iVar3; iVar1 != (param_1 + 0x24) - iVar3;
        iVar1 = *(int *)(iVar1 + iVar3 + 4) - iVar3) {
      if ((*(char *)(iVar1 + 0x6a) == '\0') && (iVar2 = func_00537D70(iVar1), iVar2 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

