#include "ghidra_types.h"


// USA 004A2650 <- EU 004A2628 (Ghidra, non-matching)

int func_004A2650(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      piVar2 = (int *)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + iVar1 * 4);
      if (*piVar2 == 0) {
        *piVar2 = param_2;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return -1;
}

