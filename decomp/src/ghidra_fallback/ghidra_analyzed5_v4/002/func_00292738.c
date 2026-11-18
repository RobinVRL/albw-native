#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 00292738 <- EU 00292760 (Ghidra, non-matching)

undefined4 func_00292738(int param_1,undefined1 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x7e);
  if (puVar1 != (undefined2 *)0x0) {
    *(undefined1 *)(puVar1 + 2) = param_2;
    *puVar1 = 0x72;
  }
  return 1;
}

