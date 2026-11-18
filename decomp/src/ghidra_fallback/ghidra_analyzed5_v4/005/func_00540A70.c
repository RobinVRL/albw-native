#include "ghidra_types.h"

extern int func_00537DB4(int param_1,int *param_2);

// USA 00540A70 <- EU 00540A48 (Ghidra, non-matching)

undefined4 func_00540A70(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar4 = *(int *)(iVar1 + 0x20);
    for (iVar3 = *(int *)(iVar1 + 0x18) - iVar4; iVar3 != (iVar1 + 0x14) - iVar4;
        iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4) {
      iVar2 = func_00537DB4(iVar3,param_2);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

