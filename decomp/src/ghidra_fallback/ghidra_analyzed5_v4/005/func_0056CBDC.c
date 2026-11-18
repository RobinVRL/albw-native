#include "ghidra_types.h"

extern int func_0056B470(int param_1);

// USA 0056CBDC <- EU 0056CBB4 (Ghidra, non-matching)

undefined4 func_0056CBDC(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0056B470(*(int *)(*(int *)(param_1 + 4) + 0x3c));
  return *puVar1;
}

