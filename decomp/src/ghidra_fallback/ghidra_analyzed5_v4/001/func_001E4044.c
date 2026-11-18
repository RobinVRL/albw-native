#include "ghidra_types.h"

extern int func_002FCC74(int *param_1,undefined2 param_2);

// USA 001E4044 <- EU 001E4044 (Ghidra, non-matching)

bool func_001E4044(int param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = func_002FCC74(*(int **)(param_1 + 0x488),param_2);
  return iVar1 != 0;
}

