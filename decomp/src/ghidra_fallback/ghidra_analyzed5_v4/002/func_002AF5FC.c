#include "ghidra_types.h"


// USA 002AF5FC <- EU 002AF5D8 (Ghidra, non-matching)

void func_002AF5FC(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x510);
  *(undefined2 *)(iVar1 + 0x18c) = param_2;
  if (-1 < param_3) {
    *(char *)(iVar1 + 0x18e) = (char)param_3;
  }
  return;
}

