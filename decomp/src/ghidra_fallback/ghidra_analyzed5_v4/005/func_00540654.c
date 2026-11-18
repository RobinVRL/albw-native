#include "ghidra_types.h"

extern int func_00537E40(int param_1,int *param_2);

// USA 00540654 <- EU 0054062C (Ghidra, non-matching)

undefined4 func_00540654(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    for (iVar2 = *(int *)(param_1 + 0x18) - iVar3; iVar2 != (param_1 + 0x14) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      iVar1 = func_00537E40(iVar2,param_2);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

