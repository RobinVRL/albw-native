#include "ghidra_types.h"


// USA 0054DDF4 <- EU 0054DDCC (Ghidra, non-matching)

int func_0054DDF4(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 4) {
    iVar1 = *(int *)(param_1 + 0x2d0) + param_2 * 0x38 + 0xe8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

