#include "ghidra_types.h"

extern int func_00257F98(int param_1);

// USA 00294E2C <- EU 00294E54 (Ghidra, non-matching)

void func_00294E2C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x20);
    for (iVar2 = *(int *)(param_1 + 0x18) - iVar3; iVar2 != (param_1 + 0x14) - iVar1;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_00257F98(iVar2);
    }
    return;
  }
  return;
}

