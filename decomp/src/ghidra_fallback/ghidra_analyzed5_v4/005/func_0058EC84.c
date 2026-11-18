#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EC84 <- EU 0058EC5C (Ghidra, non-matching)

undefined4 func_0058EC84(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

