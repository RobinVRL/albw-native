#include "ghidra_types.h"

extern int func_0048FBB4(undefined4 *param_1);
extern int func_0058FA5C();

// USA 004937F0 <- EU 004937C8 (Ghidra, non-matching)

undefined4 func_004937F0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0048FBB4(param_1);
  return func_0058FA5C((int)puVar1);
}

