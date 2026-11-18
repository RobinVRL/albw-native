#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EE38 <- EU 0058EE10 (Ghidra, non-matching)

undefined4 func_0058EE38(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

