#include "ghidra_types.h"

extern int func_004A1520();
extern int func_0058FA5C();
extern undefined4 DAT_0048c7bc;

// USA 0048C7CC <- EU 0048C7A4 (Ghidra, non-matching)
// GLOBAL DAT_0048c7bc undefined4

undefined4 func_0048C7CC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0048c7bc;
  puVar1 = func_004A1520(param_1);
  return func_0058FA5C((int)puVar1);
}

