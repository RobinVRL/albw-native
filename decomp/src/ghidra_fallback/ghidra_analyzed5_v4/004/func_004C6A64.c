#include "ghidra_types.h"

extern int func_002E2188(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);

// USA 004C6A64 <- EU 004C6A3C (Ghidra, non-matching)

undefined4 func_004C6A64(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if (*(int *)(param_1 + 0x5b0) != 0) {
    return func_002E2188(*(int *)(param_1 + 0x5b0),param_2,param_3,param_4);
  }
  return 0;
}

