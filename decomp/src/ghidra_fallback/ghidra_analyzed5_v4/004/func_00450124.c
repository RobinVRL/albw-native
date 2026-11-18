#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int func_0058FA5C();

// USA 00450124 <- EU 004500FC (Ghidra, non-matching)

undefined4 func_00450124(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_004B9AA0(param_1);
  return func_0058FA5C((int)puVar1);
}

