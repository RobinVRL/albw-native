#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int func_004A1520();
extern undefined4 DAT_00328910;

// USA 00328910 <- EU 003288EC (Ghidra, non-matching)
// GLOBAL DAT_00328910 undefined4

undefined4 * func_00328910(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00328910;
  func_002E1B70(param_1 + 0xc);
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

