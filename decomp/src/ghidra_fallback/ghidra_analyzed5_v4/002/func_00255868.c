#include "ghidra_types.h"

extern int func_00255710(int param_1,undefined4 param_2);

// USA 00255868 <- EU 00255890 (Ghidra, non-matching)

undefined4 func_00255868(int param_1)

{
  return func_00255710(*(int *)(param_1 + 0x10) + 0x40c,5);
}

