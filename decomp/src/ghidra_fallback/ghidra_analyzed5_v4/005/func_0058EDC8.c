#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EDC8 <- EU 0058EDA0 (Ghidra, non-matching)

undefined4 func_0058EDC8(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

