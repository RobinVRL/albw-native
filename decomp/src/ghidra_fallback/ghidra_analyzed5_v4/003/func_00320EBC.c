#include "ghidra_types.h"

extern int func_00407F88(int param_1,float fparam_0);

// USA 00320EBC <- EU 00320E98 (Ghidra, non-matching)

undefined4 func_00320EBC(int *param_1,float fparam_0)

{
  return func_00407F88(*param_1,fparam_0);
}

