#include "ghidra_types.h"


// USA 0054050C <- EU 005404E4 (Ghidra, non-matching)

undefined4 func_0054050C(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    for (iVar1 = *(int *)(param_1 + 0x18) - iVar2;
        iVar1 != (param_1 + 0x14) - *(int *)(param_1 + 0x20);
        iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
      if (*(char *)(iVar1 + 0x6a) != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

