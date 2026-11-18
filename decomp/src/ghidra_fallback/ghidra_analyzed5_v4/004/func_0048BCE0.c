#include "ghidra_types.h"

extern int func_0040DB44(int param_1,float fparam_0);

// USA 0048BCE0 <- EU 0048BCB8 (Ghidra, non-matching)

undefined4 func_0048BCE0(int *param_1,float fparam_0)

{
  if (*param_1 != 0) {
    return func_0040DB44(*param_1,fparam_0);
  }
  return 0;
}

