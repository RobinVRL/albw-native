#include "ghidra_types.h"


// USA 003DFEC8 <- EU 003DFEA8 (Ghidra, non-matching)

bool func_003DFEC8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != 0) {
    *(int *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
  }
  return param_2 != 0;
}

