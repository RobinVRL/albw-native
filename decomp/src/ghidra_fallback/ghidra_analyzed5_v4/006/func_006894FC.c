#include "ghidra_types.h"

extern int func_004929B8(undefined4 *param_1);
extern int func_0058FA5C();

// USA 006894FC <- EU 006894D4 (Ghidra, non-matching)

undefined4 func_006894FC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_004929B8(param_1);
  return func_0058FA5C((int)puVar1);
}

