#include "ghidra_types.h"

extern int func_004A1520();

// USA 00297934 <- EU 0029795C (Ghidra, non-matching)

undefined4 * func_00297934(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_004A1520((undefined4 *)(param_1 + 4));
  return puVar1 + -1;
}

