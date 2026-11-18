#include "ghidra_types.h"

extern int func_0056B458(int param_1);

// USA 0056CAB8 <- EU 0056CA90 (Ghidra, non-matching)

undefined4 func_0056CAB8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0056B458(*(int *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}

