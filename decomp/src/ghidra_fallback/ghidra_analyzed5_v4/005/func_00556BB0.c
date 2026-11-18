#include "ghidra_types.h"


// USA 00556BB0 <- EU 00556B48 (Ghidra, function missing from the decomp table)

undefined1 func_00556BB0(int param_1)

{
  return *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x59a);
}

