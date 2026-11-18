#include "ghidra_types.h"


// USA 0056B538 <- EU 0056B4D8 (Ghidra, function missing from the decomp table)

int func_0056B538(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 4) == 0x101) {
    iVar1 = param_1 + *(int *)(param_1 + 8);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

