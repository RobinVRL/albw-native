#include "ghidra_types.h"


// USA 00100174 <- EU 00100174 (Ghidra, function missing from the decomp table)

undefined4 func_00100174(int *param_1)

{
  if (*param_1 != 0) {
    return 0;
  }
  *param_1 = 1;
  return 1;
}

