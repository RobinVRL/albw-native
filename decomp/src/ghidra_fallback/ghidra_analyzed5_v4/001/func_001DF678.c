#include "ghidra_types.h"

extern int func_0040D5E4(int param_1,float fparam_0);

// USA 001DF678 <- EU 001DF678 (Ghidra, non-matching)

undefined4 func_001DF678(int param_1,float fparam_0)

{
  if (**(int **)(param_1 + 0x24) != 0) {
    return func_0040D5E4(**(int **)(param_1 + 0x24),fparam_0);
  }
  return 0;
}

