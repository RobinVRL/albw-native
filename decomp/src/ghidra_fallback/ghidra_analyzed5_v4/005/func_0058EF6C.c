#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EF6C <- EU 0058EF44 (Ghidra, non-matching)

undefined4 func_0058EF6C(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

