#include "ghidra_types.h"

extern int func_0040E1A8(int param_1,float fparam_0);

// USA 0048BD10 <- EU 0048BCE8 (Ghidra, non-matching)

undefined4 func_0048BD10(int *param_1,float fparam_0)

{
  if (*param_1 != 0) {
    return func_0040E1A8(*param_1,fparam_0);
  }
  return 0;
}

