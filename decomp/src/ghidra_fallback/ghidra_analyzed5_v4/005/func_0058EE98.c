#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EE98 <- EU 0058EE70 (Ghidra, non-matching)

undefined4 func_0058EE98(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

