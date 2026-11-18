#include "ghidra_types.h"

extern int func_00537E04(int param_1,int param_2);

// USA 005405D4 <- EU 005405AC (Ghidra, non-matching)

int func_005405D4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    for (iVar2 = *(int *)(param_1 + 0x28) - iVar3; iVar2 != (param_1 + 0x24) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      iVar1 = func_00537E04(iVar2,param_2);
      if ((iVar1 != 0) || ((*(int *)(iVar2 + 0x40) != -1 && (*(int *)(iVar2 + 0x40) == param_2)))) {
        return iVar2;
      }
    }
  }
  return 0;
}

