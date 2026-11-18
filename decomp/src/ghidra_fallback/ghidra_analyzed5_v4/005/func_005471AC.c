#include "ghidra_types.h"

extern int func_0052EF94(int param_1,int *param_2);

// USA 005471AC <- EU 00547184 (Ghidra, non-matching)

undefined4 func_005471AC(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    iVar5 = *(int *)(iVar1 + 0x30);
    iVar3 = *(int *)(iVar1 + 0x30);
    for (iVar4 = *(int *)(iVar1 + 0x28) - iVar5; iVar4 != (iVar1 + 0x24) - iVar3;
        iVar4 = *(int *)(iVar4 + iVar5 + 4) - iVar5) {
      iVar2 = func_0052EF94(iVar4,param_2);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

