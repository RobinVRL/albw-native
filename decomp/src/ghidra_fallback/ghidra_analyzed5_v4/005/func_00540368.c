#include "ghidra_types.h"


// USA 00540368 <- EU 00540340 (Ghidra, non-matching)

undefined4 func_00540368(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar3 = *(int *)(iVar1 + 0x20);
    for (iVar2 = *(int *)(iVar1 + 0x18) - iVar3; iVar2 != (iVar1 + 0x14) - *(int *)(iVar1 + 0x20);
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      if ((*(uint *)(iVar2 + 0x38) & param_2) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

