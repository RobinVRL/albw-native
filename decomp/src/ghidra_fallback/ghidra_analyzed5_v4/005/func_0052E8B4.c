#include "ghidra_types.h"


// USA 0052E8B4 <- EU 0052E88C (Ghidra, non-matching)

undefined4 func_0052E8B4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  while (*(char *)(iVar1 + iVar2 * 0xc + 0x699) != '\f') {
    iVar2 = iVar2 + 1;
    if (2 < iVar2) {
      return 0;
    }
  }
  if (iVar1 + 0x694 + iVar2 * 0xc == 0) {
    return 0;
  }
  if (*(short *)(*(int *)(iVar1 + 0x614) + 0x42) == 0x9c) {
    return 0;
  }
  return 1;
}

