#include "ghidra_types.h"


// USA 00584AA0 <- EU 00584A78 (Ghidra, non-matching)

undefined4 func_00584AA0(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x18); iVar1 = iVar1 - *(int *)(param_1 + 0x20),
      iVar1 != (param_1 + 0x14) - *(int *)(param_1 + 0x20);
      iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x20) + 4)) {
    if (*(char *)(iVar1 + 0x10) != '\0') {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  while( true ) {
    iVar1 = iVar1 - *(int *)(param_1 + 0x30);
    if (iVar1 == (param_1 + 0x24) - *(int *)(param_1 + 0x30)) {
      return 0;
    }
    if (*(char *)(iVar1 + 0x10) != '\0') break;
    iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x30) + 4);
  }
  return 1;
}

