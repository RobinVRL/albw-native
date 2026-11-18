#include "ghidra_types.h"


// USA 00549BD0 <- EU 00549BA8 (Ghidra, non-matching)

undefined4 func_00549BD0(int param_1,int param_2)

{
  if (((param_2 == 0) || ((*(uint *)(param_2 + 0x2e0) & 8) == 0)) &&
     ((*(char *)(param_1 + 0x7c) == '\0' || param_2 == 0 || ((*(uint *)(param_2 + 0x2e0) & 1) == 0))
     )) {
    return 0;
  }
  return 1;
}

