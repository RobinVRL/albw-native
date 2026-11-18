#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 00292428 <- EU 00292450 (Ghidra, non-matching)

undefined4 func_00292428(int param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x7e);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0x89;
    *(undefined1 *)(puVar1 + 2) = 1;
  }
  return 1;
}

