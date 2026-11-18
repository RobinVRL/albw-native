#include "ghidra_types.h"

extern int func_00537E04(int param_1,int param_2);

// USA 00540488 <- EU 00540460 (Ghidra, non-matching)

undefined4 func_00540488(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar4 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x20);
    for (iVar3 = *(int *)(param_1 + 0x18) - iVar4; iVar3 != (param_1 + 0x14) - iVar2;
        iVar3 = *(int *)(iVar3 + iVar4 + 4) - iVar4) {
      if ((*(char *)(iVar3 + 0x6a) != '\0') && (iVar1 = func_00537E04(iVar3,param_2), iVar1 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

