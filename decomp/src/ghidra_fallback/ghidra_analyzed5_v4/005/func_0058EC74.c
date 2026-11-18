#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EC74 <- EU 0058EC4C (Ghidra, non-matching)

undefined4 func_0058EC74(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

