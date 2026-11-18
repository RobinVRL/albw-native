#include "ghidra_types.h"

extern int func_0010B830(undefined4 *param_1);

// USA 001B80C0 <- EU 001B80C0 (Ghidra, non-matching)

undefined4 * func_001B80C0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x13] = 0;
  puVar1 = func_0010B830(param_1 + 0x14);
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  return puVar1 + -0x14;
}

