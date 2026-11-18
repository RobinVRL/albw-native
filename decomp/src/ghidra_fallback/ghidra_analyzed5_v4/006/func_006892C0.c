#include "ghidra_types.h"

extern int func_004929B8(undefined4 *param_1);
extern int func_0058FA5C();

// USA 006892C0 <- EU 00689298 (Ghidra, non-matching)

undefined4 func_006892C0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_004929B8(param_1);
  return func_0058FA5C((int)puVar1);
}

