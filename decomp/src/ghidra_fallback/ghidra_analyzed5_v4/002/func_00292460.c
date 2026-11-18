#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 00292460 <- EU 00292488 (Ghidra, non-matching)

undefined4 func_00292460(int param_1,undefined1 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x7e);
  if (puVar1 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar1 + 2) = param_2;
    *puVar1 = 0x73;
  }
  return 1;
}

