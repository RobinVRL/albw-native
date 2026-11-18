#include "ghidra_types.h"

extern int func_002227F4(int param_1,undefined4 param_2,uint param_3);

// USA 002228D0 <- EU 002228D0 (Ghidra, non-matching)

undefined4 func_002228D0(int param_1,int param_2,uint param_3)

{
  if ((*(int *)(param_1 + 0x1c) != 0) && (**(int **)(*(int *)(param_1 + 0x1c) + 0x14) != param_2)) {
    return func_002227F4(param_1,param_2,param_3);
  }
  return 0;
}

