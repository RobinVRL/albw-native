#include "ghidra_types.h"

extern int func_001031B4(undefined4 *param_1,undefined4 *param_2);

// USA 0049F7B8 <- EU 0049F790 (Ghidra, non-matching)

void func_0049F7B8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_001031B4(param_1,param_2);
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 100) = param_3;
  return;
}

