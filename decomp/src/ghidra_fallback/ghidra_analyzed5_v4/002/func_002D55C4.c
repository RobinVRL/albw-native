#include "ghidra_types.h"


// USA 002D55C4 <- EU 002D55A0 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x002d55b8) */

int func_002D55C4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(undefined2 *)(iVar1 + 4) = 0x8d;
  return iVar1 + 8;
}

