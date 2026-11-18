#include "ghidra_types.h"

extern int func_00588BE4(int param_1);

// USA 001E6CC0 <- EU 001E6CC0 (Ghidra, non-matching)

int func_001E6CC0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x9a0) = 1;
  uVar1 = func_00588BE4(param_1);
  *(undefined4 *)(param_1 + 0x99c) = uVar1;
  return param_1;
}

