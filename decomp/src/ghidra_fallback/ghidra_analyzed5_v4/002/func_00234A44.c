#include "ghidra_types.h"

extern int func_0048FBB4(undefined4 *param_1);
extern int func_0058FA5C();

// USA 00234A44 <- EU 00234A44 (Ghidra, non-matching)

undefined4 func_00234A44(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0048FBB4(param_1);
  return func_0058FA5C((int)puVar1);
}

