#include "ghidra_types.h"

extern int func_001E8BDC(int param_1,undefined4 param_2);

// USA 004ED474 <- EU 004ED44C (Ghidra, non-matching)

undefined4 func_004ED474(int param_1,undefined4 param_2)

{
  return func_001E8BDC(*(int *)(param_1 + 0x18),param_2);
}

