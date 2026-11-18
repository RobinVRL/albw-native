#include "ghidra_types.h"


// USA 004A6CCC <- EU 004A6CA4 (Ghidra, non-matching)

int func_004A6CCC(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 4);
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      piVar2 = (int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + iVar1 * 4);
      if (*piVar2 == 0) {
        *piVar2 = param_2;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return -1;
}

