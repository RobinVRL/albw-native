#include "ghidra_types.h"


// USA 0052E8BC <- EU 0052E894 (Ghidra, non-matching)

undefined4 func_0052E8BC(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (*(char *)(param_1 + iVar1 * 0xc + 0x699) != '\f') {
    iVar1 = iVar1 + 1;
    if (2 < iVar1) {
      return 0;
    }
  }
  if (param_1 + 0x694 + iVar1 * 0xc == 0) {
    return 0;
  }
  if (*(short *)(*(int *)(param_1 + 0x614) + 0x42) == 0x9c) {
    return 0;
  }
  return 1;
}

