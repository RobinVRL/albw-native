#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);

// USA 0028F7E4 <- EU 0028F80C (Ghidra, non-matching)

undefined4 func_0028F7E4(int param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)func_002D55D0(*(int *)(*(int *)(param_1 + 0x14) + 0x48),0x7e);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0x53;
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  return 1;
}

