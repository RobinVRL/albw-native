#include "ghidra_types.h"

extern int func_00199EC8(int param_1);

// USA 0014E460 <- EU 0014E460 (Ghidra, non-matching)

void func_0014E460(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x400) != 0) {
    iVar3 = *(int *)(param_1 + 0x404);
    iVar1 = *(int *)(param_1 + 0x404);
    for (iVar2 = *(int *)(param_1 + 0x3fc) - iVar3; iVar2 != (param_1 + 0x3f8) - iVar1;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_00199EC8(iVar2);
    }
    return;
  }
  return;
}

