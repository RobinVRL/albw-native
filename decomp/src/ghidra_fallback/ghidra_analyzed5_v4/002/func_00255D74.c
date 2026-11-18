#include "ghidra_types.h"


// USA 00255D74 <- EU 00255D48 (Ghidra, function missing from the decomp table)

undefined4 func_00255D74(int param_1,short param_2)

{
  *(short *)(*(int *)(param_1 + 0x10) + 0x50e) =
       param_2 + *(short *)(*(int *)(param_1 + 0x10) + 0x50e);
  return 1;
}

