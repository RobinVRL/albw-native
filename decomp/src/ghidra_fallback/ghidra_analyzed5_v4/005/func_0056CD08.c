#include "ghidra_types.h"

extern int func_0056B47C(int param_1);

// USA 0056CD08 <- EU 0056CCE0 (Ghidra, non-matching)

undefined4 func_0056CD08(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0056B47C(*(int *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}

