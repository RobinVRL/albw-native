#include "ghidra_types.h"

extern int func_0040DB44(int param_1,float fparam_0);

// USA 0048BCD8 <- EU 0048BCB0 (Ghidra, non-matching)

undefined4 func_0048BCD8(int param_1,float fparam_0)

{
  if (**(int **)(param_1 + 0x24) != 0) {
    return func_0040DB44(**(int **)(param_1 + 0x24),fparam_0);
  }
  return 0;
}

