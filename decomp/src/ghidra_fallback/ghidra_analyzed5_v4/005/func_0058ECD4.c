#include "ghidra_types.h"

extern int func_00488ACC(int *param_1);

// USA 0058ECD4 <- EU 0058ECAC (Ghidra, non-matching)

undefined4 func_0058ECD4(int param_1)

{
  return func_00488ACC((int *)(param_1 + -0x38));
}

