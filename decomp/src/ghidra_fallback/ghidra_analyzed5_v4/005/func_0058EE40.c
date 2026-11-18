#include "ghidra_types.h"

extern int func_00488ACC(int *param_1);

// USA 0058EE40 <- EU 0058EE18 (Ghidra, non-matching)

undefined4 func_0058EE40(int param_1)

{
  return func_00488ACC((int *)(param_1 + -0x38));
}

