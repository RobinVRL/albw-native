#include "ghidra_types.h"


// USA 0056ACC8 <- EU 0056ACA0 (Ghidra, non-matching)

int func_0056ACC8(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 0x14) == 0x6800) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return param_1 + *(int *)(iVar1 + 4);
}

