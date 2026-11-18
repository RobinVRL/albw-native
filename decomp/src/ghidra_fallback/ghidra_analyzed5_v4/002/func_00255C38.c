#include "ghidra_types.h"


// USA 00255C38 <- EU 00255BD4 (Ghidra, function missing from the decomp table)

int func_00255C38(int param_1)

{
  if (param_1 < 0) {
    param_1 = 0x2d;
  }
  return param_1;
}

