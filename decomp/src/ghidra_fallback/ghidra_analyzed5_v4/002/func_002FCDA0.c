#include "ghidra_types.h"

extern int func_00230740(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern undefined4 DAT_002fcdb0;
extern undefined4 DAT_002fcdb4;

// USA 002FCDA0 <- EU 002FCD7C (Ghidra, non-matching)
// GLOBAL DAT_002fcdb0 undefined4
// GLOBAL DAT_002fcdb4 undefined4

undefined4 * func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = func_00230740(param_1,DAT_002fcdb0,param_2,param_3,1);
  *puVar1 = DAT_002fcdb4;
  *(undefined2 *)(puVar1 + 0x2b) = 0;
  *(undefined1 *)((int)puVar1 + 0xae) = 0;
  return puVar1;
}

