#include "ghidra_types.h"


// USA 0056B52C <- EU 0056B4CC (Ghidra, function missing from the decomp table)

int func_0056B52C(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x14);
}

