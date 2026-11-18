#include "ghidra_types.h"


// USA 00407788 <- EU 00407768 (Ghidra, non-matching)

undefined4 * func_00407788(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[4] = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  iVar1 = 1;
  param_1[5] = 0;
  iVar2 = 1;
  do {
    iVar1 = iVar1 + 2;
    param_1[iVar2 + 5] = 0;
    param_1[iVar2 + 6] = 0;
    iVar2 = iVar2 + 2;
  } while (iVar1 < 9);
  return param_1;
}

