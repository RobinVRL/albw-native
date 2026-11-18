#include "ghidra_types.h"

extern int func_0019A38C(int param_1);

// USA 002974A0 <- EU 002974C8 (Ghidra, non-matching)

void func_002974A0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x30);
    for (iVar2 = *(int *)(param_1 + 0x28) - iVar3; iVar2 != (param_1 + 0x24) - iVar1;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_0019A38C(iVar2);
    }
    return;
  }
  return;
}

