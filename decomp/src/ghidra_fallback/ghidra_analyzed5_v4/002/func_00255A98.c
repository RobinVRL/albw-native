#include "ghidra_types.h"

extern int func_00255710(int param_1,undefined4 param_2);

// USA 00255A98 <- EU 00255A28 (Ghidra, function missing from the decomp table)

undefined4 func_00255A98(int param_1)

{
  return func_00255710(*(int *)(param_1 + 0x10) + 0x40c,9);
}

