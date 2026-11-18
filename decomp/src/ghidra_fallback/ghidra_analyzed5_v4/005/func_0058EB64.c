#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);

// USA 0058EB64 <- EU 0058EB3C (Ghidra, non-matching)

undefined4 func_0058EB64(int param_1)

{
  return func_004B9AA0((int *)(param_1 + -0x38));
}

