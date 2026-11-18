#include "ghidra_types.h"


// USA 00540504 <- EU 005404DC (Ghidra, non-matching)

undefined4 func_00540504(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar3 = *(int *)(iVar1 + 0x20);
    for (iVar2 = *(int *)(iVar1 + 0x18) - iVar3; iVar2 != (iVar1 + 0x14) - *(int *)(iVar1 + 0x20);
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      if (*(char *)(iVar2 + 0x6a) != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

