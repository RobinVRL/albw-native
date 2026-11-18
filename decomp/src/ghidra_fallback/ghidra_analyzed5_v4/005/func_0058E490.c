#include "ghidra_types.h"

extern int func_0030D010(int *param_1);

// USA 0058E490 <- EU 0058E468 (Ghidra, non-matching)

undefined4 func_0058E490(int param_1)

{
  return func_0030D010((int *)(param_1 + -0xc));
}

