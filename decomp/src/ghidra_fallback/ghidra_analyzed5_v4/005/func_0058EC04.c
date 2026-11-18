#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EC04 <- EU 0058EBDC (Ghidra, non-matching)

undefined4 func_0058EC04(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

