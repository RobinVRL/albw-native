#include "ghidra_types.h"


// USA 003E06F4 <- EU 003E06D4 (Ghidra, non-matching)

bool func_003E06F4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 != 0) {
    *(int *)(iVar1 + 0x28) = param_2;
    *(undefined4 *)(iVar1 + 0x2c) = param_3;
  }
  return param_2 != 0;
}

