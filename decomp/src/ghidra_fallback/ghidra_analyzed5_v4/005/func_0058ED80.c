#include "ghidra_types.h"

extern int func_00488ACC(int *param_1);

// USA 0058ED80 <- EU 0058ED58 (Ghidra, non-matching)

undefined4 func_0058ED80(int param_1)

{
  return func_00488ACC((int *)(param_1 + -0x38));
}

