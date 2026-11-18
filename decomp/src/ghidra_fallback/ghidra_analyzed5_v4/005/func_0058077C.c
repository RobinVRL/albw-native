#include "ghidra_types.h"


// USA 0058077C <- EU 00580754 (Ghidra, non-matching)

int func_0058077C(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < *(uint *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4);
    if (0 < (int)param_2) {
      if ((param_2 & 1) != 0) {
        iVar1 = *(int *)(iVar1 + 4);
      }
      for (iVar2 = (int)param_2 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar1 = *(int *)(*(int *)(iVar1 + 4) + 4);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

