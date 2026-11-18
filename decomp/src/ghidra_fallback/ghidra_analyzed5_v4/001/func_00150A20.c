#include "ghidra_types.h"

extern int func_0019A6DC(int param_1,int param_2,int param_3);

// USA 00150A20 <- EU 00150A20 (Ghidra, non-matching)

void func_00150A20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x400) != 0 && param_2 != -1) {
    iVar3 = *(int *)(param_1 + 0x404);
    iVar1 = *(int *)(param_1 + 0x404);
    for (iVar2 = *(int *)(param_1 + 0x3fc) - iVar3; iVar2 != (param_1 + 0x3f8) - iVar1;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      func_0019A6DC(iVar2,param_2,param_3);
    }
  }
  return;
}

