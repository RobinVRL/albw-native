#include "ghidra_types.h"


// USA 00564678 <- EU 00564650 (Ghidra, non-matching)

undefined4 func_00564678(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x68) + 8);
}

