#include "ghidra_types.h"

extern int func_0040E1BC(int param_1,undefined4 param_2,float fparam_0);

// USA 0048BD24 <- EU 0048BCFC (Ghidra, non-matching)

undefined4 func_0048BD24(int param_1,undefined4 param_2,float fparam_0)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    return func_0040E1BC(*(int *)(param_1 + 0xc),param_2,fparam_0);
  }
  return 0;
}

