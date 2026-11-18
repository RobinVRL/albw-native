#include "ghidra_types.h"


// USA 0011EAA4 <- EU 0011EAA4 (Ghidra, non-matching)

int func_0011EAA4(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 0x10) +
            param_2 * 0x10 + 0x10;
  }
  return iVar1;
}

