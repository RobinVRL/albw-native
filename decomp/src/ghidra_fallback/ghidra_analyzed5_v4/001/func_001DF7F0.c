#include "ghidra_types.h"

extern int func_0040E1B0(int param_1,int param_2,float fparam_0);

// USA 001DF7F0 <- EU 001DF7F0 (Ghidra, non-matching)

undefined4 func_001DF7F0(int param_1,float fparam_0)

{
  if (**(int **)(param_1 + 0x24) != 0) {
    return func_0040E1B0(**(int **)(param_1 + 0x24),1,fparam_0);
  }
  return 0;
}

