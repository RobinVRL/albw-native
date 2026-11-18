#include "ghidra_types.h"


// USA 00540370 <- EU 00540348 (Ghidra, non-matching)

undefined4 func_00540370(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    for (iVar1 = *(int *)(param_1 + 0x18) - iVar2;
        iVar1 != (param_1 + 0x14) - *(int *)(param_1 + 0x20);
        iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
      if ((*(uint *)(iVar1 + 0x38) & param_2) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

