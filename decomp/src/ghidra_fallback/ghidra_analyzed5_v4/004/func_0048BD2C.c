#include "ghidra_types.h"

extern int func_0040E1BC(int param_1,undefined4 param_2,float fparam_0);

// USA 0048BD2C <- EU 0048BD04 (Ghidra, non-matching)

undefined4 func_0048BD2C(int *param_1,undefined4 param_2,float fparam_0)

{
  if (*param_1 != 0) {
    return func_0040E1BC(*param_1,param_2,fparam_0);
  }
  return 0;
}

