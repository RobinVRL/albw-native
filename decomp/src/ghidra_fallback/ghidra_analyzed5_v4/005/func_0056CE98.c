#include "ghidra_types.h"

extern int func_0056B494(int param_1);

// USA 0056CE98 <- EU 0056CE70 (Ghidra, non-matching)

undefined4 func_0056CE98(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0056B494(*(int *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}

