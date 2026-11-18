#include "ghidra_types.h"


// USA 00542A94 <- EU 00542A6C (Ghidra, non-matching)

bool func_00542A94(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0x510) + 0x268) < *(uint *)(*(int *)(param_1 + 0x510) + 0x26c)
  ;
}

