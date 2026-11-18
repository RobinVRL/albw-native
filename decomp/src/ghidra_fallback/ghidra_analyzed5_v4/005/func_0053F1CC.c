#include "ghidra_types.h"


// USA 0053F1CC <- EU 0053F1A4 (Ghidra, non-matching)

undefined4 func_0053F1CC(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(*(int *)(param_1 + 0x14) + 0x42) == 0x46) {
    if (*param_2 == 0) {
      return 1;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x1c);
    for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 0x4b0); iVar2 = iVar2 + 1) {
      if (*param_2 == *(int *)(iVar1 + iVar2 * 4 + 0x488)) {
        return 1;
      }
    }
  }
  return 0;
}

