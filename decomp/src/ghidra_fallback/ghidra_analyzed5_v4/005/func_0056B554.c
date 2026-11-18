#include "ghidra_types.h"


// USA 0056B554 <- EU 0056B4F4 (Ghidra, function missing from the decomp table)

int func_0056B554(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1c) == -1) || (*(short *)(param_1 + 0x18) != 0x2210)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + *(int *)(param_1 + 0x1c);
  }
  return iVar1;
}

