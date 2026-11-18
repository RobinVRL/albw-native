#include "ghidra_types.h"

extern int func_003D4CD4(undefined2 *param_1);

// USA 003D5684 <- EU 003D5664 (Ghidra, non-matching)

undefined4 * func_003D5684(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  iVar1 = func_003D4CD4((undefined2 *)(param_1 + 3));
  *(undefined1 *)(iVar1 + 0x24) = 1;
  *(undefined4 *)(iVar1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
  return (undefined4 *)(iVar1 + -0xc);
}

