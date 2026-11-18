#include "ghidra_types.h"

extern int func_0048A134(undefined4 *param_1);
extern int func_0058FA5C();

// USA 0048D7A8 <- EU 0048D780 (Ghidra, non-matching)

undefined4 func_0048D7A8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0048A134(param_1);
  return func_0058FA5C((int)puVar1);
}

