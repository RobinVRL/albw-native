#include "ghidra_types.h"


// USA 00523800 <- EU 005237D8 (Ghidra, non-matching)

int func_00523800(int param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x70) != '\t') &&
      (iVar1 = *(int *)(param_1 + 0x2c0), *(int *)(param_1 + 0x2c4) != -1 || iVar1 != -1)) &&
     (-1 < iVar1 - *(int *)(param_1 + 0x2c8))) {
    return iVar1 - *(int *)(param_1 + 0x2c8);
  }
  return 0;
}

