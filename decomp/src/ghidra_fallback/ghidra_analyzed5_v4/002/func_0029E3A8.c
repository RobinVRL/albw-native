#include "ghidra_types.h"

extern int func_0043879C(int param_1,float fparam_0);

// USA 0029E3A8 <- EU 0029E384 (Ghidra, non-matching)

undefined4 func_0029E3A8(int param_1,float fparam_0)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return func_0043879C(*(int *)(param_1 + 0x18),fparam_0);
  }
  return 0;
}

