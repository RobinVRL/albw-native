#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EB34 <- EU 0058EB0C (Ghidra, non-matching)

undefined4 func_0058EB34(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

